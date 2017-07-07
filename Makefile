all:
	gcc -o s.init src/init.c
install:
	cp s.init /sbin
