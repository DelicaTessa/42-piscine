# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    libft_creator.sh                                   :+:    :+:             #
#                                                      +:+                     #
#    By: tclement <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/01/28 20:15:06 by tclement      #+#    #+#                  #
#    Updated: 2020/01/29 08:02:57 by tclement      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
 gcc -c -Wall -Wextra -Werror *.c
 ar rcs libft.a *.o