#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert new node as left child of parent
 *
 * @parent: parent node
 * @value: value of mnew node
 *
 * Return: new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->right = NULL;
	node->n = value;

	if (parent->left != NULL)
	{
		node->left = parent->left;
		node->left->parent = node;
	}
	parent->left = node;

	return (node);
}
