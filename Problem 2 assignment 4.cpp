#include <iostream>
#include <math.h>
void populate(int* arr);
void print(int* arr);
void reverse(int* arr);
using namespace std;

int main() {
  int arr[30];
  int* arr1;
  arr1 = &(arr[0]);
  populate(arr1);
  reverse(arr1);
  print (arr1);
}

void populate(int* arr){
  int i;
  float holder = 1;
  for (i =0; i < 30; i++){
    cout << endl << "Please enter integer " << (i+1) << ": ";
    while(!(cin >> holder) || (abs(holder) - abs(int(holder)) > 0 )){//checks if entered holder is an integer and above 0, executes if not
      cin.clear();
      cin.ignore(123, '\n');//to prevent program from repeating
      cout << "Please enter an integer value: ";
      //cin >> *(arr + i); 
    }
    *(arr+i) = holder;//if the value passes, it will be passed to array
  }
  return;
}

void reverse(int* arr){
  int i;
  int arr1[30];
  for (i = 0; i < 30; i++){
    arr1[29 - i] = *(arr + i);
  }
  for (i = 0; i < 30; i++){
    *(arr + i) = arr1[i];
  }
  return;
}

void print(int*arr){
  int i;
  cout << "Reversed array: ";
  for (i = 0; i < 30; i++){
    cout << *(arr + i) << ((i == 29) ? "" : ", ");
  }
}