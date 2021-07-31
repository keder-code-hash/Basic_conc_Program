
#**1**

#hello:hello.c
#	gcc hello.c -o hello








#***2***
#multiple source file

#all: final_target opt clean_target 
#$(CC) = gcc 
#final_target: main.c hello.c add.c header.h 
#	$(CC) main.c hello.c add.c -o final
#opt:
#	@echo "working all!"
#clean_target: 
#	rm final
	





	 
#**3**

#creating diff obj file
#-c do not link,just create obj

#all: final_target
#.PHONY:clean
#$(CC) = gcc
#final_target:main_target hello_target add_target 
#	$(CC) main.o hello.o add.o -o final_obj
#main_target: main.c header.h
#	$(CC) -c main.c 
#hello_target: hello.c header.h
#	$(CC) -c hello.c 
#add_target: add.c header.h
#	$(CC) -c add.c 
#clean:
#	rm *.o final_obj


	
	
	
#**4**
#phony 

all: hello generate clean
.PHONY:clean
hello:
	echo "hello"
generate:
	echo "creating a file"
	touch newfile.txt
clean:
	rm *.txt 
	
##here if we do not provie .PHONY:clean rm does not delete the newFile.txt.Because there is a file name clean in same directory,
#so make will not execute the clean target.But when we provide clean as phony then newFile.txt will be deleted.In case of 
#avoiding the conflict we have to use PHONY
	
	
	
	
	
	
