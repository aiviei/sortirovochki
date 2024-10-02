template<typename T>void InsertionSort(int numb_of_elements, T* array) {

	T temp;
	int flag, place;


	for (int key = 1; key < numb_of_elements; key++) {

		flag = 1;

		for (int j = key - 1; j > -1; j--) {
			if (array[key] > array[j]) break;
			if (array[key] < array[j]) {
				flag = 0; place = j;
			}
		}

		if (flag == 0) {
			temp = array[key];
			for (int t = key; t > place; t--) {
				array[t] = array[t - 1];
			}
			array[place] = temp;
		}
	}
}