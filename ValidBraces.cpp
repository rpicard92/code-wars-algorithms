#include <iostream>
using namespace std;
#include <stack>

bool valid_braces(std::string braces) 
{
  stack<int> stack;
  for(int i=0; i<braces.size();i++){
    char val = braces[i];
    if(val == '(' || val == '[' || val == '{'){
     stack.push(val); 
    } else{
      if(stack.empty() == false){
        if(stack.top() == '(' && val ==')' || stack.top() == '{' && val == '}' || stack.top() == '[' && val == ']'){
           stack.pop();
       }  else {
         return false;
       }
      } else {
        return false;
      }
    }
  }
  return true;
}
  