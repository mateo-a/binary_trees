#include "binary_trees.h"
/**
 * find_balance - finds the difference between the left and right nodes
 * from the tree
 * @tree: tree trunk to start from
 * Return: height of each branch
 */
int tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (-1);
	left_height = tree_balance(tree->left) + 1;
	right_height = tree_balance(tree->right) + 1;
	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
/**
 * binary_tree_balance - function that measures the balance factor of
 *                       a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: measures the balance factor of a tree, if tree is NULL return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = tree_balance(tree->left);
	right = tree_balance(tree->right);
	return (left - right);
}
