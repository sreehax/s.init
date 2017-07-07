#include<stdlib.h> //For system()
#include<unistd.h> //For sethostname()
#include<stdio.h> //For messages
#include<string.h>

int mount_a();
int etchostname();
int login();

int main(int argc, char *argv[]) {
	mount_a(); //mount all
	etchostname();
	printf("Simple Init (s.init) v1 by Sreehari\n");
	login();
}

int etchostname() {
	FILE *fp;
	fp = fopen("/etc/hostname", "r");
	char *hostname = malloc(64);
	if(fp) {
		fscanf(fp, "%s", hostname);
		fclose(fp);
	} else {
		hostname = "localhost";
	}
	sethostname(hostname, 64);
	return 0;
}

int login() {
	while(1) {
		system("/bin/login");
	}
}

int mount_a() {
	system("mount -a");
	system("mount -o remount,rw /");
	return 0;
}
