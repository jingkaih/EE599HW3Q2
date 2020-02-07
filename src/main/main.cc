#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    std::vector<int> v = {1,1,4,3,2};
    int sum = 5;
    std::vector<int> result = solution.ReturnIndices(v, sum);
    for(auto x : result)
    std::cout << x << std::endl;

    return EXIT_SUCCESS;
}