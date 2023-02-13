#include <unistd.h>
#include <pthread.h>
#include <stdio.h>

void* ReadAndPrintFile(void* fileInfo);

void* ReadAndPrintFile(void* fileInfo){
	FILE* inputFile = fopen(/*File name goes here*/, "r"); //I recommend using this to read your file.

	if (inputFile == NULL) {
		puts("Error opening file in thread."); //You may want to make this error message better if you run into it.
		return NULL;
	}

	//Read each line of the file, and for each line, print it to the terminal immediately.
	//Do not buffer the lines (as in, do not store them all before printing, just print them
	//as soon as you read them.)



	fclose(inputFile);//Close the file

	return NULL;
}

int main(){
	puts("Program start...\n");
	//Create three pthread_t objects
	
	//Run those pthreads using pthread_create, which will look like this:
	//pthread_create([Pointer to a pthread_t], NULL, [A function that returns a void pointer], [An argument to pass to that function]);
	//pthread_create returns an integer that tells you if anything went wrong. A 0 means you're clear to proceed, -1 means something is wrong.

	//Use pthread_join to wait for the three threads to finish

	return 0;
}
