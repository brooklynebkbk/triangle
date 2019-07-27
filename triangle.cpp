#include <iostream>
#include <string>
using namespace std;

int main(){
  const int triangle = 180;
  int a, b;
  cout << "Please input the first interior angle of the triangle: " << endl;
  cin >> a;
  cout << "Please input the second interior angle of the triangle: " << endl;
  cin >> b;

  if(a+b > triangle){
    cout << "I'm sorry, what kind of triangle are you looking at? I'm afraid that the first two angles exceed 180 degrees." << endl;
  } else {
    cout << "The measurement of the third interior angle is " << triangle - (a+b) << " degrees. " << endl;
  }

  return 0;
}
