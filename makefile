# Team Name: Team 8 - (SysForge)
# Members Names: Colten Mikulastik, Mayuresh Keshav Kamble, Nathanlie Ortega, and Igor Leeck
# Course: CSCE 3600.002
# File: makefile

CC = gcc
CFLAGS = -Wall

just_run: bitwisemenu
	./bitwisemenu

bitwisemenu: clz.o endian.o major1.o parity.o rotate.o
	$(CC) $(CFLAGS) -o bitwisemenu clz.o endian.o major1.o parity.o rotate.o

clz.o: clz.c  major1.h
	$(CC) $(CFLAGS) -c clz.c

endian.o: endian.c  major1.h
	$(CC) $(CFLAGS) -c endian.c

major1.o: major1.c  major1.h
	$(CC) $(CFLAGS) -c major1.c
	
parity.o: parity.c major1.h
	$(CC) $(CFLAGS) -c parity.c

rotate.o: rotate.c major1.h
	$(CC) $(CFLAGS) -c rotate.c

clean:
	rm ./*.o
	rm -f ./bitwisemenu
