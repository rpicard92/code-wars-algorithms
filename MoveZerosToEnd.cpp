#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input) {
  std::vector<int> vec;
  int zeroCount = 0;
  for(int i=0;i<input.size();i++){
    int val = input.at(i);
    if(val == 0){
      zeroCount ++;
    } else {
      vec.push_back(val);
    }
  }
  for(int i=0; i<zeroCount; i++){
    vec.push_back(0);
  }
  return vec;
}