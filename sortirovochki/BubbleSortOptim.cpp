template<typename T>void BubbleSortOptim(int numb_of_elements, T* array) {

	T temp;
	int flag = 1;

	while (flag == 1) {

		flag = 0;

		for (int key = numb_of_elements - 1; key > 0; key--) {
			for (int j = 0; j <= key - 1; j++) {
				if (array[j] > array[j + 1]) {
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
				}
			}
		}
	}
}