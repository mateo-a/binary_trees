#include "binary_trees.h"
/**
 * tree_is_perfect - if a tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * @size: size of the tree
 * Return: if is perfect 1, otherwise 0
 */
int tree_is_perfect(const binary_tree_t *tree, int size)
{
	int right = size, left = size;

	if (tree == NULL)
		return (0);
	left = left + tree_is_perfect(tree->left, left);
	right = right + tree_is_perfect(tree->right, right);
	if (tree->left == NULL && tree->right != NULL)
		return (-1);
	if (tree->left != NULL && tree->right == NULL)
		return (-1);
	if (right < 0 || left < 0)
		return (-1);
	if (left != right)
		return (-1);
	return (right + 1);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: If tree is NULL return 0, otherwhise 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int right, left, size = 0;

	if (!tree)
		return (0);
	left = tree_is_perfect(tree->left, size);
	right = tree_is_perfect(tree->right, size);
	if (right != left)
		return (0);
	if (right < 0 || left < 0)
		return (0);
	return (1);
}
