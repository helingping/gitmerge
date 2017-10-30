#include <stdio.h>
#include <unistd.h>

void base_func() {
	int *p;
	printf("this is a crash %d\n", *p);
}

void dev_func() {
	printf("this is a dev func\n");
}

int main() {
	return 0;
}
