#include<stdio.h>
int main() {
	FILE *off;
	off = fopen("/proc/sysrq-trigger", "w");
	fputs("o", off);
	fclose(off);
}
