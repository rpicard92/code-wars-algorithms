#include <vector>
using namespace std;

int maxSequence(const std::vector<int>& arr){
  //...
  if(arr.size() == 0){
    return 0;
  }
  bool negArray = true;
  for(int i=0; i<arr.size(); i++){
    if(arr.at(i) > 0){
      negArray = false;
    }
  }
  if(negArray == true){
    return 0;
  }
  vector<int> vec;
  for(int i=0;i<arr.size();i++){
    vec.push_back(arr.at(i));
    int localSum = arr.at(i);
    for(int j=0;j<arr.size();j++){
      if(j>i){
        localSum = localSum + arr.at(j);
        vec.push_back(localSum);
      }
    }
  }
  bool first = true;
  int ans;
  for(int i=0;i<vec.size();i++){
    if(first == true){
      ans = vec.at(i);
      first = false;
    } else {
      if(vec.at(i)>ans){
        ans = vec.at(i);
      }
    }
  }
  cout << ans << endl;
  return ans;
}