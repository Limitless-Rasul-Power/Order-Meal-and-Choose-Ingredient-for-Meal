#include "All_Files.h"
#include <time.h>

using namespace std;

int main()
{
	CONSOLE_CURSOR_INFO cci;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
	cci.bVisible = false;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
	srand(unsigned short(time(NULL)));


	Tomatoe* tomatoe = new Tomatoe("Tomatoe", 22.2f, 33.2f, 45.4f, 200, "Vitamin A");
	Cheese* cheese = new Cheese("Parmizan", 22.2f, 33.2f, 45.4f, 200, "Yellow");
	Spice* spice = new Spice("Pepper", 22.2f, 33.2f, 45.4f, 200, "Spicy");
	Meat* meat = new Meat("Beef", 54.33f, 12.2f, 50.23f, 2000, "Netherland");
	Mushroom* mushroom = new Mushroom("Oyster", 2.2f, 43.1f, 30.1f, 300, "Good");
	
	RecipeItem* recipe_item_1 = new RecipeItem(tomatoe, 50);
	RecipeItem* recipe_item_2 = new RecipeItem(cheese, 44);
	RecipeItem* recipe_item_3 = new RecipeItem(spice, 10);
	RecipeItem* recipe_item_4 = new RecipeItem(meat, 700);
	RecipeItem* recipe_item_5 = new RecipeItem(mushroom, 70);

	const unsigned short ingredient_count = 5;
	RecipeItem** all = new RecipeItem * [ingredient_count]{ recipe_item_1, recipe_item_2, recipe_item_3, recipe_item_4, recipe_item_5 };
	

	/*Pizza* pizza = new Pizza(all, ingredient_count, "Margaritta", "Neapolitau");
	CookingDevice* cook_pizza = new Oven(pizza);
	cook_pizza->Taste();
	pizza->Show();
	delete cook_pizza;
	cout << "\n\n\n\n=====================\n\n\n\n";*/

	/*Kebab* kebab = new Kebab(all, ingredient_count, "Lule", true);
	CookingDevice* cook_kebab = new Brazier(kebab);
	cook_kebab->Taste();
	kebab->Show();
	delete cook_kebab;
	cout << "\n\n\n\n=====================\n\n\n\n";*/
	
	/*Dolma* dolma = new Dolma(all, ingredient_count, "Azerbaijani Best Special Dolma", "Grape");
	CookingDevice* cook_dolma = new Pot(dolma);
	cook_dolma->Taste();
	dolma->Show();
	delete cook_dolma;
	cout << "\n\n\n\n=====================\n\n\n\n";*/


	system("pause");
	return 0;
}
