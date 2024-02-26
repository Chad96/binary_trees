#include "binary_trees.h"

/**
 * binary_tree_insert_left - puts a node as a left-child of
 *                           of another (in a binary tree.)
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent == NULL or an error occurs - NULL.
 *         else - a pointer to the new node.
 *
 * Description: If left-child is present in parent, the new node
 *              takes its place and it is set as
 *              the left-child becomes new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
