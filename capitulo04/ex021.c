int main()
{
    float preco;
    int codigo;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    if (codigo == 1)
    {
        printf("\nPROCEDENCIA: Sul\n");
    } else if (codigo == 2)
        {
            printf("\nPROCEDENCIA: Norte\n");
        } else if (codigo == 3)
            {
                printf("\nPROCEDENCIA: Leste\n");
            } else if (codigo == 4)
                {
                    printf("\nPROCEDENCIA: Oeste\n");
                } else if (codigo == 5 || codigo == 6)
                    {
                        printf("\nPROCEDENCIA: Nordeste\n");
                    } else if (codigo <= 9)
                        {
                            printf("\nPROCEDENCIA: Sudeste\n");
                        } else if (codigo <=20)
                            {
                                printf("\nPROCEDENCIA: Centro-oeste\n");
                            } else if (codigo <= 30)
                                {
                                    printf("\nPROCEDENCIA: Nordeste\n");
                                } else 
                                    {
                                        printf("\nO codigo que voce digitou e invalido! \n");
                                    }

    return 0;
}