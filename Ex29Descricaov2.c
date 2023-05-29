#include <stdio.h>

// (quarta ordem) 1257 = 1 unidade de milhar + 2 centenas + 5 dezenas + 7 unidades = 1000 + 200 + 50 + 7

int main()
{
    int num, centenas, dezenas, unidades, milhar, i, n;

    scanf("%d", &num);

    milhar = num / 1000;
    centenas = (num - milhar * 1000) / 100;
    dezenas = ((num - (milhar * 1000) - (centenas * 100)) / 10);
    unidades = (num - (milhar * 1000) - (centenas * 100) - (dezenas * 10));

    if (num < 10000)
    {
        if (milhar == 0)
        {
            if (centenas == 0)
            {
                if (dezenas == 0)
                {
                    if (unidades == 0)
                    {
                        printf("0 unidades\n");
                    }
                    else if (unidades == 1)
                    {
                        printf("(primeira ordem) 1 = 1 unidade = 1\n");
                    }
                    else
                    {
                        printf("(primeira ordem) %d = %d unidades = %d\n", num, unidades, unidades);
                    }
                }
                else if (dezenas == 1)
                {
                    if (unidades == 0)
                    {
                        printf("(segunda ordem) 10 = 1 dezena = 10\n");
                    }
                    else if (unidades == 1)
                    {
                        printf("(segunda ordem) 11 = 1 dezena + 1 unidade = 10 + 1\n");
                    }
                    else
                    {
                        printf("(segunda ordem) %d = 1 dezena + %d unidades = 10 + %d\n", num, unidades, unidades);
                    }
                }
                else
                {
                    if (unidades == 0)
                    {
                        printf("(segunda ordem) %d = %d dezenas = %d\n", num, dezenas, dezenas * 10);
                    }
                    else if (unidades == 1)
                    {
                        printf("(segunda ordem) %d = %d dezenas + 1 unidade = %d + 1\n", num, dezenas, dezenas * 10);
                    }
                    else
                    {
                        printf("(segunda ordem) %d = %d dezenas + %d unidades = %d + %d\n", num, dezenas, unidades, dezenas * 10, unidades);
                    }
                }
            }
            else if (centenas == 1)
            {
                if (dezenas == 0)
                {
                    if (unidades == 0)
                    {
                        printf("(terceira ordem) 100 = 1 centena = 100\n");
                    }
                    else if (unidades == 1)
                    {
                        printf("(terceira ordem) 101 = 1 centena + 1 unidade = 100 + 1\n");
                    }
                    else
                    {
                        printf("(terceira ordem) %d = 1 centena + %d unidades = 100 + %d\n", num, unidades, unidades);
                    }
                }
                else if (dezenas == 1)
                {
                    if (unidades == 0)
                    {
                        printf("(terceira ordem) 110 = 1 centena + 1 dezena = 100 + 10\n");
                    }
                    else if (unidades == 1)
                    {
                        printf("(terceira ordem) 111 = 1 centena + 1 dezena + 1 unidade = 100 + 10 + 1\n");
                    }
                    else
                    {
                        printf("(terceira ordem) %d = 1 centena + 1 dezena + %d unidades = 100 + 10 + %d\n", num, unidades, unidades);
                    }
                }
                else
                {
                    if (unidades == 0)
                    {
                        printf("(terceira ordem) %d = 1 centena + %d dezenas = 100 + %d\n", num, dezenas, dezenas * 10);
                    }
                    else if (unidades == 1)
                    {
                        printf("(terceira ordem) %d = 1 centena + %d dezenas + 1 unidade = 100 + %d + 1\n", num, dezenas, dezenas * 10);
                    }
                    else
                    {
                        printf("(terceira ordem) %d = 1 centena + %d dezenas + %d unidades = 100 + %d + %d\n", num, dezenas, unidades, dezenas * 10, unidades);
                    }
                }
            }

            else
            {
                if (dezenas == 0)
                {
                    if (unidades == 0)
                    {
                        printf("(terceira ordem) %d = %d centenas = %d\n", num, centenas, centenas * 100);
                    }
                    else if (unidades == 1)
                    {
                        printf("(terceira ordem) %d = %d centenas + 1 unidade = %d + 1\n", num, centenas, centenas * 100);
                    }
                    else
                    {
                        printf("(terceira ordem) %d = %d centenas + %d unidades = %d + %d\n", num, centenas, unidades, centenas * 100, unidades);
                    }
                }
                else if (dezenas == 1)
                {
                    if (unidades == 0)
                    {
                        printf("(terceira ordem) %d = %d centenas + 1 dezena = %d + 10\n", num, centenas, centenas * 100);
                    }
                    else if (unidades == 1)
                    {
                        printf("(terceira ordem) %d = %d centenas + 1 dezena + 1 unidade = %d + 10 + 1\n", num, centenas, centenas * 100);
                    }
                    else
                    {
                        printf("(terceira ordem) %d = %d centenas + 1 dezena + %d unidades = %d + 10 + %d\n", num, centenas, unidades, centenas * 100, unidades);
                    }
                }
                else
                {
                    if (unidades == 0)
                    {
                        printf("(terceira ordem) %d = %d centenas + %d dezenas = %d + %d\n", num, centenas, dezenas, centenas * 100, dezenas * 10);
                    }
                    else if (unidades == 1)
                    {
                        printf("(terceira ordem) %d = %d centenas + %d dezenas + 1 unidade = %d + %d + 1\n", num, centenas, dezenas, centenas * 100, dezenas * 10);
                    }
                    else
                    {
                        printf("(terceira ordem) %d = %d centenas + %d dezenas + %d unidades = %d + %d + %d\n", num, centenas, dezenas, unidades, centenas * 100, dezenas * 10, unidades);
                    }
                }
            }
        }
        else if (milhar == 1)
        {
            if (centenas == 0)
            {
                if (dezenas == 0)
                {
                    if (unidades == 0)
                    {
                        printf("(quarta ordem) 1000 = 1 unidade de milhar = 1000\n");
                    }
                    else if (unidades == 1)
                    {
                        printf("(quarta ordem) 1001 = 1 unidade de milhar + 1 unidade = 1000 + 1\n");
                    }
                    else
                    {
                        printf("(quarta ordem) %d = 1 unidade de milhar + %d unidades = 1000 + %d\n", num, unidades, unidades);
                    }
                }
                else if (dezenas == 1)
                {
                    if (unidades == 0)
                    {
                        printf("(quarta ordem) 1010 = 1 unidade de milhar + 1 dezena = 1000 + 10\n");
                    }
                    else if (unidades == 1)
                    {
                        printf("(quarta ordem) 1011 = 1 unidade de milhar + 1 dezena + 1 unidade = 1000 + 10 + 1\n");
                    }
                    else
                    {
                        printf("(quarta ordem) %d = 1 unidade de milhar +  1 dezena + %d unidades = 1000 + 10 + %d\n", num, unidades, unidades);
                    }
                }
                else
                {
                    if (unidades == 0)
                    {
                        printf("(quarta ordem) %d = 1 unidade de milhar + %d dezenas = 1000 + %d\n", num, dezenas, dezenas * 10);
                    }
                    else if (unidades == 1)
                    {
                        printf("(quarta ordem) %d = 1 unidade de milhar + %d dezenas + 1 unidade = 1000 + %d + 1\n", num, dezenas, dezenas * 10);
                    }
                    else
                    {
                        printf("(quarta ordem) %d = 1 unidade de milhar + %d dezenas + %d unidades = 1000 + %d + %d\n", num, dezenas, unidades, dezenas * 10, unidades);
                    }
                }
            }
            else if (centenas == 1)
            {
                if (dezenas == 0)
                {
                    if (unidades == 0)
                    {
                        printf("(quarta ordem) 1100 = 1 unidade de milhar + 1 centena = 1000 + 100\n");
                    }
                    else if (unidades == 1)
                    {
                        printf("(quarta ordem) 1101 = 1 unidade de milhar + 1 centena + 1 unidade = 1000 + 100 + 1\n");
                    }
                    else
                    {
                        printf("(quarta ordem) %d = 1 unidade de milhar + 1 centena + %d unidades = 1000 + 100 + %d\n", num, unidades, unidades);
                    }
                }
                else if (dezenas == 1)
                {
                    if (unidades == 0)
                    {
                        printf("(quarta ordem) 1110 = 1 unidade de milhar + 1 centena + 1 dezena = 1000 +  100 + 10\n");
                    }
                    else if (unidades == 1)
                    {
                        printf("(quarta ordem) 1111 = 1 unidade de milhar + 1 centena + 1 dezena + 1 unidade = 1000 + 100 + 10 + 1\n");
                    }
                    else
                    {
                        printf("(quarta ordem) %d = 1 unidade de milhar + 1 centena + 1 dezena + %d unidades = 1000 + 100 + 10 + %d\n", num, unidades, unidades);
                    }
                }
                else
                {
                    if (unidades == 0)
                    {
                        printf("(quarta ordem) %d = 1 unidade de milhar + 1 centena + %d dezenas = 1000 + 100 + %d\n", num, dezenas, dezenas * 10);
                    }
                    else if (unidades == 1)
                    {
                        printf("(quarta ordem) %d = 1 unidade de milhar + 1 centena + %d dezenas + 1 unidade = 1000 + 100 + %d + 1\n", num, dezenas, dezenas * 10);
                    }
                    else
                    {
                        printf("(quarta ordem) %d = 1 unidade de milhar + 1 centena + %d dezenas + %d unidades = 1000 + 100 + %d + %d\n", num, dezenas, unidades, dezenas * 10, unidades);
                    }
                }
            }

            else
            {
                if (dezenas == 0)
                {
                    if (unidades == 0)
                    {
                        printf("(quarta ordem) %d = 1 unidade milhar + %d centenas = 1000 + %d\n", num, centenas, centenas * 100);
                    }
                    else if (unidades == 1)
                    {
                        printf("(quarta ordem) %d = 1 unidade de milhar + %d centenas + 1 unidade = 1000 + %d + 1\n", num, centenas, centenas * 100);
                    }
                    else
                    {
                        printf("(quarta ordem) %d = 1 unidade de milhar + %d centenas + %d unidades = 1000 + %d + %d\n", num, centenas, unidades, centenas * 100, unidades);
                    }
                }
                else if (dezenas == 1)
                {
                    if (unidades == 0)
                    {
                        printf("(quarta ordem) %d = 1 unidade de milhar + %d centenas + 1 dezena = 1000 + %d + 10\n", num, centenas, centenas * 100);
                    }
                    else if (unidades == 1)
                    {
                        printf("(quarta ordem) %d = 1 unidade de milhar + %d centenas + 1 dezena + 1 unidade = 1000 + %d + 10 + 1\n", num, centenas, centenas * 100);
                    }
                    else
                    {
                        printf("(quarta ordem) %d = 1 unidade de milhar + %d centenas + 1 dezena + %d unidades = 1000 + %d + 10 + %d\n", num, centenas, unidades, centenas * 100, unidades);
                    }
                }
                else
                {
                    if (unidades == 0)
                    {
                        printf("(quarta ordem) %d = 1 unidade de milhar + %d centenas + %d dezenas = 1000 + %d + %d\n", num, centenas, dezenas, centenas * 100, dezenas * 10);
                    }
                    else if (unidades == 1)
                    {
                        printf("(quarta ordem) %d = 1 unidade de milhar + %d centenas + %d dezenas + 1 unidade = 1000 + %d + %d + 1\n", num, centenas, dezenas, centenas * 100, dezenas * 10);
                    }
                    else
                    {
                        printf("(quarta ordem) %d = 1 unidade de milhar + %d centenas + %d dezenas + %d unidades = 1000 + %d + %d + %d\n", num, centenas, dezenas, unidades, centenas * 100, dezenas * 10, unidades);
                    }
                }
            }
        }

        else // geral
        {
            if (centenas == 0)
            {
                if (dezenas == 0)
                {
                    if (unidades == 0)
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar = %d\n", num, milhar, milhar * 1000);
                    }
                    else if (unidades == 1)
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar + 1 unidade = %d + 1\n", num, milhar, milhar * 1000);
                    }
                    else
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar + %d unidades = %d + %d\n", num, milhar, unidades, milhar * 1000, unidades);
                    }
                }
                else if (dezenas == 1)
                {
                    if (unidades == 0)
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar + 1 dezena = %d + 10\n", num, milhar, milhar * 1000);
                    }
                    else if (unidades == 1)
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar + 1 dezena + 1 unidade = %d + 10 + 1\n", num, milhar, milhar * 1000);
                    }
                    else
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar +  1 dezena + %d unidades = %d + 10 + %d\n", num, milhar, unidades, milhar * 1000, unidades);
                    }
                }
                else
                {
                    if (unidades == 0)
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar + %d dezenas = %d + %d\n", num, milhar, dezenas, milhar * 1000, dezenas * 10);
                    }
                    else if (unidades == 1)
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar + %d dezenas + 1 unidade = %d + %d + 1\n", num, milhar, dezenas, milhar * 1000, dezenas * 10);
                    }
                    else
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar + %d dezenas + %d unidades = %d + %d + %d\n", num, milhar, dezenas, unidades, milhar * 1000, dezenas * 10, unidades);
                    }
                }
            }
            else if (centenas == 1)
            {
                if (dezenas == 0)
                {
                    if (unidades == 0)
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar + 1 centena = %d + 100\n", num, milhar, milhar * 1000);
                    }
                    else if (unidades == 1)
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar + 1 centena + 1 unidade = %d + 100 + 1\n", num, milhar, milhar * 1000);
                    }
                    else
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar + 1 centena + %d unidades = %d + 100 + %d\n", num, milhar, unidades, milhar * 1000, unidades);
                    }
                }
                else if (dezenas == 1)
                {
                    if (unidades == 0)
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar + 1 centena + 1 dezena = %d +  100 + 10\n", num, milhar, milhar * 1000);
                    }
                    else if (unidades == 1)
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar + 1 centena + 1 dezena + 1 unidade = %d + 100 + 10 + 1\n", num, milhar, milhar * 1000);
                    }
                    else
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar + 1 centena + 1 dezena + %d unidades = %d + 100 + 10 + %d\n", num, milhar, unidades, milhar * 1000, unidades);
                    }
                }
                else
                {
                    if (unidades == 0)
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar + 1 centena + %d dezenas = %d + 100 + %d\n", num, milhar, dezenas, milhar * 1000, dezenas * 10);
                    }
                    else if (unidades == 1)
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar + 1 centena + %d dezenas + 1 unidade = %d + 100 + %d + 1\n", num, milhar, dezenas, milhar * 1000, dezenas * 10);
                    }
                    else
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar + 1 centena + %d dezenas + %d unidades = %d + 100 + %d + %d\n", num, milhar, dezenas, unidades, milhar * 1000, dezenas * 10, unidades);
                    }
                }
            }

            else
            {
                if (dezenas == 0)
                {
                    if (unidades == 0)
                    {
                        printf("(quarta ordem) %d = %d unidades milhar + %d centenas = %d + %d\n", num, milhar, centenas, milhar * 1000, centenas * 100);
                    }
                    else if (unidades == 1)
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + 1 unidade = %d + %d + 1\n", num, milhar, centenas, milhar * 1000, centenas * 100);
                    }
                    else
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d unidades = %d + %d + %d\n", num, milhar, centenas, unidades, milhar * 1000, centenas * 100, unidades);
                    }
                }
                else if (dezenas == 1)
                {
                    if (unidades == 0)
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + 1 dezena = %d + %d + 10\n", num, milhar, centenas, milhar * 1000, centenas * 100);
                    }
                    else if (unidades == 1)
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + 1 dezena + 1 unidade = %d + %d + 10 + 1\n", num, milhar, centenas, milhar * 1000, centenas * 100);
                    }
                    else
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + 1 dezena + %d unidades = %d + %d + 10 + %d\n", num, milhar, centenas, unidades, milhar * 10000, centenas * 100, unidades);
                    }
                }
                else
                {
                    if (unidades == 0)
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezenas = %d + %d + %d\n", num, milhar, centenas, dezenas, milhar * 1000, centenas * 100, dezenas * 10);
                    }
                    else if (unidades == 1)
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezenas + 1 unidade = %d + %d + %d + 1\n", num, milhar, centenas, dezenas, milhar * 1000, centenas * 100, dezenas * 10);
                    }
                    else
                    {
                        printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezenas + %d unidades = %d + %d + %d + %d\n", num, milhar, centenas, dezenas, unidades, milhar * 1000, centenas * 100, dezenas * 10, unidades);
                    }
                }
            }
        }
    }

    else
        printf("Numero Invalido!\n");

    return 0;
}