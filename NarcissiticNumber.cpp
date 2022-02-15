#include <vector>
#include <iostream>
using namespace std;
#include <math.h>

bool narcissistic( int value ){
  //Code away
  int value2 = value;
  vector<int> vec = vector<int>();
  int i = 0;
  while(true){
    if(value2 / 10 < 1){
      vec.push_back(value2);
      break;
    }
    vec.push_back(value2 % 10);
    value2 = (value2 - vec.at(i))/10;
    i=i+1;
    if(value2 / 10 < 1){
      vec.push_back(value2);
      break;
    }
  }
  int num = 0;
  for(int i=0;i<vec.size();i++){
    int val = vec.at(i);
    num = num + pow(val,vec.size()); 
  }
  if(num == value){
    return true;
  } else {
    return false;
  }
} 