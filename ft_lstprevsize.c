#include "libft.h"

int	ft_lstprevsize(t_list *lst)
{
	int	value;

	if (!lst)
		return (0);
	value = 1;
	while (lst->prev)
	{
		value++;
		lst = lst->prev;
	}
	return (value);
}
