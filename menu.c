#include <stdio.h>
#include "skills.h"
#include "crossing.h"

void display()
{
	int point	= 0;	// Очки
	int rats	= 0;	// Крысы
	int num	= 0;	// Выбор пункта в меню
	int lvl	= 0;	// Выбор таблицы скрещивания 7-8-9
	printf("\n");
	puts("*-------------------------------------------------------*");
	puts("\t***Калькулятор для игры \"Крысы Онлайн\"***");
	puts("*-------------------------------------------------------*");
	puts("Выбирите нужный пункт в меню\n\t(нажав 1,2,3,4,0)\n");
	puts("1. Расчет для универсала(4 умения)");
	puts("2. Расчет только для 3-х умений");
	puts("3. Расчет только для 1-го и 2-х умений");
	puts("4. Показать таблицу скрещивания");
	puts("0. Выход");
	printf("\t<Выбор> ");
	scanf("%d", &num);
	switch(num)
	{	
	case 1:
		puts("\n\n\t*Расчет для универсала(4 умения)*");
		printf("Очки\t: "); 
		scanf("%d", &point);	// очки
		printf("Крысы\t: ");
		scanf("%d", &rats);	// крысы
		/*обычный день*/
		four_skills(point,  rats);	
		/*Акция крысы на прокачаку*/
		four_skills_promo(point,  rats);
		break;
	case 2:
		puts("\n\n\t*Расчет только для 3-х умений*");
		printf("Очки\t: "); 
		scanf("%d", &point);	// очки
		printf("Крысы\t: ");
		scanf("%d", &rats);	// крысы
		/*обычный день*/
		three_skills(point, rats);
		/*Акция крысы на прокачаку*/
		three_skills_promo(point, rats);
		break;
		case 3:
		puts("\n\n\t*Расчет только для 1-го и 2-х умений*");
		printf("Очки\t: "); 
		scanf("%d", &point);	// очки
		printf("Крысы\t: ");
		scanf("%d", &rats);	// крысы
		/*обычный день*/
		twone_skills(point, rats);
		/*Акция крысы на прокачаку*/
		twone_skills_promo(point, rats);
		break;
	case 4: 
		printf("\n\n*Какую таблицу скрещивания показать(7, 8, 9)*: ");
		scanf("%d", &lvl);
		/// Выбор таблицы для скрещивания		
		switch(lvl)
		{
			case 7: 
			silica_7();		// Силище, скрещивание
			freeday_7();	// Свобоный день
			break;
		case 8:
			silica_8();		// Силище, скрещивание
				freeday_8();	// Свобоный день
			break;
		case 9:
			silica_9();		// Силище, скрещивание
			freeday_9();	// Свобоный день
			break;
		default: 
			puts("\n\t<Введенный уровень отсутствует в прогрмме>\n");
			}
	default:
		printf("\n\t<Выход>\n");
	}
}
