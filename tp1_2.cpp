#include <stdio.h>

int cuadrado(int X);
void cuadradoVoid(int X);
void funcVariable(int Y);
void invertir(int *x, int *y);
void ordenar(float x, float y);

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);

	int a = 5;
	int b = 10;

	printf("%d\n", cuadrado(5));
	cuadradoVoid(5);
	funcVariable(a);

	invertir(&a, &b);

	printf("%d\n", a);
	printf("%d\n", b);

	ordenar(25, 20);
	ordenar(35, 40);
	ordenar(90,50);
	ordenar(10,11);

	return 0;
}

int cuadrado(int X) {
    return X*X;
}

void cuadradoVoid(int X) {
    printf("%d\n", X*X);
}

void funcVariable(int Y) {
    printf("Dirección de la variable: %p\n", &Y);
    printf("Contenido de la variable: %d\n", Y);
}

void invertir (int *x, int *y) {
    int z = *x;

    *x = *y;
    *y = z;
}

void ordenar(float x, float y) {
	if (y > x) {
		int z = x;
		x = y;
		y = z;
	}
	printf("%.1f %.1f\n", x, y);
}
