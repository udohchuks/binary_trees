#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert left
 * @parent: parent
 * @value: value
 * Return: type binary_tree_t
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!parent)
		return (NULL);
	if (!node)
		return (NULL);
	node->n = value;
	if (parent->left)
	{
		node->left = parent->left;
		parent->left = node;
		node->left->parent = node;
		node->right = NULL;
		node->parent = parent;
		return (node);
	}
	node->parent = parent;
	parent->left = node;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
