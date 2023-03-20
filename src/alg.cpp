// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int roof = 0;
  int floor = size - 1;
  int mide;
  int count = 0;
  while (roof <= floor)
  {
    mide = (floor + roof) / 2;
    count++;
    if (value < arr[mide]) {
      floor = mide - 1;
    } else if (value > arr[mide]) {
      roof = mide + 1;
    } else {
      for (int i = 0; arr[mide] == arr[mide - 1]; i++) {
        count++;
      }
      for (int i = 0; arr[mide] == arr[mide + 1]; i++) {
        count++;
      }
      return count;
    }
  }
  return 0;
}
