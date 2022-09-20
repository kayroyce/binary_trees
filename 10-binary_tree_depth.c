#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
        size_t c = 0;
        
        if (tree == NULL)
        {
                return (c);
        }
        while(root-> parent != NULL)
        {
                c++;
                tree = tree-> parent;
        }
        return(c);
        
}