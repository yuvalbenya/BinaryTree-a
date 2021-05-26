#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "doctest.h"
using namespace std;

#include "BinaryTree.hpp"
using namespace ariel;

TEST_CASE("BinaryTree - Integer")
{
  BinaryTree<int> tree_of_ints;
   
  CHECK_NOTHROW(tree_of_ints.add_root(3));
  CHECK_NOTHROW(tree_of_ints.add_root(2)); // overriding root
  CHECK_NOTHROW(tree_of_ints.add_root(1)); // overriding root
  CHECK_NOTHROW(tree_of_ints.add_left(1, 9));
  CHECK_NOTHROW(tree_of_ints.add_left(9, 4));
  CHECK_NOTHROW(tree_of_ints.add_right(9, 5));
  CHECK_NOTHROW(tree_of_ints.add_right(1, 3));
  CHECK_NOTHROW(tree_of_ints.add_left(1, 2)); // overriding left
  CHECK_NOTHROW(tree_of_ints.add_right(1, 10));
  CHECK_NOTHROW(tree_of_ints.add_right(10, 11));
  CHECK_NOTHROW(tree_of_ints.add_right(11, 12));
  CHECK_NOTHROW(tree_of_ints.add_right(12, 13));
  CHECK_NOTHROW(tree_of_ints.add_right(13, 14));
  CHECK_NOTHROW(tree_of_ints.add_right(14, 15));
  CHECK_NOTHROW(tree_of_ints.add_right(15, 16));
  CHECK_NOTHROW(tree_of_ints.add_right(16, 17));
  CHECK_NOTHROW(tree_of_ints.add_right(17, 18));
  CHECK_NOTHROW(tree_of_ints.add_right(18, 19));
  CHECK_NOTHROW(tree_of_ints.add_right(19, 20));
  CHECK_NOTHROW(tree_of_ints.add_right(20, 21));
  CHECK_NOTHROW(tree_of_ints.add_right(21, 22));

  CHECK_NOTHROW(cout << tree_of_ints << endl);

}
