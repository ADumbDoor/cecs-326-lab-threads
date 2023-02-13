# CECS 326 Lab 1: Threads in C

## Assignment Description

Posix systems have a powerful tool for us to use called pthreads. These allow us to do multithreading very easily. I've given you three text files, and one C file. Please use this information and the model provided in [threads.c](threads.c), write a program where the initial (main) thread creates three threads, and has each of those threads read from one of the three given text files ([File1.txt](File1.txt), [File2.txt](File2.txt), [File3.txt](File3.txt)). Then, have each thread output the entire contents of each file to the main output. This should all happen simultaneously. If the output looks a little funny, that's okay.
  
This program should be coded in C, using the [gcc C compiler](https://gcc.gnu.org/) on POSIX (i.e. Linux or MacOS) systems.
  
Answer the following questions in a long-form comment at the top of your code:

1. Explain what the pthreads are doing in this program
2. Explain the advantage of using multiple pthreads as opposed to one single thread when doing file I/O
3. Explain why the output looks the way that it looks.

### Tips

On some systems (mainly, Linux using `gcc`), the compiler option `-pthread` may have to be added in order to avoid an error from not being able to link the libraries. On MacOS (which links `gcc` to the `clang` compiler), this should not be an issue.

## Deliverables

I will require the following items for grading:

* Your `*.c` source code file
* The answer to the two questions as comments in your code
* At least one screenshot of your executed code, in `*.png` or `*.jpg` format

Submit your files through your git repository. Your submission must follow the following rules, else *I will not grade it and you will receive a zero for the submission*:

* Do not use compression on your files
* Make sure that all significant code is *commented* with your own explanations--even the code I have provided to you


## Grading scale
