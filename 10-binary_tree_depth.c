#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a node in
 *                     a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: measures the depth of a node in a tree
 *         If tree is NULL, return 0   
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count;

	count = 0;
	if (tree)
		while (tree->parent)
		{
			tree = tree->parent;
			count++;
		}
	return (count);
}
