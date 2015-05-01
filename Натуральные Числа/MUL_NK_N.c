struct NATURAL MUL_Nk_N(struct NATURAL A, int k)  //нам передают натуральное число и степень 10
{
        int i, j, new_index;
        new_index = A.index + k;
        A.number = (short int*) realloc (A.number, (new_index + 1) * sizeof (short int));
        for (i = A.index; i >= 0; i--)
                A.number[i+k] = A.number[i];
        for (i = 0; i < k; i++)
                A.number[i] = 0;           //просто добавляем k нулей в "прореалоченный" массив
        A.index = new_index;
        return A;
}
