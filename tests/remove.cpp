#include <BinarySearchTree.hpp>
#include "catch.hpp"

  SCENARIO("the tree size must decrease by one after removing element")
  {
      GIVEN("two trees")
      {
           BinarySearchTree<int> bst1{ 10,15,14,16,20,25,7,17,29,30};
           BinarySearchTree<int> bst2{ 10,15,14,16,20,25,17,29,30};
           
           WHEN("remove node that hasn't children")
            {
              bst1.remove(bst1.root_,7);
              THEN("trees must be equal")
                {
                  REQUIRE(bst1==bst2);
                }
             }
             
            bst1 = BinarySearchTree<int> ({ 10,15,14,16,20,25,7,17,29,30});
            bst2 = BinarySearchTree<int> ({ 10,15,14,20,25,7,17,29,30});
             WHEN("remove node that has only right child")
            {
              bst1.remove(bst1.root_,16);
              THEN("trees must be equal")
                {
                  REQUIRE(bst1==bst2);
                }
             }
             
             bst1 = BinarySearchTree<int> ({ 10,15,14,16,20,25,7,17,29,30});
             bst2 = BinarySearchTree<int> ({ 10,15,14,16,20,25,7,17,29});
             WHEN("remove node that has only left child")
            {
               bst1.remove(bst1.root_,30);
              THEN("trees must be equal")
                {
                  REQUIRE(bst1==bst2);
                }
             }
             
            bst1 = BinarySearchTree<int> ({ 10,15,14,16,20,25,7,17,29,30});
            bst2 = BinarySearchTree<int> ({ 10,14,16,20,25,7,17,29,30});
             WHEN("remove node that has both children")
            {
               bst1.remove(bst1.root_,15);
              THEN("trees must be equal")
                {
                  REQUIRE(bst1==bst2);
                }
             }
             
            bst1 = BinarySearchTree<int> ({ 10,15,14,16,20,25,7,17,29,30});
            bst2 = BinarySearchTree<int> ({ 10,15,14,16,20,25,7,17,29,30});
             WHEN("remove node that doesn't exist")
            {
               bst1.remove(bst1.root_,6);
              THEN("trees must be equal")
                {
                  REQUIRE(bst1==bst2);
                }
             }
        
            bst1 = BinarySearchTree<int>({12});
	          bst2 = BinarySearchTree<int>();
             WHEN("remove root")
            {
               bst1.remove(bst1.root_,12);
              THEN("trees must be equal")
                {
                  REQUIRE(bst1==bst2);
                }
             }
          }
       }
