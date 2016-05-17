/*
** bistromatique.h for error in /home/wyzlic_a/final/fin/Piscine_C_bistromathique/include
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Sat Apr  2 00:39:27 2016 Dimitri Wyzlic
** Last update Sun Apr  3 23:22:47 2016 Hugo Laroche
*/

#ifndef BISTROMATHIQUE_H_
# define BISTROMATHIQUE_H_

#define SYNTAXE_ERROR_MSG "syntax error"
#define ERROR_MSG "Error"

typedef struct s_num {
  char	type;
  int	*num;
}	t_num;

typedef struct s_pile {
  t_num		data;
  struct s_pile	*next;
}		t_pile;

t_num	*str_to_stru(char **, char*, int, int);
t_num	t_num_error();
t_num	t_num_end();
t_num	t_num_null();
t_num	t_num_zero();
int	add_mult_bracket(t_num *);
int	len_t_num(t_num *);
t_pile	*pile_add_elem(t_pile *, t_num);
t_pile	*pile_del_elem(t_pile *);
t_num	*do_npi(t_num *);
void	t_num_print(t_num, char *);
t_num	do_calc(t_num *, int);
t_num	t_num_invert(t_num);
t_num	chapo(t_num, t_num, int, t_num);
t_num	main_add(t_num, t_num, int);
t_num	main_div(t_num, t_num, int);
t_num	main_mod(t_num, t_num, int);
char	*remove_n(char *);
int	my_strlen_deux(char *);
char	*my_evil_str(char *);
int	my_strlen(char *);
int	my_put_nbr(int);
int	*my_add(int *, int *, int, int);
int	my_strcmp(char *, char *);
int	calc_retenue(int, int);
int	*my_sub(int *, int *, int, int);
int	is_neg_bistro(char *);
char	*put_neg(char *);
int	*my_mult(int *, int *, int);
char	*my_add_mult(char *, char *);
int	*sec_mult(int *, int, int, int);
char	*add_zeros_mult(char *, int);
int	*fill_zeros(int);
int	my_putstr_int(int *);
int	my_strlen_int(int *);
int	my_strcmp_int(int *, int *);
int	*my_evil_nbr(int *);
int	my_strlen_int(int *);
int	*my_div(int *, int *, int *);
int	*my_mod(int *, int *, int);
int	*set_two_two();
int	*set_unv(int);
int	is_equal_zero(t_num);
int	error_syntax(char *);
int	error_usage(char **);
int	check_error(char **, char *);
int	my_search(char, char *);
int	parse_par(char *, char *);
int	is_there_a_nbr(char *, char *);
int	nb_mult_to_add(t_num *);
t_num	t_num_signal();
t_num	t_num_neg();
void	print_t_num(t_num *);
void	putpile(t_pile *);
t_num	main_mult(t_num, t_num, int);
void	do_number(t_num , t_num *, int *);
int	size_without_null(t_num *);
void	save_result(t_num *, int, t_num);
t_num	*decal(t_num *);
t_num	parse_sym_next(int *);
int	len_num(char *, char *, int);
int	find_in_str(char, char *);

#endif /* !BISTROMATHIQUE_H_ */
