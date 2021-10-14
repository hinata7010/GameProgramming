#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void time_to_number(void);
void number_check(int, int);
void digit_print(int*, int);
void gotoxy(int x, int y);
void dot_print(void);
void dot_print_div(void);
void Australia_time();
void LA_time();
void England_time();
void div_time();
void time_to_number_Australia(void);
void time_to_number_LA(void);
void time_to_number_England(void);
void time_to_number_div(void);
void korea_time();

boolean flag = false;

struct time
{ 
	int hour1;
	int hour2;
	int minute1;
	int minute2;
	int second1; 
	int second2;
	int sumtime;
}time1;


//�迭 one[]~�迭 nine[]������ ���Ǵ� [���� 5.4.7]�� [���� 6.1.1]�� �̿�
int zero[20] =
	{1,1,1,1,
	 1,0,0,1,
	 1,0,0,1,
	 1,0,0,1,
	 1,1,1,1};

int one[20]=
 {0,0,1,0,
  0,0,1,0,
  0,0,1,0,
  0,0,1,0,
  0,0,1,0};

int two[20]=
 {1,1,1,1,
  0,0,0,1,
  1,1,1,1,
  1,0,0,0,
  1,1,1,1};

int three[20]=
 {1,1,1,1,
  0,0,0,1,
  1,1,1,1,
  0,0,0,1,
  1,1,1,1};

int four[20]=
 {1,0,0,1,
  1,0,0,1,
  1,1,1,1,
  0,0,0,1,
  0,0,0,1};

int five[20]=
 {1,1,1,1,
  1,0,0,0,
  1,1,1,1,
  0,0,0,1,
  1,1,1,1};

int six[20]=
 {1,0,0,0,
  1,0,0,0,
  1,1,1,1,
  1,0,0,1,
  1,1,1,1};

int seven[20]=
 {1,1,1,1,
  0,0,0,1,
  0,0,0,1,
  0,0,0,1,
  0,0,0,1};

int eight[20]=
 {1,1,1,1,
  1,0,0,1,
  1,1,1,1,
  1,0,0,1,
  1,1,1,1};

int nine[20] =
	{1,1,1,1,
	 1,0,0,1,
	 1,1,1,1,
	 0,0,0,1,
	 0,0,0,1};


int main(void)
{
	int line, number; 
	long time_number;
	system("cls");
	printf("1. ȣ�� �ð� ");
	printf("2. �̱�(LA) �ð� ");
	printf("3. ���� �ð� ");
	printf("4. ���� ���� ���");
	printf("5. ���α׷� ����");
	printf("\n�ѹ� �� ������ �޴������� �����մϴ�.");
	printf("\n"); 
	while(!kbhit())
	{
		gotoxy(1,3);
		time_to_number();
		for(line=0;line<=4;line++)
		{
			number_check(time1.hour1, line);
			number_check(time1.hour2, line);
			number_check(time1.minute1, line);
			number_check(time1.minute2, line);
			number_check(time1.second1, line);
			number_check(time1.second2, line);
			printf("\n");
		}
		dot_print();
	}
	printf("\n\n���Ͻô� �޴� ��ȣ�� �Է��ϼ���. \n");
	scanf("%d", &number);
	switch(number)
	{
		case 1 : 
			Australia_time();
			break;
		case 2 :
			LA_time();
			break;
		case 3 :
			England_time();
			break;
		case 4 :
			div_time();
			break;
		default :
			printf("���α׷��� ����Ǿ����ϴ�.");
			return 0;
			break;
	}
	return 0;
}

