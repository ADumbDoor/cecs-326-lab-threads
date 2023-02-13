#include <unistd.h>
#include <pthread.h>
#include <stdio.h>

struct FileInfo{
	char* fileName;
};

void* ReadAndPrintFile(void* fileInfo);

void* ReadAndPrintFile(void* fileInfo){
	puts("Beginning thread.\n");
	struct FileInfo myFileInfo = *(struct FileInfo*)fileInfo;
	printf("Going to open file: %s\n", myFileInfo.fileName);
	FILE* inputFile = fopen(myFileInfo.fileName, "r");
	printf("File obtained: %p\n", inputFile);
	if(inputFile == NULL){
		printf("Failed to open file: %s, aborting.\n", myFileInfo.fileName);
		return NULL;
	}
	char buffer[250];
	printf("Read start...\n");
	while(fread(buffer, 1, sizeof(buffer), inputFile)){
		printf("%s\n", buffer);
	}
	printf("Finished reading %s.\n", myFileInfo.fileName);
	fclose(inputFile);
	return NULL;
}

int main(){
	puts("Start program...\n");
	pthread_t thread1, thread2, thread3;
	struct FileInfo fileInfo[3];
	fileInfo[0].fileName = "File1.txt";
	fileInfo[1].fileName = "File2.txt";
	fileInfo[2].fileName = "File3.txt";
	int returnCode1 = 0, returnCode2 = 0, returnCode3 = 0;
	returnCode1 = pthread_create(&thread1, NULL, ReadAndPrintFile, (void*)&fileInfo[0]);
	returnCode2 = pthread_create(&thread1, NULL, ReadAndPrintFile, (void*)&fileInfo[1]);
	returnCode3 = pthread_create(&thread1, NULL, ReadAndPrintFile, (void*)&fileInfo[2]);
	if( (returnCode1 + returnCode2 + returnCode3) ){
		printf("Failed to run threads. %i, %i, %i\n", returnCode1, returnCode2, returnCode3);
		return 1;
	}
	puts("We now wait for the threads to finish...\n");
	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
	pthread_join(thread3, NULL);
}
