#include <cstdint>
#include <string>
#include <math.h>
#include <string>
#include <vector>
std::string add_binary(uint64_t a, uint64_t b) {
  
  uint64_t sum = a + b;
  uint64_t rem;
  std::string ans = "";
  std::vector<uint64_t> vec;
  while(true){
    rem = sum % 2;
    sum = sum/2;
    vec.push_back(rem);
    if(sum == 0){
      break;
    }
  }
  for(int i = vec.size()-1;i>=0; i--){
    ans = ans + std::to_string(vec.at(i)); 
  }
  return ans;
}