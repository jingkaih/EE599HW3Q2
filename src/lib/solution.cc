#include "solution.h"

std::vector<int> Solution::ReturnIndices(std::vector<int> v, int sum)
{
  std::map<int, int> mymap;


  for(int i = 0; i < v.size(); ++i)
  { 
    mymap.insert(std::pair<int, int>(v[i], i));
  }
  auto it_1 = mymap.begin();
  auto it_2 = mymap.begin();
  std::vector<int> result = {};
  for(;it_1 != mymap.end(); ++it_1)
  {
    for(;it_2 != mymap.end(); ++it_2)
    {
      if(it_1->first + it_2->first == sum)
      {
        result.push_back(it_1->second);
        result.push_back(it_2->second);
        break;
      }
    }
  }
  return result;
    
}