void Australia_time()
{
	int line, number; 
	long time_number;
	system("cls");
	printf("ȣ�� �ð��Դϴ�.");
	printf("1. �ѱ� �ð� ");
	printf("2. �̱�(LA) �ð� ");
	printf("3. ���� �ð� ");
	printf("4. ���α׷� ����");
	printf("\n�ѹ� �� ������ �޴������� �����մϴ�.");
	printf("\n");
	while(!kbhit())
	{
		gotoxy(1,3);
		time_to_number_Australia();
		for(line=0;line<=4;line++)
		{
			number_check(time1.hour1, line);
			number_check(time1.hour2, line);
			number_check(time1.minute1, line);
			number_check(time1.minute2, line);
			number_check(time1.second1, line);
			number_check(time1.second2, line);
			printf("\n");
		}
		dot_print();
	}
	printf("\n\n���Ͻô� �޴� ��ȣ�� �Է��ϼ���. \n");
	scanf("%d", &number);
	switch(number)
	{
		case 1 : 
			korea_time();
			break;
		case 2 :
			LA_time();
			break;
		case 3 :
			England_time();
			break;
		default :
			printf("���α׷��� ����Ǿ����ϴ�.");
			break;
	}
}
void LA_time()
{
	int line, number; 
	long time_number;
	system("cls");
	printf("LA �ð��Դϴ�.");
	printf("1. ȣ�� �ð� ");
	printf("2. �ѱ� �ð� ");
	printf("3. ���� �ð� ");
	printf("4. ���α׷� ����");
	printf("\n�ѹ� �� ������ �޴������� �����մϴ�.");
	printf("\n");
	while(!kbhit())
	{
		gotoxy(1,3);
		time_to_number_LA();
		for(line=0;line<=4;line++)
		{
			number_check(time1.hour1, line);
			number_check(time1.hour2, line);
			number_check(time1.minute1, line);
			number_check(time1.minute2, line);
			number_check(time1.second1, line);
			number_check(time1.second2, line);
			printf("\n");
		}
		dot_print();
	}
	printf("\n\n���Ͻô� �޴� ��ȣ�� �Է��ϼ���. \n");
	scanf("%d", &number);
	switch(number)
	{
		case 1 : 
			Australia_time();
			break;
		case 2 :
			korea_time();
			break;
		case 3 :
			England_time();
			break;
		default :
			printf("���α׷��� ����Ǿ����ϴ�.");
			break;
	}
	
}
void England_time()
{
	int line, number; 
	long time_number;
	system("cls");
	printf("���� �ð��Դϴ�.");
	printf("1. ȣ�� �ð� ");
	printf("2. �̱�(LA) �ð� ");
	printf("3. �ѱ� �ð� ");
	printf("4. ���α׷� ����");
	printf("\n�ѹ� �� ������ �޴������� �����մϴ�.");
	printf("\n");
	while(!kbhit())
	{
		gotoxy(1,3);
		time_to_number_England();
		for(line=0;line<=4;line++)
		{
			number_check(time1.hour1, line);
			number_check(time1.hour2, line);
			number_check(time1.minute1, line);
			number_check(time1.minute2, line);
			number_check(time1.second1, line);
			number_check(time1.second2, line);
			printf("\n");
		}
		dot_print();
	}
	printf("\n\n���Ͻô� �޴� ��ȣ�� �Է��ϼ���. \n");
	scanf("%d", &number);
	switch(number)
	{
		case 1 : 
			Australia_time();
			break;
		case 2 :
			LA_time();
			break;
		case 3 :
			korea_time();
			break;
		default :
			printf("���α׷��� ����Ǿ����ϴ�.");
			break;
	}
}
void korea_time()
{
	int line, number; 
	long time_number;
	system("cls");
	printf("�ѱ� �ð��Դϴ�.");
	printf("1. ȣ�� �ð� ");
	printf("2. �̱�(LA) �ð� ");
	printf("3. ���� �ð� ");
	printf("4. ���α׷� ����");
	printf("\n�ѹ� �� ������ �޴������� �����մϴ�.");
	printf("\n");
	while(!kbhit())
	{
		gotoxy(1,3);
		time_to_number();
		for(line=0;line<=4;line++)
		{
			number_check(time1.hour1, line);
			number_check(time1.hour2, line);
			number_check(time1.minute1, line);
			number_check(time1.minute2, line);
			number_check(time1.second1, line);
			number_check(time1.second2, line);
			printf("\n");
		}
		dot_print();
	}
	printf("\n\n���Ͻô� �޴� ��ȣ�� �Է��ϼ���. \n");
	scanf("%d", &number);
	switch(number)
	{
		case 1 : 
			Australia_time();
			break;
		case 2 :
			LA_time();
			break;
		case 3 :
			England_time();
			break;
		default :
			printf("���α׷��� ����Ǿ����ϴ�.");
			break;
	}
}
void div_time()
{
	int line, number; 
	long time_number;
	system("cls");
	printf("�ѱ� �ð��Դϴ�.");
	printf("1. ȣ�� �ð� ");
	printf("2. �̱�(LA) �ð� ");
	printf("3. ���� �ð� ");
	printf("4. ���α׷� ����");
	printf("\n�ѹ� �� ������ �޴������� �����մϴ�.");
	printf("\n");
	while(!kbhit())
	{
		gotoxy(1,3);
		time_to_number_div();
		if(flag == true)
			{
				printf("����\n");
			}
			else
			{
				printf("����\n");
			}
		for(line=0;line<=4;line++)
		{
			number_check(time1.hour1, line);
			number_check(time1.hour2, line);
			number_check(time1.minute1, line);
			number_check(time1.minute2, line);
			number_check(time1.second1, line);
			number_check(time1.second2, line);
			printf("\n");
		}
		dot_print_div();
	}
	flag = false;
	printf("\n\n���Ͻô� �޴� ��ȣ�� �Է��ϼ���. \n");
	scanf("%d", &number);
	switch(number)
	{
		case 1 : 
			Australia_time();
			break;
		case 2 :
			LA_time();
			break;
		case 3 :
			England_time();
			break;
		default :
			printf("���α׷��� ����Ǿ����ϴ�.");
			break;
	}
}
void time_to_number_div(void)
{
	time_t current;
	struct tm *d;
	int hour, min, sec; 
	current=time(NULL);
	d=localtime(&current);
	hour=d->tm_hour;
	min=d->tm_min;
	sec=d->tm_sec;
	if(hour >= 12)
	{
		hour = hour-12;
		flag = true;
	}
	time1.hour1 = hour/10;
	time1.hour2 = hour%10;
	time1.minute1 = min/10;
	time1.minute2 = min%10;
	time1.second1 = sec/10;
	time1.second2 = sec%10;
	hour=d->tm_hour*10000;
	min=d->tm_min*100;
	sec=d->tm_sec;
	time1.sumtime = hour+min+sec;	
}
void time_to_number(void)
{
	time_t current;
	struct tm *d;
	int hour, min, sec; 
	current=time(NULL);
	d=localtime(&current);
	hour=d->tm_hour;
	min=d->tm_min;
	sec=d->tm_sec;
	time1.hour1 = hour/10;
	time1.hour2 = hour%10;
	time1.minute1 = min/10;
	time1.minute2 = min%10;
	time1.second1 = sec/10;
	time1.second2 = sec%10;
	hour=d->tm_hour*10000;
	min=d->tm_min*100;
	sec=d->tm_sec;
	time1.sumtime = hour+min+sec;	
}
void time_to_number_Australia(void)
{
	time_t current;
	struct tm *d;
	int hour, min, sec; 
	current=time(NULL);
	d=localtime(&current);
	hour=d->tm_hour;
	min=d->tm_min;
	sec=d->tm_sec;
	if(hour+1 >= 24)
	{
		hour = hour-24;
	}
	else
	{
		hour = hour + 1;
	}
	time1.hour1 = hour/10;
	time1.hour2 = hour%10;
	time1.minute1 = min/10;
	time1.minute2 = min%10;
	time1.second1 = sec/10;
	time1.second2 = sec%10;
	hour=d->tm_hour*10000;
	min=d->tm_min*100;
	sec=d->tm_sec;
	time1.sumtime = hour+min+sec;	
}
void time_to_number_LA(void)
{
	time_t current;
	struct tm *d;
	int hour, min, sec; 
	current=time(NULL);
	d=localtime(&current);
	hour=d->tm_hour;
	min=d->tm_min;
	sec=d->tm_sec;
	if(hour-16 < 0)
	{
		hour = 24 + hour;
	}
	else
	{
		hour = hour - 16;
	}
	time1.hour1 = hour/10;
	time1.hour2 = hour%10;
	time1.minute1 = min/10;
	time1.minute2 = min%10;
	time1.second1 = sec/10;
	time1.second2 = sec%10;
	hour=d->tm_hour*10000;
	min=d->tm_min*100;
	sec=d->tm_sec;
	time1.sumtime = hour+min+sec;	
}
void time_to_number_England(void)
{
	time_t current;
	struct tm *d;
	int hour, min, sec; 
	current=time(NULL);
	d=localtime(&current);
	hour=d->tm_hour;
	min=d->tm_min;
	sec=d->tm_sec;
	if(hour < 0)
	{
		hour = 24 + hour;
	}
	else
	{
		hour = hour - 8;
	}
	time1.hour1 = hour/10;
	time1.hour2 = hour%10;
	time1.minute1 = min/10;
	time1.minute2 = min%10;
	time1.second1 = sec/10;
	time1.second2 = sec%10;
	hour=d->tm_hour*10000;
	min=d->tm_min*100;
	sec=d->tm_sec;
	time1.sumtime = hour+min+sec;	
}

