/* Declara dos contadores, uno para el número de líneas y otro para el número de carácteres */
%{
    int noLineas = 0;
    int noCarac = 0;
%}

/***Regla 1: cuenta el número de líneas
    Regla 2: cuenta el número de carácteres
    Regla 3: especifica cuando se detiene la entrada***/
%%
\n   ++noLineas;
.    ++noCarac;
end  return 0;
%%

/***Sección código de usuario***/
int yywrap(){}
int main(int argc, char **argv)
{
    yylex();
    printf("Número de líneas = %d, número de carácteres = %d\n",
            noLineas, noCarac);

    return 0;
}
*/Sale del programa escribiendo end*/