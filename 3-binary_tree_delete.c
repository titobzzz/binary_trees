#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * 
 * @tree: Pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	while (tree != NULL)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
		tree = NULL;
	}
}
