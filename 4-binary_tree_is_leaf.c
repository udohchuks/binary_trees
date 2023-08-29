#include "binary_trees.h"
/**
 * binary_tree_is_leaf - node is leaf
 * @node: node
 * Return: 1 or 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (node->left == NULL && node->right == NULL);
}
