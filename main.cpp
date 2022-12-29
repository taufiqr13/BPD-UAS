#include <stdio.h>

int main() {
int i;
float nilai[10]; 


	printf("Masukkan nilai mahasiswa:\n");
		for (i = 0; i < 10; i++) {
		printf("Input nilai mahasiswa ke-%d: ", i+1);
		scanf("%f", &nilai[i]);
		}


	printf("\nNilai mahasiswa yang lulus:\n");
		for (i = 0; i < 10; i++) {
			if (nilai[i] >= 60) {
			printf("Nilai mahasiswa ke-%d: %.2f\n", i+1, nilai[i]);
		}	
	}

	return 0;
}