#include <iostream>
#include <string>

using namespace std;

int main(){
  int input, output;
  cout << "please input number (pless ctrl+j instead of enter)" << endl;
  cin >> input;

  if (input==0) {
    cout << "input is 0" << endl;
  } else {
    for (int i=0; i<input; i++) {
      cout << "loop : " << i << endl;
    }
  }
}
