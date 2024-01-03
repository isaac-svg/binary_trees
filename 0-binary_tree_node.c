#include "binary_trees.h"


/**
 * binary_tree_node - creates a new node and appends to the head
 * @parent: pointer to the parent node
 * @value: value of the node.
 *
 * Return: pointer to new node on success otherwise NULL.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	return (node);
}
