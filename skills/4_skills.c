#include <stdio.h>
//////////////////////////////////////////////////////////////////
/*		Крыса с 4-я умениями 		*/ 
//////////////////////////////////////////////////////////////////
int four_skills(int point,  int rats)/*обычный день*/
{
	int result		= 0;
	int sumpoints	= 0;
	int armor		= 0;	
	int sumarmor	= 0;
	/*подсчет*/
	for(int i=0; i<=point; i++)// цикл суммирования
		result+=i;
	sumpoints	= result*rats;	// сумма очков
	armor		= sumpoints/4;	// нужно для 1-го навыка
	sumarmor	= (rats*point)/4; // получится для 1-го навыка
	/*вывод на дисплэй*/
	puts("*-------------------------------------------------------*");
	puts("\"Без скидки\"");
	puts("\t\tКража\tДобыча\tЗащита\tАтака\t");
	printf("Нужно >\t\t%d\t%d\t%d\t%d\n", armor, armor, armor, armor);
	printf("Итого >\t\t%d\t%d\t%d\t%d\n", sumarmor, sumarmor, sumarmor, sumarmor);	

	return 1;
}
int four_skills_promo(int point,  int rats)/*Акция крысы на прокачаку*/
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
	armor		= sumpoints/4;	// нужно для 1-го навыка
	sumarmor	= (rats*point)/4;// получится для 1-го навыка
	/*вывод на дисплэй*/
	puts("\n\"Крысы на прокачку\"");
	puts("\t\tКража\tДобыча\tЗащита\tАтака\t");
	printf("Нужно >\t\t%d\t%d\t%d\t%d\n", armor, armor, armor, armor);
	printf("Итого >\t\t%d\t%d\t%d\t%d\n", sumarmor, sumarmor, sumarmor, sumarmor);
	puts("*-------------------------------------------------------*");
	
	return 2;
}
