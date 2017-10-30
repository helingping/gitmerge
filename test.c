#include <stdio.h>
#include <unistd.h>

void base_func() {
	int *p;
	printf("this is a crash %d\n", *p);
}

int main() {
	return 0;
}
