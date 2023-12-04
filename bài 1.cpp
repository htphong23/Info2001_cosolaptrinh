#include <iostream>

using namespace std;

int main() {
  int arr[10];
  int *p = arr;

  
  for (int i = 0; i < 10; i++) {
    cin >> *(p + i);
  }

 
  for (int i = 0; i < 10; i++) {
    cout << *(p + i) << " ";
  }
  cout << endl;

 
  int i = 0;
  while (i < 10 && *(p + i) != 5) {
    i++;
  }

  if (i < 10) {
    cout << "phan tu co gia tri 5 la : " << *(p + i) << endl;
  } else {
    cout << "khong tim thay phan tu gia tri 5 trong mang" << endl;
  }
  printf
  return 0;
}

