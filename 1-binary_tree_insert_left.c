#include "binary_trees.h"
/**
 * binary_tree_insert_left: function that inserts a node as the left-child of
 *                          another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: a pointer to the created node,
 *         or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	if (parent->left)
	{
		new->left = parent->left;
		(new->left)->parent = new;
	}
	parent->left = new;
	return (new);
}
