/*DIV_ZZ_Z
��������:
	������� ���������� ������� �� ������� �������� ������ ����� �� ������� ��� ������ ����������� � ��������(�������� ������� �� ����)
������������ ������:
	DIV_NN_N
�������� ����������:
	num - ������ �����
	den - ������ �����
	buff - ��������������� ����������
	result - ��������� �������

������� ������
������� �����
4306
*/
INTEGER DIV_ZZ_Z(struct INTEGER num, struct NATURAL den)
	{
		INTEGER result;
		NATURAL buff; 
		buff.index=num.index;
		buff.number=num.number;
		buff=DIV_NN_N(buff,den);
		result.index=buff.index;
		result.number=buff.number;
		result.sign=num.sign;
		return result;
	}