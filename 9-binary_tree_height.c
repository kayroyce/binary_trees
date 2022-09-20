#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t left = 0;
        size_t right = 0;
        if (tree == NULL)
        {
                return(0);
        }
        else
        {
                if(tree)
                {
                        left = tree-> left ? 1 + binary_tree_height(tree-> left) : 0;
                        right = tree-> right ? + binary_tree_height(tree-> right) : 0;
                }
                return((1 > left) ? left : right);
        }

}
