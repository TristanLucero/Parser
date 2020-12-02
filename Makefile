## Tristan Lucero (R11597605) | Assignment #4 | 10/11/2020
## This is a make file to put together 
## front.h parser.h and Tristan_Lucero_R11597605_Assignment3.c
## The code is for a lexical analyzer

#I would strongly recommend NOT changing any lines below except the CC and MYFILE lines.
#Before running this file, run the command:   module load gnu


EXECS=danc_parser

#Replace the g++ with gcc if using C
CC=gcc

#Replace with the name of your C or C++ source code file.
MYFILE=front.c
MYFILE2=Tristan_Lucero_R11597605_Assignment4.c
MYFILE3=parser.h
MYFILE4=front.h

all: ${EXECS}

${EXECS}: ${MYFILE} ${MYFILE2} ${MYFILE3} ${MYFILE4}
	${CC} -o ${EXECS} ${MYFILE} ${MYFILE2} ${MYFILE3} ${MYFILE4}

clean:
	rm -f ${EXECS}