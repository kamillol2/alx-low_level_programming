void print(int nb)
{
    nb --;
    printf("%d\n", nb);
    if (nb > 0) 
    {
        print(nb);
    }
}
