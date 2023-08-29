#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - Binary tree
 * @parent: parent
 * @value: value
 * Return: binary tree node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;

	return (node);
}

