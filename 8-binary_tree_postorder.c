#include "binary_trees.h"

/**
 * binary_tree_postorder - Determines te tree values in a
 * post-order fashion
 * @tree: Pointer to head node
 * @func: Function pointer
 * Returns: void
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
