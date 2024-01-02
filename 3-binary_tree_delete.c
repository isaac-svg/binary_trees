#include "binary_trees.h"

/**
 * binary_tree_delete - deletes all nodes in a binary tree
 * @tree: pointer to the head node
 * Returns: void
*/
void binary_tree_delete(binary_tree_t *tree){

    if (tree == NULL)
    {
        return;
    }

    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);

    free(tree);
}