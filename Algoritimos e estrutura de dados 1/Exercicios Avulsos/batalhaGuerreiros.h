typedef struct guerreiro
{
    int ataque;
    int defesa;
    int carisma;
    int pontos_vida;
    int id_jogador;
} Guerreiro;

int rolaDados()
{
    int dado1, dado2, dado3;

    dado1 = rand() % 6 + 1;
    dado2 = rand() % 6 + 1;
    dado3 = rand() % 6 + 1;

    return dado1 + dado2 + dado3;
}

void criaGuerreiro(Guerreiro *g)
{
    g->ataque = rolaDados();
    g->defesa = rolaDados();
    g->carisma = rolaDados();
    g->pontos_vida = rolaDados() + rolaDados() + rolaDados();
}

int bonusCarisma(int carisma)
{
    if (carisma == 18)
    {
        return 3;
    }
    else if (carisma >= 16 && carisma <= 17)
    {
        return 2;
    }
    else if (carisma >= 14 && carisma <= 15)
    {
        return 1;
    }
    else if (carisma >= 6 && carisma <= 7)
    {
        return -1;
    }
    else if (carisma >= 4 && carisma <= 5)
    {
        return -2;
    }
    else if (carisma == 3)
    {
        return -3;
    }
    else
        return 0;
}

void ataca(Guerreiro *g1, Guerreiro *g2)
{
    int golpe = g1->ataque + rolaDados() + bonusCarisma(g1->carisma);
    int escudo = g2->defesa + rolaDados() + bonusCarisma(g2->carisma);
    int dano = golpe - escudo;
    if (dano > 0)
    {
        g2->pontos_vida -= dano;
        if (g2->pontos_vida <= 0)
        {
            printf("Guerreiro %d ganhou!", g1->id_jogador);
            exit(0);
        }
    }
}