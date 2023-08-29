#include "binary_trees.h"
/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (1 + (left > right ? left : right));
}

/**
 * binary_tree_balance - tree balance
 * @tree: tree
 * Return: tree balance value
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int diff;

	if (!tree)
		return (0);

	diff = binary_tree_height(tree->left) - binary_tree_height(tree->right);
	return (diff);
}
