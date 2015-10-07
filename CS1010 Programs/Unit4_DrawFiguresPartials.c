// Unit4_DrawFiguresPartial.c
#include <stdio.h>

void draw_rocket_ship();
void draw_male_stick_figure();
void draw_female();
void draw_circle();
void draw_rectangle();
void draw_triangle();
void draw_legs();

int main(void) {
	char resp;

	while ( resp != 'Q' ){

		printf("(R)ocket,  \n"
				"(M)ale, or \n"
				"(F)emale?  \n");

		scanf("%c", &resp);
		fflush(stdin);
			switch (resp){
			case 'R': 
				draw_rocket_ship();
				break;
			case 'M': 
				draw_male_stick_figure();
				break;
			case 'F': 
				draw_female();
				break;
			default:
				printf("Please dont leave me senpai!\n");
		};
	};			
	return 0;
}

void draw_rocket_ship() {
	draw_triangle();
	draw_rectangle();
	draw_legs();
}

void draw_male_stick_figure() {
	draw_circle();
	draw_rectangle();
	draw_legs();
}

void draw_female(){
	draw_circle();
	draw_triangle();
	draw_legs();
}

void draw_circle() {
	printf("   **   \n");
	printf(" *    * \n");
	printf(" *    * \n");
	printf("   **   \n");
}

void draw_rectangle() {
	printf(" ****** \n");
	printf(" *    * \n");
	printf(" *    * \n");
	printf(" *    * \n");
	printf(" ****** \n");
}

void draw_triangle(){
	printf("   *    \n");
	printf("  * *   \n");
	printf(" *   *  \n");
	printf("******* \n");
}

void draw_legs(){
	printf("   *    \n");
	printf("  * *   \n");
	printf(" *   *  \n");
	printf("*     * \n");
}
