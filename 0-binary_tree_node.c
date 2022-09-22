#include "binary_trees.h"

/**
 * addition of node in the left side of the tree
 * @returned node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)

{

	binary_tree_t *node;
	/*setting memory space*/
	node = malloc(sizeof(binary_tree_t));
	/*if function*/

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	/*return value*/
	return (node);
}
