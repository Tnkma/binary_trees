#include "binary_trees.h"

/**
 * binary_tree_node - create a new node for the tree
 * @parent: the root tree
 * @value: the value of the node
 *
 * Return: The newly created node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*decalre a variable for the new node*/
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	/* Assign data to the new_node*/
	new_node->n = value;
	new_node->parent = parent;
	/*Assign left and right wing to NULL*/
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
