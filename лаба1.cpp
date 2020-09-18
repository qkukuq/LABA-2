#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Russian");
	int a[10];
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a[i]);
	}
	int b[10]{};
	for (int i = 0; i < 10; i += 2) {
		b[i + 1] = a[i];
    }
	for (int i = 1; i < 10; i += 2) {
		b[i - 1] = a[i];
	}
	for(int i = 0; i<10; i++){ 
		printf("%d ", b[i]); 
	}
	return 0;
}


