#include <stdio.h>

int main()
{
    float SalarioMinimo, KwGasto, CustoKw, CustoConsumo, CustoDesconto;

    scanf("%f%f", &SalarioMinimo, &KwGasto);

    CustoKw = (SalarioMinimo * 0.7) / 100;
    CustoConsumo = CustoKw * KwGasto;
    CustoDesconto = CustoConsumo - (CustoConsumo * 0.1);

    printf("Custo por kW: R$ %.2f\nCusto do consumo: R$ %.2f\nCusto com desconto: R$ %.2f\n", CustoKw, CustoConsumo, CustoDesconto);

    return 0;
}
