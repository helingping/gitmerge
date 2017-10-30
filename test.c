#include <stdio.h>
#include <unistd.h>

void base_func() {
	int *p;
	printf("this is a crash %d\n", *p);
}

void branch2_func(){
	printf("this is a branch2_func!\n");
}

void dev_func() {
	printf("this is a dev func\n");
}

int main() {
	return 0;
}
