template<typename T>void ExchangeSort(int numb_of_elements, T* array) {

	T temp;

	for (int key = 0; key < numb_of_elements - 1; key++) {
		for (int i = key + 1; i < numb_of_elements; i++) {
			if (array[key] > array[i]) {
				temp = array[key];
				array[key] = array[i];
				array[i] = temp;
			}
		}
	}
}