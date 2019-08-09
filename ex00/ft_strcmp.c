/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mandric <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/06 21:04:08 by mandric      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/09 16:35:39 by mandric     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int i;
	unsigned int p;
	unsigned int res_i;
	unsigned int res_p;

	i = 0;
	p = -1;
	res_i = 0;
	res_p = 0;
	while (s1[i++] == s2[i])
		;
	while (s2[++p] != '\0')
		res_p += s2[i];
	return (res_i - res_p);
}
