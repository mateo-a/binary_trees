#include "binary_trees.h"
/**
 * binary_trees_ancestor - function that finds the lowest common ancestor of
 *                         two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
                                     const binary_tree_t *second)
{
	binary_tree_t *temp;

	if (!first || !second)
		return (NULL);
	temp = (binary_tree_t *)second;
	while (first)
	{
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;
		}
		first = first->parent;
		second = temp;
	}
	return (NULL);
}
