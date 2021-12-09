#grade Makefile
BASE = /home/kmh/grade
CC = gcc
CFLAGS = -O -Wall
EFILE = ./2003
OBJS = main.o grade.o
$(EFILE) : $(OBJS)
	echo "linking…"
	@$(CC) $(CFLAGS) -o $(EFILE) $(OBJS)
$(OBJS) : grade.h
	$(CC) $(CFLAGS) -c $*.c
