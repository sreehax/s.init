#include<stdio.h>
int main() {
	FILE *off;
	off = fopen("/proc/sysrq-trigger", "w");
	fputs("b", off);
	fclose(off);
}
