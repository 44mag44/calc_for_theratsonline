#include <stdio.h>
//////////////////////////////////////////////////////////////////
/*	Крыса с 2-я и 1-им  умениями 	*/ 
//////////////////////////////////////////////////////////////////
int twone_skills(int point,  int rats)/*обычный день*/
{
	int result		= 0;
	int sumpoints	= 0;
	int armor		= 0;	
	int sumarmor	= 0;
	/*подсчет*/
	for(int i=0; i<=point; i++)// цикл суммирования
		result+=i;
	sumpoints	= result*rats;	// сумма очков
	armor		= sumpoints/2;	// нужно для 1-го навыка
	sumarmor	= (rats*point)/2; // получится для 1-го навыка
	/*вывод на дисплэй*/
	puts("*-------------------------------------------------------*");
	puts("\"Без скидки\"");
	puts("\t\tПервое\tВторое\tСумма");
	printf("Нужно >\t\t%d\t%d\t%d\n", armor, armor, armor*2);
	printf("Итого >\t\t%d\t%d\t%d\n", sumarmor, sumarmor, sumarmor*2);	

	return 1;
}
int twone_skills_promo(int point,  int rats)/*Акция крысы на прокачаку*/
{
	int result		= 0;
	int sumpoints	= 0;
	int armor		= 0;	
	int sumarmor	= 0;
	/*подсчет*/
	for(int i=0; i<=point; i++)/*Крысы на прокачку*/ 
	{
		int sum = 1;
		sum+=i;
		result+=sum/2;
	}
	sumpoints	= result*rats;	// сумма очков
	armor		= sumpoints/2;	// нужно для 1-го навыка
	sumarmor	= (rats*point)/2;// получится для 1-го навыка
	/*вывод на дисплэй*/
	puts("\n\"Крысы на прокачку\"");
	puts("\t\tПервое\tВторое\tСумма");
	printf("Нужно >\t\t%d\t%d\t%d\n", armor, armor, armor*2);
	printf("Итого >\t\t%d\t%d\t%d\n", sumarmor, sumarmor, sumarmor*2);
	puts("*-------------------------------------------------------*");
	
	return 2;
}
