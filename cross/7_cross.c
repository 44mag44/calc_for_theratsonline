#include <stdio.h>
////////////////////////////////////////////////////////////////////////////////
/*		Седьмые пеленки				      */ 
////////////////////////////////////////////////////////////////////////////////
void silica_7() // Силище, скрещивание
{
	//13
	int angel11	= 60;	// 7+7+7=11 >> (14+14)+32=60
	int angel13	= 88;	// 11+11=13
	//20
	int devil16	= 104;	// 13+13=16
	int devil18	= 288;	// 16+16=18
	int devil20	= 324;	// 18+18=20
	int devilmax20	= 324;	// 20+16=20
	//22
	int vampire22	= 360;	// 20+20=22
	// sum var	
	int sumdevil16;		// сердец для 16 дьявола		
	int sumdevil18;		// сердец для 18 дьявола
	int sumdevil20;		// сердец для 20 дьявола
	int sumdevilmax;	// сердец для макс.дьявола
	int sumvampire22;	// сердец для вампира 22 уровня
	// Вычесление
	sumdevil16	= (angel11*4)+(angel13*2)+devil16;		//16 дьявол
	sumdevil18	= (sumdevil16*2)+devil18;			//18 дьявол 
	sumdevil20	= (sumdevil18*2)+devil20;			//20 дьявол	
	sumdevilmax 	= (sumdevil20+sumdevil16)+devilmax20;	//+20 дьявол
	sumvampire22	= (sumdevilmax*2)+vampire22;			//22 вампир
	
	// Вывод на экран
	printf("---------------------------------------------------------\n");
	printf("\t\t- Силища. 7 пеленки -\n");
	printf("Кол-во сердец >\t\t Обычный|Брач.пора\n");	
	printf("Дьявол\t16 ур.  (12кр.)\t-> %d\t| %d\n", sumdevil16, sumdevil16/2);
	printf("Дьявол\t18 ур.  (24кр.)\t-> %d\t| %d\n", sumdevil18, sumdevil18/2);
	printf("Дьявол\t20 ур.  (48кр.)\t-> %d\t| %d\n", sumdevil20, sumdevil20/2);
	printf("Дьявол\t+20 ур. (60кр.)\t-> %d\t| %d\n", sumdevilmax, sumdevilmax/2);
	printf("Вампир\t22 ур. (120кр.)\t-> %d\t| %d\n", sumvampire22, sumvampire22/2);
	
	printf("Схема > \n");
	printf(" 16 ->\t7+7=9 , 9+7=11 , 11+11=13 , 13+13=16(12)\n");
	printf(" 18 ->\t16+16=18(24)\n");
	printf(" 20 ->\t18+18=20(48)\n");
	printf("+20 ->\t20+16=20(60)\n");
	printf(" 22 ->\t20+20=22(120)\n");
}
/////////////////////////////////////////////////////////////////////////////////
/*	Седьмые пеленки/Свобоный день		      */ 
/////////////////////////////////////////////////////////////////////////////////
void freeday_7()
{
	//14
	int royal10	= 29;	// 7+7+7=10
	int angel12	= 20;	// 12 angel 
	int angel14	= 48;	// 12+12=14
	//20
	int devil16	= 56;	// 14+14=16
	int devil19	= 144;	// 16+16=19
	int devilmax20	= 171;	// 19+19=20
	//22
	int vampire22	= 180;	// 20+20=22
	//sum var	
	int sumdevil16;		// сердец для 16 дьявола		
	int sumdevil19a;	// сердец для 19 дьявола(a)
	int sumdevilmax;	// сердец для макс.дьявола
	int sumvampire22;	// сердец для вампира 22 уровня
	// Вычесление
	sumdevil16	= (royal10*8)+(angel12*4)+(angel14*2)+devil16;// 16 дьявол
	sumdevil19a	= (sumdevil16*2)+devil19;				// 19 дьявол
	sumdevilmax 	= (sumdevil19a*2)+devilmax20;			// 20 дьявол
	sumvampire22	= (sumdevilmax*2)+vampire22;				// 22 вампир
	
	// Вывод на экран
	printf("---------------------------------------------------------\n");
	printf("\t\t- 7 пеленки -\n");
	printf("Кол-во сердец >\t\t Обычный|Брач.пора\n");
	printf("Дьявол\t16 ур. (24кр.)\t-> %d\t| %d\n", 2*sumdevil16, sumdevil16);
	printf("Дьявол\t19 ур. (48кр.)\t-> %d\t| %d\n" ,2*sumdevil19a, sumdevil19a);
	printf("Дьявол\t20 ур. (96кр.)\t-> %d\t| %d\n", 2*sumdevilmax, sumdevilmax);
	printf("Вампир\t22 ур. (192кр.)\t-> %d\t| %d\n", 2*sumvampire22, sumvampire22);
	
	printf("Схема > \n");
	printf(" 16 ->\t7+7=8 , 8+7=10 , 10+10=12 , 12+12=14(12) , \n\t");
	printf(" 14+14=16(24)\n"); 
	printf(" 19 ->\t16+16=19(48)\n");
	printf(" 20 ->\t19+19=20(96)\n");
	printf(" 22 ->\t20+20=22(192)\n");
	printf("---------------------------------------------------------\n");
}

