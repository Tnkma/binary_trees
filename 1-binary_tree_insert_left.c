#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the left-child of another node
 * @parent: the parent node
 * @value: the value to store into the left child
 *
 * Return: the inserted node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	left_node = binary_tree_node(parent, value);
	if (left_node == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
	}
	parent->left = left_node;

	return (left_node);
}
