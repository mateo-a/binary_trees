#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * through_level - function to go through tree using level order
 * @tree: binary tree
 * @level: level index
 * @func: function to perform
 */

void through_level(const binary_tree_t *tree, size_t level, void(*func)(int))
{
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		through_level(tree->left, level - 1, func);
		through_level(tree->right, level - 1, func);
	}
	else
		return;
}

/**
 * binary_tree_levelorder - function that goes through a binary tree using
 *                          level-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node. The value in the
 *        node must be passed as a parameter to this function
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level = 0, height;

	if (tree == NULL || func == NULL)
		return;
	height = binary_tree_height(tree);
	for (; level <= height + 1; level++)
		through_level(tree, level, func);
}
