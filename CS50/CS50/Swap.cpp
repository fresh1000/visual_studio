#include<string>
using namespace std;

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	
	char* a = "asd";
	char* b = (char*)malloc(strlen(a) + 1);

	for (int i = 0, n = strlen(a); i <= n; i++) {
		*(b + i) = *(a + i);
	}

	b[0] = toupper(b[0]);

	int c = 1, d = 2;
	swap(&c, &d);
	printf("%i %i", c, d);
	printf("%s\n", b);
	
	int* x;
	int* y;

	x = (int*)malloc(sizeof(int));
	*x = 42;
	y = x;
	*y = 13;
	printf("%i\n", *x);
	system("pause");
	return 0;
}
