#include "binary_trees.h"
/**
 * binary_tree_nodes - nodes
 * @tree: tree
 * Return: size_t nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t sum;

	if (!tree)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
	{
		sum = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
		return (1 + sum);
	}
	return (0);
}
