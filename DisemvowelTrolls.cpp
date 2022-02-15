# include <string>
# include <vector>

std::string disemvowel(const std::string& str) {
    
  std::string str2 = str;
  std::vector<char> vec = {'a','e','i','o','u','A','E','I','O','U'};
  std::vector<int> position;
    for(int i=0;i<str2.size();i++){
      for(int j=0;j<vec.size();j++){
        if(str2.at(i) == vec.at(j)){
          position.push_back(i);
        }
      }
    }
  // need to go backward since vec is dynamically resized
  for(int i=position.size()-1; i>=0;i--){
    str2.erase(position.at(i),1);
  }
    return str2;
} 