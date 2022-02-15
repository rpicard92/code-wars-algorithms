#include <string>
#include <vector>
#include <iostream>
using namespace std;

std::vector<std::string> solution(const std::string &s)
{
    vector<string> vec = vector<string>();
    if(s.size() % 2 == 0){
      for(int i=0; i<s.size(); i+=2){
       string val1(1,s[i]);
       string val2(1,s[i+1]);
       vec.push_back(val1 + val2);
      }
    } else {
      for(int i=0; i<s.size()-1; i+=2){
       string val1(1,s[i]);
       string val2(1,s[i+1]);
       vec.push_back(val1 + val2);
      }
      string val1(1, s[s.size()-1]);
      vec.push_back(val1 + "_");
    }

    //for(int i=0; i<vec.size(); i++){
      //cout << vec.at(i) << endl;
    //}
    
    return vec; // Your code here
} 