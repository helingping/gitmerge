#include <stdio.h>
#include <unistd.h>

void base_func() {
	int *p;
	printf("this is a crash %d\n", *p);
}

void branch1_func(){
	printf("this is branch1_func\n");
}

int main() {
	return 0;
}
