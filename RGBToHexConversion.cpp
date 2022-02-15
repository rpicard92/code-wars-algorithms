#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

class RGBToHex
{
  public:
  static std::string rgb(int r, int g, int b){
    int r2 = clamp(r);
    int g2 = clamp(g);
    int b2 = clamp(b);  
    vector<string> vec1;
    vector<string> vec2;
    vector<string> vec3;
    int two = 0;
    while(true){
      int rem = r2 % 16;
      string hexVal = getHex(rem);
      r2 = floor(r2/16);
      vec1.push_back(hexVal);
      two++;
      if(r2==0 & two == 2){
        break;
      }
    }
    two=0;
    while(true){       
      int rem = g2 % 16;
      string hexVal = getHex(rem);
      g2 = g2/16;
      vec2.push_back(hexVal);
      two++;
      if(g2==0 & two==2){
        break;
      }
    }
    two=0;
    while(true){  
      int rem = b2 % 16;
      string hexVal = getHex(rem);
      b2 = b2/16;
      vec3.push_back(hexVal);
      two++;
      if(b2==0 && two==2){
        break;
      }
    }
    
    string ans = "";
    for(int i=vec1.size()-1;i>=0;i--){
      ans = ans + vec1.at(i);
    }
    for(int i=vec2.size()-1;i>=0;i--){
      ans = ans + vec2.at(i);
    }
    for(int i=vec3.size()-1;i>=0;i--){
      ans = ans + vec3.at(i);
    }
    return ans;
  }
  
  static int clamp(int val){
    if(val > 255){
      return 255;
    }
    if(val < 0){
      return 0;
    }
    return val;
  }

  static string getHex(int rem){
    if(rem <= 9 && rem >= 0){
      return to_string(rem);
    }
    if(rem == 10){
      return "A";
    }
    if(rem == 11){
      return "B";
    }
    if(rem == 12){
      return "C";
    }
    if(rem == 13){
      return "D";
    }
    if(rem == 14){
      return "E";
    }
    if(rem == 15){
      return "F";
    }
  }
  
};