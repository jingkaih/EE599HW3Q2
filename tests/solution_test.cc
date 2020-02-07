#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(ReturnIndicesShould, ReturnVector) {
  Solution solution;
  std::vector<int> v = {1,4,5,9};
  int sum = 10;
  std::vector<int> expected = {0, 3}, actual = solution.ReturnIndices(v, sum);
  EXPECT_EQ(expected, actual);
}

TEST(ReturnIndicesShould, HandleNullResult) {
  Solution solution;
  std::vector<int> v = {1,3,5,6};
  int sum = 10;
  std::vector<int> expected = {}, actual = solution.ReturnIndices(v, sum);
  EXPECT_EQ(expected, actual);
}

TEST(ReturnIndicesShould, HandleMultiResults) {
  Solution solution;
  std::vector<int> v = {1,4,6,9};
  int sum = 10;
  std::vector<int> expected = {0, 3}, actual = solution.ReturnIndices(v, sum);
  EXPECT_EQ(expected, actual);
}

TEST(ReturnIndicesShould, HandleDuplicates) {
  Solution solution;
  std::vector<int> v = {1,1,5,1,5,9};
  int sum = 10;
  std::vector<int> expected = {0, 5}, actual = solution.ReturnIndices(v, sum);
  EXPECT_EQ(expected, actual);
}