

//  Завдання 2
int main()
{
    char arr5[10]; // 1

    char arr6[10]; // 2

    char arr7[10]; // 3

    for (int i = 0; i < 10; i++)
    {

        arr5[i] = 100 + i;
    }

    for (int i = 0; i < 10; i++)
    {

        arr6[i] = 110 - i * i;
    }
    int a = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr5[i] == arr6[j])
            {
                arr7[a] = arr5[i];
                a++;
                break;
            }
        }
    }
    int multipl = 1;
    for (int i = 0; i < a; i++)
    {
        multipl *= arr7[i];
    }
}