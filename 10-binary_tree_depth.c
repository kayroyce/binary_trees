#include "binary_trees.h"

/**
  * binary_tree_depth - returns the depth of a binary tree
  * @node: Node to measure the depth from
  * Returne depth value
  */

size_t binary_tree_depth(const binary_tree_t *tree)
{
        
        return((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
        
}
