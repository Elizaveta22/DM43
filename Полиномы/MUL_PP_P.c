//������������ ������:
// ADD_ZZ_Z.c
// MUL_P_Q.c
// MUL_Pxk_P.c
//�������� int* MUL_PP_P(int, int*, int, int*, int*), ���
// 1-� �������� - ������� ������� ������� ����������
// 2-� �������� - ������ ������������� ������� ���������� (��� - �����)
// 3-� �������� - ������� ������� ������� ����������
// 4-� �������� - ������ ������������� ������� ���������� (��� - �����)
// 5-� �������� - ������� ������� ����������, ����������� � ���������� ��������� (������������ ��������)
//������� ���������� ������ �������������, ���������� � ���������� ��������� �����������
//������������, �������

#include "ADD_ZZ_Z.c"
#include "MUL_P_Q.c"
#include "MUL_Pxk_P.c"

int* MUL_PP_P(int m, int *A, int n, int *B, int* x)
{
	//������������� ����������
	int i;
	int* C;
	
	*x = m + n;  //������� ������� ����������, ����������� � ���������� ���������
	C = (int*)malloc((*x)*sizeof(int)); //��������� ������ ��� ������� ������������� ����������, ����������� � ���������� ���������
	//��������� �������������
	for (i = 0; i < *x + 1; i++)
		*(C + i) = 0;
	//��������� ������� ���������� �� ������ ���� ������� ����������
	for (i = 0; i < n + 1; i++)
		C = ADD_ZZ_Z(C, MUL_P_Q(MUL_Pxk_P(A, i), *(B + i)));
	return C; //����������� ������� ������������ ����������, ����������� � ���������� ���������
}
