template<typename T>void BubbleSort(int numb_of_elements, T* array) {

	T temp;

	for (int counter = numb_of_elements; counter > 0; counter--) {
		for (int numb = 0; numb < numb_of_elements - 1; numb++) {
			if (array[numb] > array[numb + 1]) {
				temp = array[numb];
				array[numb] = array[numb + 1];
				array[numb + 1] = temp;
			}
		}
	}
}
