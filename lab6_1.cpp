#include<iostream>
using namespace std;

int main(){
    int x;
    int e=0;
    int o=0;
    cout << "Enter an integer: ";
    cin >> x;
    while(x!=0){
      if(x%2==0){
      e++;
      }
      else{
      o++;
      }
      cout << "Enter an integer: ";
      cin >> x;
    }
    cout << "#Even numbers = " << e << endl;
    cout << "#Odd numbers = " << o;
    return 0;
}