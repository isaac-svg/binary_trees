#include "binary_trees.h"
/**
 * binary_tree_is_root - chacks if a node is a parent
 * @node: Pointer to node to check
 * Returns:  1 if node is a root, otherwise 0
*/
int binary_tree_is_root(const binary_tree_t *node){
    if (node == NULL)
    {
        return (0);
    }

    return (node->parent == NULL ? 1 : 0);
}