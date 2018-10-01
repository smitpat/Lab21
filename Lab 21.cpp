#include <iostream>

#include <string>

#include <iostream>


#include <string>

using namespace std;

void swap(int* a, int* b) {
    int tmp = *b;
    *b= *a;
    *a = tmp;
}

int main()
{
  int a, b;
  cout<<"Please enter two integers: "<<endl;
  cin >> a >>b;
  cout<< "The original a and b are " a <<" and "<< b<<endl;
  swap(&a, &b);
  cout<<"After swap, the a and b are "<< a <<" and "<< b<<endl;
}
