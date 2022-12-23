#include<iostream>
#include<bitset>
#include<stdlib.h>
#include<time.h>
#include<ctime>

using namespace std;

// 실습 01 - 최댓값 구하기
// 3가지 정수를 받아서 최대값을 출력하는 함수

// 실습 02 - 
// 2가지 정수를 받아서 변수에 값을 저장하고 그리고 값을 교체하는 함수
// A=100, B=50  ->  A=50, B=100

// 실습 03 -
// 어떤 정수를 받아서 각 자리의 합을 구하는 함수
// A=123,  결과 1+2+3 = 6

// 실습 04 -
// 주사위를 n번 던졌을 때, 나오는 각 눈의 수를 출력하는 프로그램(함수)
// 주사위의 각면은 동일하다고 가정
// N=1200번    =>    1=200, 2=200......

//실습 05 - 
// 은행 예금 1억(X)을 저축했을 때 단리, 복리에 의한 이자가 얼마일까요?
// 출력하는 프로그램
// 단리: 원급 * 이자율 * 기간
// 복리: (원금 * 이자율) * 이자율
// 입력 = 원급, 이자율, 기간

// 실습 06 - 팩토리얼 구하는 함수
// n!
// 7! -> 7x6x5x4x3x2x1 =??

// 실습 07
// n@ = n + (n-1) + .... + 1
// 7@ = 7+6+5+4+3+2+1
// 3@ = 3+2+1

// 실습 08
// 1, 1, 2, 3, 5, 8, .....
// F(N) = F(N-1) + F(N-2)

// 실습 09 - 2차원 배열 공부하기

// 실습 10 - 재귀함수 없이 피보나치 구하기

//int MaxNum(int Num1, int Num2, int Num3) 
//{
//	int r = 0; // 최대값
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
// 값에 의한 전달
// 참조에 의한 전달
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
	// 랜덤함수

	srand(time(NULL));
	int Rand=rand();
	cout<<Rand<<endl;
	return Rand;
} */

// 0~99999999
// 결과값이 1, 7, 13, 19이면 주사위 1
// 주사위의 눈으로 매칭시킨다.

//void boxnum(int num)
//{
//	// 1번 던졌을때 1~6까지 랜덤으로 나옴
//	// N번 던졌을때, 랜덤으로 각 면 당 보여지는 횟수를 카운팅  => Resualt
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
//	cout << "단리(연이자금): " << a<<"원 이고, 총금"<<simply << "원 입니다" << endl;
//}

//void SaveComp(int money, float rate, int month)
//{
//	// float b, c, d, e;
//	float c;
//	rate = rate / 100;
//	float newRate = 1 + rate;
//	//b = money * rate;	// 첫달 이자값
//	//c = money + b;		// 첫달 통장의 돈
//	c = money;
//	int i = 0;
//	while (i++ < 11)
//	{
//		c *= newRate;
//		//d = c * rate;		// 두번째 이자값
//		//e = c + d;			// 두번째달 통장의 돈
//		//c = e;
//	}
//	
//	int compound = c-money;
//	cout << "복리(연이자금): " << compound << "원 이고, 총금" << c << "원 입니다" << endl;
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


// 실습 10 - 재귀함수 없이 피보나치 구현하기
// 1, 1, 2, 3, 5, 8, 13, 21, 34, .....
// re, re, re+re=re,

int Fibo(int N) // 6번째 자리를 구해라
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

// 실습 08
// 1, 1, 2, 3, 5, 8, .....
// F(N) = F(N-1) + F(N-2)

int main() {
//
//	/*int a, b, c;
//	cin >> a >> b >> c;
//	int Resualt = MaxNum(a, b, c);
//	cout << "최대값은 "<< Resualt<< " 입니다." << endl;*/
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
	cout << "단리: "<< simple<< endl;
	cout << "복리: " << comp << endl;*/

	/*int i = 100000000;
	int j = 10;
	int k = 12;

	cout << "원금 " << i << "원을 입금하실 경우," << endl;
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
	// 수행시키고 싶은 코드

	Fibo(40);

	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << duration << "초" << endl;

	cout << Fibo(40) << endl;

	return 0;
}