#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert right
 * @parent: parent
 * @value: value
 * Return: type binary_tree_t
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;
	if (parent->right)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;
	return (node);
}
