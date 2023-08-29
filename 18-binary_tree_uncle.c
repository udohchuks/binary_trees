#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling of a node
 * @node: Pointer to the node to find the sibling
 *
 * Return: sibling of node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
/**
 * binary_tree_uncle - Find the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, NULL if node is NULL or has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
