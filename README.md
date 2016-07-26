# Bistromathique

Infinite number calculator.<br>
<i>This was my school (Epitech) project and I obtain the best mark <b>(19/20)</b> of the school since 3 years.</i>

Featuring
----------
    Sum
    Substraction
    Multiplication
    Division
    Modulo
    Work in any base
    Parse input expression, handle priorities and brackets
Installation
----------
    git clone https://github.com/ethanquix/Bistromathique.git
    cd Bistromathique
    make re
Usage
----------

    echo "expression" | ./calc [base] [ops] [expression length]
    Example :
    $ echo "12+6" | ./calc 0123456789 "+-*/%()" 4
    $ 18
    $ echo "--++-6*12" | ./calc 0123456789 "()+-*/%" 9
    $ -72
    $ echo "-(e@-(;*!@))" | ./calc "~^@!;ie& ]" "()+-*/%" 12
    $ ee

> [dimitriwyzlic.com](http://dimitriwyzlic.com) &nbsp;&middot;&nbsp;
> GitHub [@ethanquix](https://github.com/ethanquix) &nbsp;&middot;&nbsp;
> Linkedin [Dimitri Wyzlic](www.linkedin.com/in/dimitriwyzlic)
