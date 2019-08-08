/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mandric <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/07 15:18:54 by mandric      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/08 16:34:52 by mandric     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int p;
	unsigned int res_i;
	unsigned int res_p;

	i = -1;
	p = -1;
	res_i = 0;
	res_p = 0;
	while (dest[++i] != '\0')
		;
	while ((src[++p] != '\0') && (p < nb))
		dest[i + p] = src[p];
	dest[i + p] = '\0';
	return (dest);
}
