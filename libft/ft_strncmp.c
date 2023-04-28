/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:00:57 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/27 17:00:57 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  size_t  i;

  i =0;
  if (s1 == NULL || s2 == NULL)
    return (0);
  if (n == 0)
    return (0);
  while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
    i++;
  return (s1[i] - s2[i]);
}