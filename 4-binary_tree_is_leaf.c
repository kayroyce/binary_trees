#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if(node == NULL)
    {
            return (NULL)
    }
    if (if node-> left == NULL && node-> right == NULL)
    {
            return(1)
    }
    return(0)
}