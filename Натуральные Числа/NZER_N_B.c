//Подгружаемые модули отсутствуют
//int NZER_N_B(int n), где n проверяемое целое число
//Возвращается (1), если число не равно "0", иначе возвращается (0)
//Веретенников, Табаков - 4306
int NZER_N_B(int n, int *A)
{
  int check=0, i;  //Инициализация переменных
  for(i=0; i<n+1 && !A[i]; i++); //Цикл идёт пока не достигнут конец или элемент не равен нулю
  if(A[i])
    check=1; //Если в числе есть цифра не равная нулю, устанавливаем флаг в значение 1
  return check;
}
