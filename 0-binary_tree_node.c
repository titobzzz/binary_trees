#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates abinary tree_node
 * @parent: points to the parent node of the created node
 * @value: value of the new node
 *
 * Return: New binary tree node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree;

	tree = malloc(sizeof(binary_tree_t));

	if (tree == NULL)
		return (NULL);
	tree->n = value;
	tree->parent = parent;
	tree->left = NULL;
	tree->right = NULL;

	return (tree);
}
