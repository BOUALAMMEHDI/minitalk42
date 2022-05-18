# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboualam <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/10 20:16:51 by mboualam          #+#    #+#              #
#    Updated: 2022/05/11 11:25:12 by mboualam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = server
NAME2 = client

BONUS = server_bonus
BONUS2 = client_bonus

CC = gcc 
CFLAGS = -Werror -Wall -Wextra

SERVER_SRCS = server.c minitalk_utils.c
CLIENT_SRCS = client.c minitalk_utils.c

SERVER_SRCS_BONUS = server_bonus.c minitalk_utils_bonus.c
CLIENT_SRCS_BONUS = client_bonus.c minitalk_utils_bonus.c

CLIENT_OBJS = client.o minitalk_utils.o
SERVER_OBJS = server.o minitalk_utils.o
CLIENT_OBJS_BONUS = client_bonus.o minitalk_utils_bonus.o
SERVER_OBJS_BONUS = server_bonus.o minitalk_utils_bonus.o

INCLUDE = minitalk.h
INCLUDE_B = minitalk_bonus.h

all: $(NAME) $(NAME2) $(INCLUDE)

$(NAME): $(SERVER_OBJS)
	@$(CC) $(CFLAGS) -o $@ $(SERVER_OBJS)
	@echo "\033[34m==============================================\033[0m"
	@echo "Compile SERVER.........................\033[32m[DONE]\033[0m"
$(NAME2): $(CLIENT_OBJS)
	@$(CC) $(CFLAGS) -o $@ $(CLIENT_OBJS)
	@echo "Compile CLIENT.........................\033[32m[DONE]\033[0m"
	@echo "\033[34m==============================================\033[0m"


bonus: $(BONUS) $(BONUS2) $(INCLUDE_B)

$(BONUS): $(SERVER_OBJS_BONUS)
	@$(CC) $(CFLAGS) -o $@ $(SERVER_OBJS_BONUS)
	@echo "\033[34m==============================================\033[0m"
	@echo "Compile SERVER_BONUS.........................\033[32m[DONE]\033[0m"
$(BONUS2): $(CLIENT_OBJS_BONUS)
	@$(CC) $(CFLAGS) -o $@ $(CLIENT_OBJS_BONUS)
	@echo "Compile CLIENT_BONUS.........................\033[32m[DONE]\033[0m"
	@echo "\033[34m==============================================\033[0m"

clean:
	@${RM} ${SERVER_OBJS}
	@${RM} ${CLIENT_OBJS}
	@${RM} ${SERVER_OBJS_BONUS}
	@${RM} ${CLIENT_OBJS_BONUS}
	@echo "\033[34m==============================================\033[0m"
	@echo "\033[32m================>DELETED OBJECT<========\033[32m[DONE]\033[0m"
fclean: clean
	@${RM} ${NAME}
	@${RM} ${NAME2}
	@${RM} ${BONUS}
	@${RM} ${BONUS2}
	@echo "\033[32m================>DELETED NAME<===========\033[32m[DONE]\033[0m"
	@echo "\033[34m==============================================\033[0m\n"
re: fclean all
