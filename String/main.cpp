#include <iostream>;
#include <string> //предназначена для работы со строками с++

std::string repeat_str(std::string str, int repeast) {
	std::string result;
	for (int i = 0; i < repeast; i++)
		result += str;
	return result;
}

int main() {
	system("chcp 1251>null"); // что убрать текст 'chcp 1251', добовляем >null, появляется в папке новый файл
	int n;

	//Строки языка С
	char cstr1[4]{'H', 'i', '!' , '\0'};//нуль-терминатор, заканчивает строку.
	for (int i = 0; i < 3; i++)
		std::cout << cstr1[i];
	std::cout << std::endl;

	char cstr2[] = "Hello World!";// по умолчанию всегда добовляется \0 при ""

	std::cout << cstr1 << std::endl;
	std::cout << cstr2 << std::endl;

	// Строки языка с++
	std::string mystr = "Hello world!"; //создание строки
	std::cout << mystr << std::endl;
	std::string concat1 = "Oranges";
	std::string concat2 = "Apples";
	std::cout << concat1 + " and " + concat2 << std::endl;

	//Ввод строки в консоль
	std::cout << "Введи имя -> ";
	std::string name;
	std::getline(std::cin, name); // функция для вывода в консоль
	std::cout << "Привет, " << name << "!\n";

	std::cout << "Введите свой возраст ->";
	int age;
	std::cin >> age;
	std::cout << "Когда то и мне было " << age << std::endl;

	std::cin.ignore(); //очистка потока ввода, пишется только после std::cin и перед std::getline

	std::cout << "Введи свою профессию -> ";
	std::string position;
	std::getline(std::cin, position);
	std::cout << position << "? Круто!\n";

	//Методы строк
	std::string str = "Hello World!";

	// length и size одно и тоже, возвращает длинну строки.
	//std::cout << str.length() << std::endl;// 11
	//std::cout << str.size() << std::endl;// 11 

	//insert, втавляющий подстроку в строку.
	//str.insert(3, "###"); //(подстрока, что вставить)
	//std::cout << str << std::endl;// Hel##lo World!

	//replace, заменяющий часть строки на подстроку
	//str.replace(5, 3, "###");// (строка, подстрока, чем заменяем)
	//std::cout << str << std::endl;

	//find, возвращает позицию первого вхождения подстроки в строку
	//std::cout << str.find('l') << std::endl;//2
	//std::cout << str.find('l', 5) << std::endl;//9

	//rfind, возвращающий последнюю позицию вхождения подстроки в строку
	//std::cout << str.rfind('o') << std::endl; // 7 вводм символ который хотим найти
	//std::cout << str.rfind('o', 5) << std::endl; //4

	//substr, возвращающий подстроку извлеченную из строки
	//std::cout << str.substr(4) << std::endl;// вывод подстроки
	//std::cout << str.substr(3, 5) << std::endl; // подстрока, кол-во символов которые извлекаются


	//Функции для работы со строками
	int num = 234;
	std::string numstr = std::to_string(num); // выводит одну подстроку
	std::cout << numstr << std::endl;
	std::cout << numstr[1] << std::endl; // можно вывести одно число из числа

	std::string s = "1111";
	int nums = std::stoi(s); // перевод строки в число,
	std::cout << nums << std::endl;

	std::string casestr = "Hello!";
	for (int i = 0; i < casestr.length(); i++)
		casestr[i] = std::tolower(casestr[i]); // перебирает все символы, изменяет буквs, на маленькие.
	std::cout << casestr << std::endl;

	std::string casestr1 = "Hello!";
	for (int i = 0; i < casestr1.length(); i++)
		casestr1[i] = std::toupper(casestr1[i]); // перебирает все символы, изменяет буквы, на большие.
	std::cout << casestr1 << std::endl;


	// Задача 1. Повторение строки
	std::cout << "Задача 1.\n Введите строку -> ";
	std::string str1;
	std::getline(std::cin, str1);
	std::cout << "Введите кол-во повторений строки -> ";
	std::cin >> n;
	std::cout << repeat_str(str1, n) << std::endl;



	return 0;
}