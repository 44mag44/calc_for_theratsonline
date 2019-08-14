#include <stdio.h>
////////////////////////////////////////////////////////////////////////////////
/*			Девятые пеленки			      */ 
////////////////////////////////////////////////////////////////////////////////
void silica_9()	// В Тотем
{
	//15
	int angel11 = 36;	// 9+9=11
	int angel13 = 88;	// 11+11=13
	int angel15 = 96;	// 13+11=15
	//20
	int devil18 = 120;	// 15+15=18
	int devil20 = 324;	// 18+18=20
	//var sum
	int sumangel15;	// сердец для 15 ангела
	int sumdevil18;		// сердец для 18 дьявола
	int totem;			// sum 20 divel
	// Вычесление
	sumangel15	= (angel11*3)+angel13+angel15;	// 15 ангел
	sumdevil18	= (sumangel15*2)+devil18;		// 18 дьявол
	totem		= (sumdevil18*2)+devil20;		// 20 дьявол
	// Вывод на экран
	printf("---------------------------------------------------------\n");
	printf("\t- Силища. Тотем. 9 пеленки -\n");
	printf("Кол-во сердец >\t\t Обычный|Брач.пора\n");
	printf("Дьявол\t18 ур. (12кр.)\t-> %d\t| %d\n", sumdevil18, sumdevil18/2);
	printf("Дьявол\t20 ур. (24кр.)\t-> %d\t| %d\n", totem, totem/2);
	
	printf("Схема > \n");
	printf(" 11 ->\t9+9=11(2)\t->8x коромежек осталось\n");
	printf(" 15 ->\t11+11+11=15(6)\t->15x\n");
	printf(" 18 ->\t15+15=18(12)\t->45x\n");
	printf(" 20 ->\t18+18=20(24)\t->120x\n");
}
void freeday_9()	// Свобоный день
{
	//15
	int angel11	= 36;	// 9+9=11
	int angel13	= 88;	// 11+11=13
	int angel14	= 96;	// 13+11=14
	int angel15	= 104;	// 13+13=15
	//20
	int devil16	= 112;	// 15+13=16
	int devil17	= 116;	// 15+14=17
	int devil19a	= 288;	// 16+16=19
	int devil19b	= 297;	// 16+17=19
	int devil20	= 342;	// 19a+19b=20
	//22
	int vampire22	= 360;	// 20+20=22
	//var sum
	int sumangel13;	// сердец для 13 ангела
	int sumangel14;	// сердец для 14 ангела
	int sumangel15;	// сердец для 15 ангела
	int sumdevil16;		// сердец для 16 дьявола
	int sumdevil17;		// сердец для 17 дьявола
	int sumdevil19a;	// сердец для 19 дьявола(a)
	int sumdevil19b;	// сердец для 19 дьявола(b)
	int sumdevilmax;	// сердец для макс.дьявола
	int sumvampire22;	// сердец для вампира 22 уровня
	// Вычесление
	sumangel13	= (angel11*2)+angel13;			// 13 ангел
	sumangel14	= sumangel13+angel11+angel14;	// 14 ангел
	sumangel15	= (sumangel13*2)+angel15;		// 15 ангел
	sumdevil16	= sumangel15+sumangel13+devil16;	// 16 дьявол
	sumdevil17	= sumangel15+sumangel14+devil17;	// 17 дьявол
	sumdevil19a	= (sumdevil16*2)+devil19a;		// 19a дьявол
	sumdevil19b	= sumdevil16+sumdevil17+devil19b;	// 19b дьявол
	sumdevilmax	= sumdevil19a+sumdevil19b+devil20;// +20 дьявол
	sumvampire22	= (sumdevilmax*2)+vampire22;		// 22 вампир

	// Вывод на экран
	printf("---------------------------------------------------------\n");
	printf("\t\t- 9 пеленки -\n");
	printf("Кол-во сердец >\t\t  Обычный|Брач.пора\n");
	printf("Дьявол\t16 ур. (12кр.)\t-> %d\t | %d\n", sumdevil16, sumdevil16/2);
	printf("Дьявол\t17 ур. (14кр.)\t-> %d\t | %d\n", sumdevil17, sumdevil17/2);
	printf("Дьявол\t19a ур.(24кр.)\t-> %d\t | %d\n", sumdevil19a, sumdevil19a/2);
	printf("Дьявол\t19b ур.(26кр.)\t-> %d\t | %d\n", sumdevil19b, sumdevil19b/2);
	printf("Дьявол\t20 ур. (50кр.)\t-> %d\t | %d\n", sumdevilmax, sumdevilmax/2);
	printf("Вампир\t22 ур. (100кр.)\t-> %d\t | %d\n", sumvampire22, sumvampire22/2);
	
	printf("Схема > \n");
	printf(" 11 ->\t9+9=11(2)\t->15x коромежек осталось\n");
	printf(" 13 ->\t11+11=13(4)\t->24x\n");
	printf(" 14 ->\t13+11=14(6)\t->18x\n");
	printf(" 15 ->\t13+13=15(8)\t->23x\n");
	printf(" 16 ->\t15+13=16(12)\t->4x\n");	
	printf(" 17 ->\t15+14=17(14)\t->26x\n");
	printf(" 19a->\t16+16=19(24)\t->87x\n");	
	printf(" 19b->\t16+17=19(26)\t->69x\n");
	printf(" 20 ->\t19+19=20(50)\t->5x\n");
	printf(" 22 ->\t20+20=22(100)\t->67x\n");	
	printf("---------------------------------------------------------\n");
}
