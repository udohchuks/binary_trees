#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert right
 * @parent: parent
 * @value: value
 * Return: type binary_tree_t
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!parent)
		return (NULL);
	if (!node)
		return (NULL);
	node->n = value;
	if (parent->right)
	{
		node->right = parent->right;
		parent->right = node;
		node->right->parent = node;
		node->left = NULL;
		node->parent = parent;
		return (node);
	}
	node->parent = parent;
	parent->right = node;
	node->right = NULL;
	node->left = NULL;

	return (node);
}
