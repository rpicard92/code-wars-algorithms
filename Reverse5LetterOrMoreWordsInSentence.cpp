#include <iostream>
#include <string>

// flip string - pure function
std::string flip(std::string str){
  std::string str2 = str;
  for(int i=0; i<str2.size(); i++){
    str2[i] = str[str2.size()-1-i];
  }
  return str2;
}

std::string spinWords(const std::string &str)
{
  std::cout << str << std::endl; 
  std::string str2 = str;
  std::string delimeter = " ";
  std::vector<std::string> vec;
  bool isLast = true;
  while(true){
    if(str2.find(delimeter) != -1){
      vec.push_back(str2.substr(0, str2.find(delimeter)));
      str2.erase(0, str2.find(delimeter)+delimeter.size());
    } else if(isLast) {
      vec.push_back(str2);
      isLast = false; 
    } else {
      break;
    }
  }
  for (int i=0; i<vec.size(); i++){
    if(vec.at(i).size() >= 5){
      vec.at(i) = flip(vec.at(i));
    }
  }
  std::string ans;
  for(int i=0; i<vec.size(); i++){
    if(ans.empty()){
      ans = vec.at(i);
    } else {
      ans = ans + " " + vec.at(i);
    }
  }  
  std::cout << ans << std::endl;
  return ans;
}// spinWords