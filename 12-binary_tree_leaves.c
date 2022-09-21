#include "binary_trees.h"

/**
 * binary_tree_leaves - Cal. leaves of a binary tree.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
        size_t l = 0, right = 0, left = 0;
        if (tree == NULL){
                return (0);
        }
        else{
                left = binary_tree_leaves(tree -> left);
                right = binary_tree_leaves(tree -> right);
                l = right + left;
                return ((!left && !right) ? l + 1: l * 0);
        }

}