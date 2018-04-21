#include <stdio.h>
#include <iostream>

#define TABLE_SIZE 5

int main() {

	while (true) {
		int a[TABLE_SIZE][TABLE_SIZE] = { 0 };

		for (int i = 0; i < TABLE_SIZE; i++) {
			for (int j = 0; j < TABLE_SIZE; j++) {
				a[j][i] = i + j;
				std::cout << a[j][i] << " ";
			}
			std::cout << "\n";
		}

		system("cls");
	}

	std::cin.get();
	return 0;
}