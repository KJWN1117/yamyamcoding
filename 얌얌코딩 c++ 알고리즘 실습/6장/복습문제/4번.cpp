#include <iostream>
#include <vector>

int main() {

	int y, x;
	std::cin >> y >> x;
	std::vector<std::vector<char>> arr(y, std::vector<char>(x));
	for (size_t i = 0; i < 4; i++) {
		for (size_t j = 0; j < 3; j++) {
			std::cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {
		int y = 3;
		for (int j = 3; j >= 0; j--) {
			if (arr[j][i] != '_') {
				char ch = arr[j][i];
				for (y; y > j; y--) {
					if (arr[y][i] == '_') {
						arr[y][i] = ch;
						arr[j][i] = '_';
						break;
					}
				}
			}
		}
	}
	for (size_t i = 0; i < 4; i++) {
		for (size_t j = 0; j < 3; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

}
