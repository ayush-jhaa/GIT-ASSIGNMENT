CC = cc
CFLAGS = -c
TARGET = my_program

$(TARGET): main.o helper.o
	$(CC) main.o helper.o -o $(TARGET)

main.o: main.c helper.h 
	$(CC) $(CFLAGS) main.c

helper.o: helper.c helper.h
	$(CC) $(CFLAGS) helper.c

