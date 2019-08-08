/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mandric <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/07 17:54:55 by mandric      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/08 16:52:20 by mandric     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int p;

	i = -1;
	p = -1;
	if ((str[0] != '\0') && (to_find[0] != '\0'))
	{
		while (str[++i] != '\0')
		{
			while (str[i + ++p] == to_find[p])
			{
				if (to_find[p + 1] == to_find[p])
					return (&str[i]);
				else if (str[i + p] != to_find[p])
					break ;
			}
			return (0);
		}
	}
	return (str);
}
