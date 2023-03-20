// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int roof = 0;
  int floore = size - 1;
  int mide;
  int count = 0;
  while (roof <= floore) {
    mide = (floore + roof) / 2;
    if (value < arr[mide]) {
      floore = mide - 1;
    } else if (value > arr[mide]) {
      roof = mide + 1;
    } else {
      for (int i = 1; arr[mide] == arr[mide - i]; i++) {
        count++;
      }
      for (int i = 0; arr[mide] == arr[mide + i]; i++) {
        count++;
      }
      return count;
    }
  }
  return 0;
}
