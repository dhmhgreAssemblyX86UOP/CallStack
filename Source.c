#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RANGE 2
void foo1(int a);
void foo2(int a);
void foo3(int a);
void foo4(int a);

void foo1(int a) {
	int random_number;
	int path_picker;
	srand(time(NULL));
	random_number = rand();
	path_picker = random_number % RANGE;	
	switch (path_picker) {
	case 0:
		foo2((random_number+a) % (RANGE+1));
		break;
	case 1:
		foo3((random_number+a) % (RANGE + 2));
		break;		
	}	
}

void foo2(int a) {
	foo4(a);
}

void foo3(int a) {
	foo4(a);
}

void foo4(int a) {
	int div = 20 / a;	
}

void main(int argc, char *argv[]) {
	for (int i =0; i<100; i++){
		foo1(i);
	}
}