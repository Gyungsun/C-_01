#include<iostream>
#include<bitset>
#include<stdlib.h>
#include<time.h>
#include<ctime>

using namespace std;

// �ǽ� 01 - �ִ� ���ϱ�
// 3���� ������ �޾Ƽ� �ִ밪�� ����ϴ� �Լ�

// �ǽ� 02 - 
// 2���� ������ �޾Ƽ� ������ ���� �����ϰ� �׸��� ���� ��ü�ϴ� �Լ�
// A=100, B=50  ->  A=50, B=100

// �ǽ� 03 -
// � ������ �޾Ƽ� �� �ڸ��� ���� ���ϴ� �Լ�
// A=123,  ��� 1+2+3 = 6

// �ǽ� 04 -
// �ֻ����� n�� ������ ��, ������ �� ���� ���� ����ϴ� ���α׷�(�Լ�)
// �ֻ����� ������ �����ϴٰ� ����
// N=1200��    =>    1=200, 2=200......

//�ǽ� 05 - 
// ���� ���� 1��(X)�� �������� �� �ܸ�, ������ ���� ���ڰ� ���ϱ��?
// ����ϴ� ���α׷�
// �ܸ�: ���� * ������ * �Ⱓ
// ����: (���� * ������) * ������
// �Է� = ����, ������, �Ⱓ

// �ǽ� 06 - ���丮�� ���ϴ� �Լ�
// n!
// 7! -> 7x6x5x4x3x2x1 =??

// �ǽ� 07
// n@ = n + (n-1) + .... + 1
// 7@ = 7+6+5+4+3+2+1
// 3@ = 3+2+1

// �ǽ� 08
// 1, 1, 2, 3, 5, 8, .....
// F(N) = F(N-1) + F(N-2)

// �ǽ� 09 - 2���� �迭 �����ϱ�

// �ǽ� 10 - ����Լ� ���� �Ǻ���ġ ���ϱ�

//int MaxNum(int Num1, int Num2, int Num3) 
//{
//	int r = 0; // �ִ밪
//
//	if (Num1 > Num2 && Num1 > Num3) 
//	{ 
//		r = Num1; 
//	}
//	else if (Num1 > Num2 && Num1 < Num3)
//	{
//		r = Num3; 
//	}
//	else if (Num1< Num2 && Num2 > Num3) 
//	{
//		r = Num2; 
//	}
//	else if (Num1 < Num2 && Num2 < Num3)
//	{
//		r = Num3; 
//	}
//
//	return r;
//}
// 
// 
//void Change(int num1, int num2) 
//{	
//	int A, B;
//	
//	A = num1;
//	B = num2;
//
//	num1 = num2;
//	num2 = A;
//	
//}
// ���� ���� ����
// ������ ���� ����
//int Plus(int num)
//{
//	int resualt = 0;
//	
//	while (num > 0) 
//	{
//		resualt += num % 10;
//		num /= 10;
//		
//	}
//		
//	return resualt;
//	}

/*int TestRandom()
{
	// �����Լ�

	srand(time(NULL));
	int Rand=rand();
	cout<<Rand<<endl;
	return Rand;
} */

// 0~99999999
// ������� 1, 7, 13, 19�̸� �ֻ��� 1
// �ֻ����� ������ ��Ī��Ų��.

//void boxnum(int num)
//{
//	// 1�� �������� 1~6���� �������� ����
//	// N�� ��������, �������� �� �� �� �������� Ƚ���� ī����  => Resualt
//	srand(time(NULL));
//	int Rand = rand();
//
//	int dice[6] = { 0 };
//	int r;
//
//	int i = 0;
//	while (++i < num ) {
//		
//		r = rand() % 6;
//		
//		if (r == 1)
//		{
//			dice[0] = dice[0] + 1;
//			cout << dice[0];
//		}
//		else if (r == 2)
//		{
//			dice[1] = dice[1] + 1;
//			cout << dice[1];
//		}
//		else if (r == 3)
//		{
//			dice[2] = dice[2] + 1;
//			cout << dice[2];
//		}
//		else if (r == 4)
//		{
//			dice[3] = dice[3] + 1;
//			cout << dice[3];
//		}
//		else if (r == 5)
//		{
//			dice[4] = dice[4] + 1;
//			cout << dice[4];
//		}
//		else if (r == 0)
//		{
//			dice[5] = dice[5] + 1;
//			cout << dice[5];
//		}
//
//	}
//	
//	
//}

