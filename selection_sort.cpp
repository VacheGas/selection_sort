//
//  selection_sort.cpp
//
//  Created by Vachagan Gasparyan on 17.07.22.
//

#include <vector>

void selection_sort(std::vector<int> arr) {
	int arr_size = arr.size();
	
	for (int i = 0; i < arr_size - 1; i++) {
		int min_index = i;
		for (int j = i + 1; j <= arr_size - 1; j++) {
			if (arr[min_index] > arr[j]) {
				min_index = j;
			}
		}
		if (min_index != i) {
			std::swap(arr[i], arr[min_index]);
		}
	}
}

int main() {
	std::vector<int> arr = {100, 1 ,4,5,3,9,44,106};
	selection_sort(arr);
	return 0;
}
