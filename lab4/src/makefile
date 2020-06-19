CC = gcc
CFLAGS = -I.



parallel_sum : parallel_sum.o utils.o
	$(CC) -o parallel_sum parallel_sum.o utils.o $(CFLAGS) -pthread

procm: process_memory.o
	$(CC) -o procm process_memory.o $(CFLAGS)

zombie: zombie.o
	$(CC) -o zombie zombie.o $(CFLAGS)

timeout : utils.o find_min_max.o parallel_min_max.o utils.h find_min_max.h
	$(CC) -o timeout utils.o find_min_max.o parallel_min_max.o $(CFLAGS)

parallel_sum.o :
	$(CC) -c parallel_sum.c $(CFLAGS)

process_memory.o :
	$(CC) -c process_memory.c $(CFLAGS)

zombie.o :
	$(CC) -c zombie.c $(CFLAGS)

utils.o : utils.h
	$(CC) -c utils.c $(CFLAGS)

find_min_max.o : find_min_max.h
	$(CC) -c find_min_max.c $(CFLAGS)

parallel_min_max.o : utils.h find_min_max.h
	$(CC) -c parallel_min_max.c $(CFLAGS)

clear :
	rm *.o timeout zombi procm 2> /dev/null
