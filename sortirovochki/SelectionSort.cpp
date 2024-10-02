template<typename T>void SelectionSort(int numb_of_elements, T* array) {

	T temp, min_number;
	int place;

	for (int key = 0; key < numb_of_elements; key++) {
		min_number = array[key];
		place = key;

		for (int i = key + 1; i < numb_of_elements; i++) {
			if (min_number > array[i]) {
				min_number = array[i];
				place = i;
			}
		}

		temp = array[place];

		for (int n = place; n > key; n--) {
			array[n] = array[n - 1];
		}
		array[key] = temp;
	}
}