CC=g++
CFLAGS=-g -Wall -Wextra -pedantic
OBJS=Course.o Dean.o Employee.o Faculty.o Institute.o Lecturer.o Project.o ResearchEmployee.o

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) main.cpp -o main

clean:
	rm $(OBJS) main
