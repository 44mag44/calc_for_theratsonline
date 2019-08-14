#include <stdio.h>
////////////////////////////////////////////////////////////////////////////////
/*				 Восмые пеленки		      */ 
////////////////////////////////////////////////////////////////////////////////
void silica_8()	// В Тотем
{
	//17
	int angel12	= 68;	// 8+8+8=12 >> 16+16+36=68
	int angel14	= 96;	// 12+12=14
	int devil17	= 112;	// 14+14=17
	//18
	int royal10	= 32;	// 8+8=10
	int angel13	= 40;	// 10+10=13
	int angel15	= 104;	// 13+13=15
	int devil18	= 120;	// 15+15=18
	//20
	int totem20	= 315;	// 18+17=20
	
	//доп. переменные
	int sumdevil17	= 0;	//sum 17 divel
	int sumdevil18	= 0;	//sum 18 divel
	int totem		= 0;	//sum 20 divel
	// Вычесление	
	sumdevil17	= (angel12*4)+(angel14*2)+devil17;			// 17 дьявол
	sumdevil18	= (royal10*8)+(angel13*4)+(angel15*2)+devil18;// 18 дьявол
	totem		= (sumdevil17+sumdevil18)+totem20;		// 20 дьявол
	
	// Вывод на экран
	printf("---------------------------------------------------------\n");
	printf("\t- Силища. Тотем. 8 пеленки -\n");
	printf("Кол-во сердец >\t\t Обычный|Брач.пора\n");
	printf("Дьявол\t17 ур. (12кр.)\t-> %d\t| %d\n", sumdevil17, sumdevil17/2);
	printf("Дьявол\t18 ур. (16кр.)\t-> %d\t| %d\n", sumdevil18, sumdevil18/2);
	printf("Дьявол\t20 ур. (28кр.)\t-> %d\t| %d\n", totem, totem/2);
	
	printf("Схема > \n");
	printf(" 17 ->\t8+8+8=12 , 12+12=14(6) , 14+14=17(12)\n");
	printf(" 18 ->\t8+8=10 , 10+10=13 , 13+13=15(8) , 15+15=18(16)\n"); 
	printf(" 20 ->\t17+18=20(28)\n");
}
////////////////////////////////////////////////////////////////////////////////
/*			Свобоный день			      */ 
////////////////////////////////////////////////////////////////////////////////
void freeday_8()
{
	//20
	int angel12		= 104;	// 10+10=12
	int angel14		= 96;	// 12+12=14
	int devil16		= 112;	// 14+14=16
	int devil18		= 288;	// 16+16=18
	int devil20		= 324;	// 18+18=20
	//25
	int vampire21		= 324;	// 20+16=21
	int vampire22		= 360;	// 20+20=22
	int vampire23		= 672;	// 21+21=23
	int vampire24		= 704;	// 22+22=24
	int maxvampire25	= 752;	// 24+23=25
	//28
	int joker28		= 800;	// 25+25=28 	
	//sum var
	int sumdevil16;		// сердец для 16 дьявола
	int sumdevil18;		// сердец для 18 дьявола
	int sumdevilmax;	// сердец для макс.дьявола
	int sumvampire22;	// сердец для вампира 22 уровня
	int sumvampire24;	// сердец для вампира 24 уровня
	int sumvampire21;	// сердец для вампира 21 уровня
	int sumvampire23;	// сердец для вампира 23 уровня
	int sumvampiremax;	// сердец для макс.вампира
	int sumjoker;		// сердец для джокера 28 уровня
	// Вычесление
	sumdevil16		= (angel12*4)+(angel14*2)+devil16;				// 16 дьявол
	sumdevil18		= (sumdevil16*2)+devil18;					// 18 дьявол
	sumdevilmax		= (sumdevil18*2)+devil20;					// 20 дьявол
	sumvampire22		= (sumdevilmax*2)+vampire22;					// 22 вампир
	sumvampire24		= (sumvampire22*2)+vampire24;				// 24 вампир
	sumvampire21  	= (sumdevilmax+sumdevil16)+vampire21;			// 21 вампир
	sumvampire23  	= (sumvampire21*2)+vampire23;				// 23 вампир	
	sumvampiremax	= (sumvampire23+sumvampire24)+maxvampire25;	//+25 вампир
	sumjoker			= (sumvampiremax*2)+joker28;				// 28 джокер 

	// Вывод на экран
	printf("---------------------------------------------------------\n");
	printf("\t\t- 8 пеленки -\n");
	printf("Кол-во сердец >\t\t  Обычный|Брач.пора\n");
	printf("Дьявол\t16 ур. (16кр.)\t-> %d\t | %d\n", sumdevil16, sumdevil16/2);
	printf("Дьявол\t18 ур. (32кр.)\t-> %d\t | %d\n", sumdevil18, sumdevil18/2);
	printf("Дьявол\t20 ур. (64кр.)\t-> %d\t | %d\n", sumdevilmax, sumdevilmax/2);
	printf("Вампир\t22 ур. (128кр.)\t-> %d\t | %d\n", sumvampire22, sumvampire22/2);
	printf("Вампир\t24 ур. (256кр.)\t-> %d\t | %d\n", sumvampire24, sumvampire24/2);
	printf("Вампир\t21 ур. (80кр.)\t-> %d\t | %d\n", sumvampire21, sumvampire21/2);
	printf("Вампир\t23 ур. (160кр.)\t-> %d\t | %d\n", sumvampire23, sumvampire23/2);
	printf("Вампир\t25 ур. (416кр.)\t-> %d\t | %d\n", sumvampiremax, sumvampiremax/2);
	printf("Джокер\t28 ур. (832кр.)\t-> %d\t | %d\n", sumjoker, sumjoker/2);
	
	printf("Схема > \n");
	printf(" 14 ->\t8+8=10(2) , 10+10=12(4) , 12+12=14(8)\n");
	printf(" 16 ->\t14+14=16(16)\t->8x коромежек осталось\n");
	printf(" 18 ->\t16+16=18 (32)\t->6x\n");
	printf(" 20 ->\t18+18=20 (64)\t->41x\n");
	printf(" 22 ->\t20+20=22 (128)\t->114x\n");
	printf(" 24 ->\t22+22=24 (256)\t->218x\n");
	printf(" 21 ->\t20+16=21 (80)\t->109x\n");
	printf(" 23 ->\t21+21=23 (160)\t->262x\n");
	printf(" 25 ->\t24+23=25 (416)\t->2x\n");
	printf(" 28 ->\t25+25=28 (832)\t->337x\n");
	printf("---------------------------------------------------------\n");
}
