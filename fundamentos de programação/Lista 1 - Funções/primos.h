int primo(int x)
{
    int i, contDiv = 0;

    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            contDiv++;
            break;
        }
    }
    return contDiv;
}