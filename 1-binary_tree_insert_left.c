#include "binary_trees.h"

/**
 * insertion to left
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	/*node - malloc(sizeof(binary_tree_t));*/

	if (parent == NULL)
	{
		return (NULL);
	}

	node = binary_tree_node(parent, value);

	if (node == NULL)
	{
		return (NULL);
	}
	/*inserting into node of parent*/
	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}

	parent->left = node;
	return (node);

}
