#include<iostream>
using namespace std;
class Pen {
private:
	string Color;
public:
	string getColor();
	void setColor(string newColor)
	{
		if (newColor.length() != 6)
			Color = "000000"; // если ошибка, то чёрный цвет
		else Color = newColor;
	}

};
string Pen::getColor() { return Color; }


int main() {
	setlocale(LC_ALL, "ru");
	cout << "Test number 2: " << endl;
	Pen pen;
	pen.setColor("FFFFFF");
	cout << pen.getColor() << endl;

	return 0;
}
