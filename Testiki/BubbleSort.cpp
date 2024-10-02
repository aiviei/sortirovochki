#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "BubbleSort.h"


TEST_CASE("BubbleSort") {
	int flag = 1;

	int array1_size = 1;
	int array2_size = 5;
	int array3_size = 5;

	float array1[1] = {};
	float array2[] = { 6, 3.56, 5, 6.66, 12 };
	int   array3[] = { 6, 5, 4, 3, 1 };

	BubbleSort(1, array1);
	BubbleSort(5, array2);
	BubbleSort(5, array3);

	for (int i = 0; i < array1_size - 1; i++) {
		if (array1[i] > array1[i + 1]) {
			flag = 0;
			break;
		}
	}

	for (int i = 0; i < array2_size - 1; i++) {
		if (array2[i] > array2[i + 1]) {
			flag = 0;
			break;
		}
	}

	for (int i = 0; i < array3_size - 1; i++) {
		if (array3[i] > array3[i + 1]) {
			flag = 0;
			break;
		}
	}

	REQUIRE(flag);
}