//int main()
//{
//	int num = 5;
//	boxnum(num);
//
//	return 0;
//
//}

//void SaveSimple(int money, float rate, int month)
//{
//	float a = 0;
//	rate = rate / 100;
//	a = money * rate * month;
//	int simply = money*month + a;
//	cout << "�ܸ�(�����ڱ�): " << a<<"�� �̰�, �ѱ�"<<simply << "�� �Դϴ�" << endl;
//}

//void SaveComp(int money, float rate, int month)
//{
//	// float b, c, d, e;
//	float c;
//	rate = rate / 100;
//	float newRate = 1 + rate;
//	//b = money * rate;	// ù�� ���ڰ�
//	//c = money + b;		// ù�� ������ ��
//	c = money;
//	int i = 0;
//	while (i++ < 11)
//	{
//		c *= newRate;
//		//d = c * rate;		// �ι�° ���ڰ�
//		//e = c + d;			// �ι�°�� ������ ��
//		//c = e;
//	}
//	
//	int compound = c-money;
//	cout << "����(�����ڱ�): " << compound << "�� �̰�, �ѱ�" << c << "�� �Դϴ�" << endl;
//}

//void Factorial(int num)
//{
//	int resualt=1;
//	int i = 0;
//	if (num > 0) {
//		
//		for(int i=num;i>0;i--)
//		{
//			resualt *= i;
//		}
//		
//		cout << resualt << endl;
//	}
//	else
//	{
//		num = 0;
//		cout << num << endl;
//	}
//}

//int Factorial(int N)
//{
//	if (N > 1)
//	{
//		int resualt = N + Factorial(N - 1);
//		return resualt;
//	}
//	else 
//	{
//		return 1;
//	}
//	
//	return 1;
//}

int F(int N)
{
	int resualt;

	if (N>2)
	{
		resualt = F(N-1) + F(N-2);
		return resualt;	
	}
	
	return 1;
}


// �ǽ� 10 - ����Լ� ���� �Ǻ���ġ �����ϱ�
// 1, 1, 2, 3, 5, 8, 13, 21, 34, .....
// re, re, re+re=re,

int Fibo(int N) // 6��° �ڸ��� ���ض�
{
	int a = 1;
	int b = 1;
	int c = 0;
	int i = 0;
	
	if(N>2)
	{
		for (int i = 0; i < N-2; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
	}
	else
	{
		c = 0;
	}
	
	return c;
}

// �ǽ� 08
// 1, 1, 2, 3, 5, 8, .....
// F(N) = F(N-1) + F(N-2)

int main() {
//
//	/*int a, b, c;
//	cin >> a >> b >> c;
//	int Resualt = MaxNum(a, b, c);
//	cout << "�ִ밪�� "<< Resualt<< " �Դϴ�." << endl;*/
//
//	/*int a, b;
//	cin >> a >> b;
//	int resualt = Change(a, b);
//	cout << "A: " << a << " B: " << b << endl;*/

	/*int i = 0;
	int j = 0;
	int k = 0;
	cin >> i, j, k;

	int simple= SaveSimple(i, j, k);
	int comp = SaveComp(i, j, k);
	cout << "�ܸ�: "<< simple<< endl;
	cout << "����: " << comp << endl;*/

	/*int i = 100000000;
	int j = 10;
	int k = 12;

	cout << "���� " << i << "���� �Ա��Ͻ� ���," << endl;
	SaveSimple(i, j, k);
	SaveComp(i, j, k);*/

	//cout << F(5) << endl;

	/*int Array2D[5][5];
	int a=0;
	for(int i = 0; i < 5; i++)
	{
		for (int j=0; j<5; j++)
		{
			Array2D[i][j] = a++;
		}
	}

	cout << Array2D[4][4] << endl;*/


	clock_t start, finish;
	double duration;
	start = clock();
	// �����Ű�� ���� �ڵ�

	Fibo(40);

	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << duration << "��" << endl;

	cout << Fibo(40) << endl;

	return 0;
}