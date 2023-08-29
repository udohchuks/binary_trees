#include "binary_trees.h"
/**
 * binary_tree_size - size
 * @tree: tree
 * Return: size_t size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sum;

	if (!tree)
		return (0);
	sum = binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (1 + sum);
}
