/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mandric <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/08 09:39:23 by mandric      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/08 16:38:45 by mandric     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int p;
	unsigned int flag;

	i = 0;
	p = 0;
	flag = 0;
	while ((dest[++i] != '\0') && !flag)
		if ((i - 1) == (size - 1))
			flag = 1;
	if (!flag)
	{
		while (((++i - 1) < size - 1) && (src[p] != '\0'))
		{
			*(dest + (i - 2)) = *(src + p);
			p++;
		}
		dest[i + -1] = '\0';
	}
	return (i - 2);
}
