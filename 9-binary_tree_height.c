#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the height
 * Return: height of tree, if is NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree && (tree->left || tree->right))
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);
		if (left_height > right_height)
			return (1 + left_height);
		else
			return (1 + right_height);
	}
	else
		return (0);
}
