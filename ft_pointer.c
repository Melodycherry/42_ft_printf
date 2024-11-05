/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:09:03 by mlaffita          #+#    #+#             */
/*   Updated: 2024/11/05 22:16:27 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_pointer(size_t ptr, int *len)
{
	char		str[25];
	int			i;
	const char	*base_char;

	const base_char = "0123456789abcdef";
	i = 0;
	write (1, "0x", 2);
	(*len) = (*len) + 2;
	if (ptr == 0)
	{
		ft_putchar_len('0', len);
		return ;
	}
	while (ptr != 0)
	{
		str[i] = base_char[ptr % 16];
		ptr = ptr / 16;
		i++;
	}
	while (i--)
	{
		ft_putchar_len(str[i], len);
	}
}
