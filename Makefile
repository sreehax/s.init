all:
	gcc -o bin/s.init src/init.c
	gcc -o bin/s.shutdown src/shutdown.c
	gcc -o bin/s.reboot src/reboot.c
install:
	cp bin/* /sbin
