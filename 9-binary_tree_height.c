#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the height
 * Return: height of tree, if is NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree && (tree->left || tree->right))
		return (1 + MAX(binary_tree_height(tree->left),
				binary_tree_height(tree->right)));

	return (0);
}
