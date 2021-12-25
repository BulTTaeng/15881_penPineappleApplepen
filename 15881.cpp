#include <iostream>
#include <string>

using namespace std;

int main() {
  string str;
  int n;

  cin >> n;
  cin >> str;

  int count =0;

  int num = 0;

  for(int i =0; i<n; i++){
    if(str[i] == 'p'){
      if(count == 0){
        count++;
      }
      else if (count == 3){
        count =0;
        num ++;
      }
      else{
        count = 1;
      }
    }

    else if(str[i] == 'P'){
      if(count == 1){
        count ++;
      }
      else{
        count = 0;
      }
    }

    else if(str[i] == 'A'){
      if(count == 2){
        count ++;
      }
      else{
        count = 0;
      }
    }

    else{
      count = 0;
    }
  }

  cout << num;
  return 0;
} 