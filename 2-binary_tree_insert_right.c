#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new node at the right of a parent
 * node
 * @parent: pointer to the parent node
 * @value: value of the node
 * Return: pointer to new node on success otherwise NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}