void number_check(int k, int i)
{
     	switch(k%10)
     	{
	    	case 0 :
		  		digit_print(zero, i);
		  		break;
	        case 1 : 
		  		digit_print(one, i);
		  		break;
	        case 2 : 
		  		digit_print(two, i);
		  		break;
	        case 3 : 
		  		digit_print(three, i);
		  		break;
	        case 4 : 
		  		digit_print(four, i);
		  		break;
	        case 5 : 
		  		digit_print(five, i);
		  		break;
	        case 6 : 
		  		digit_print(six, i);
		  		break;
	        case 7 : 
		  		digit_print(seven, i);
		  		break;
	        case 8 : 
		  		digit_print(eight, i);
		  		break;
	        case 9 : 
	          	digit_print(nine, i);
		  		break;
	     }
}
void digit_print(int dim[], int check)
{
 //[�Լ� 5.4.8]�� ���Ǻκ� ����
 int i;
 for(i=check*4;i<=check*4+3; i++)
  if (dim[i]==1)
	 printf("��");
  else
	 printf("  ");
 printf("  ");
}
void dot_print(void)
{
	gotoxy((19), 4);
	printf("��");
	gotoxy((19), 6);
	printf("��");
	gotoxy(13+(26), 4);
	printf("��");
	gotoxy(13+(26), 6);
	printf("��");
}
void dot_print_div(void)
{
	gotoxy((19), 5);
	printf("��");
	gotoxy((19), 7);
	printf("��");
	gotoxy(13+(26), 5);
	printf("��");
	gotoxy(13+(26), 7);
	printf("��");
}
void gotoxy(int x, int y)
{
   COORD Pos = {x - 1, y - 1};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
