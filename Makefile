PNAME	:=jpegbaseopt
CC	:=gcc
CFLAGS	:=-O3 -Wall
SRCS	:=src/*.c
OBJS	:=$(patsubst %.c,%.o,$(wildcard $(SRCS)))
LIBS	:=

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $<

.PHONY: all clean

all:$(OBJS)
	$(CC) -o $(PNAME) $^ $(LIBS)

clean:
	rm -f $(PNAME) $(OBJS)
