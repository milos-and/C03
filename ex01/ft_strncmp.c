/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mandric <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/07 14:05:24 by mandric      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/08 16:33:11 by mandric     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int p;
	unsigned int res_i;
	unsigned int res_p;

	i = -1;
	p = -1;
	res_i = 0;
	res_p = 0;
	while ((s1[++i] != '\0') && (i < n))
		res_i += s1[i];
	while ((s2[++p] != '\0') && (p < n))
		res_p += s2[i];
	return (res_i - res_p);
}
