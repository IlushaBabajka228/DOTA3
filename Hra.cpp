#include <iostream>
using namespace std;

int main() {

    cout << "Добро пожаловать в Babka Gate 52!" << " / " << "Welcome to Babka Gate 52!" << " / " << "Vítejte v Babka Gate 52!";
	cout << "Выберите язык / vyberte jazyk / select languegue" << endl;
	cout << "1. Русский" << endl;	
	cout << "2. Čeština" << endl;
	cout << "3. English" << endl;
	int lang;
	cin >> lang;
	if (lang == 1) {
		cout << "Вы выбрали русский язык." << endl;
	}
	else if (lang == 2) {
		cout << "Vybrali jste češtinu." << endl;
	}
	else if (lang == 3) {
		cout << "You have selected English." << endl;
	}
	else {
		cout << "Неверный выбор языка / Neplatná volba jazyka / Invalid language choice" << endl;
		return 1;
	}
	cout << "Nice" << endl; // Game started
	// Здесь будет код игры
	// Here will be the game code
	// Zde bude kód hry
	if (lang == 1) {
		cout << "Выберете класс за который будете играть" << endl;
		cout << "1. Человек" << endl;	
		cout << "2. Гуль" << endl;
		cout << "3. Маг" << endl;
		int class_choice;
		cin >> class_choice;
			if (class_choice == 1) {
				cout << "Выберите тип человека за которого хотите играть!" << endl;
				cout << "Будте внимательны, потому что каждый класс и тип будет влиять на сюжет!" << endl;
				cout << "1. Ассасин" << endl;
				cout <<"Макс жизней- 5 / Макс мана- 20 / Возможности- Скрытое убийство"
				cout << "2. Рыцарь" << endl;
				cout << "Макс жизней- 20 / Макс мана- 10 / Возможности- Чёрный мечник"
    
			} 
			else if (class_choice == 2) {
				cout << "Выберите тип гуля за которого хотите играть!" << endl;
				cout << "Будте внимательны, потому что каждый класс и тип будет влиять на сюжет!" << endl;
				cout << "3. Гуль- Ринкаку" << endl;
				cout << "Макс жизней- 20 / Макс мана- 15 / Возможности- Буйство гуля"
				cout << "4. Гуль- Укаку" << endl;
				cout << "Макс жизней- 15 / Макс мана- 20 / Возможности- Сова"
			}
			else if (class_choice == 3) {
				cout << "Выберите тип мага за которого хотите играть!" << endl;
				cout << "Будте внимательны, потому что каждый класс и тип будет влиять на сюжет!" << endl;
				cout << "5. Маг- Стихия Огня" << endl;
				cout << "Макс жизней- 10 / Макс мана- 20 / Возможности- Скрытое убийство"
					cout << "6. Маг- Стихия воды" << endl;
				cout << "Макс жизней- 20 / Макс мана- 10 / Возможности- Чёрный мечник"
			}
			else
			{
				cout << "Неверный выбор класса / Neplatná volba třídy / Invalid class choice" << endl;
			}
		int class_choice_version;
		cin >> class_choice_version;
			if (class_choice_version == 1) {
				cout << "Вы выбрали класс человека, тип ассасин." << endl;
			}
			else if (class_choice_version == 2) {
				cout << "Вы выбрали класс человека, тип рыцарь." << endl;
			}
			else if (class_choice_version == 3) {
				cout << "Вы выбрали класс гуля, тип Ринкаку." << endl;
			}
			else if (class_choice_version == 4) {
				cout << "Вы выбрали класс гуля, тип Укаку." << endl;
			}
			else if (class_choice_version == 5) {
				cout << "Вы выбрали класс мага, тип стихия огня." << endl;
			}
			else if (class_choice_version == 6) {
				cout << "Вы выбрали класс мага, тип стихия воды." << endl;
			}
			else
			{
				cout << "Неверный выбор класса / Neplatná volba třídy / Invalid class choice" << endl;
			}
			
	}
	else if (lang == 2) {
		cout << "Vybrali jste třídu, za kterou chcete hrát" << endl;
		cout << "1. Člověk" << endl;
		cout << "2. Ghoul" << endl;
		cout << "3. Kouzelník" << endl;
		int class_choice;
		cin >> class_choice;
		if (class_choice == 1) {
			cout << "Vyberte typ člověka, za kterého chcete hrát!" << endl;
			cout << "Buďte opatrní, protože každá třída a typ ovlivní příběh!" << endl;
			cout << "1. Assassin" << endl;
			cout << "Max životů- 5 / Max mana- 20 / Možnosti- Skryté zabití"
				cout << "2. Rytíř" << endl;
			cout << "Max životů- 20 / Max mana- 10 / Možnosti- Černý meč"

		}
		else if (class_choice == 2) {
			cout << "Vyberte typ ghoul, za kterého chcete hrát!" << endl;
			cout << "Buďte opatrní, protože každá třída a typ ovlivní příběh!" << endl;
			cout << "3. Ghoul- Rinkaku" << endl;
			cout << "Max životů- 20 / Max mana- 15 / Možnosti- Zuřivost ghoul"
				cout << "4. Ghoul- Ukaku" << endl;
			cout << "Max životů- 15 / Max mana- 20 / Možnosti- Sova"
		}
		else if (class_choice == 3) {
			cout << "Vyberte typ kouzelníka, za kterého chcete hrát!" << endl;
			cout << "Buďte opatrní, protože každá třída a typ ovlivní příběh!" << endl;
			cout << "5. Kouzelník- Ohnivý prvek" << endl;
			cout << "Max životů- 10 / Max mana- 20 / Možnosti- Skryté zabití"
			cout << "6. Kouzelník- Vodní prvek" << endl;

			int class_choice_version;
			cin >> class_choice_version;
			if (class_choice_version == 1) {
				cout << "Vybrali jste třídu člověka, typ assassin." << endl;
			}
			else if (class_choice_version == 2) {
				cout << "Vybrali jste třídu člověka, typ rytíř." << endl;
			}
			else if (class_choice_version == 3) {
				cout << "Vybrali jste třídu ghoul, typ Rinkaku." << endl;
			}
			else if (class_choice_version == 4) {
				cout << "Vybrali jste třídu ghoul, typ Ukaku." << endl;
			}
			else if (class_choice_version == 5) {
				cout << "Vybrali jste třídu kouzelníka, typ ohnivý prvek." << endl;
			}
			else if (class_choice_version == 6) {
				cout << "Vybrali jste třídu kouzelníka, typ vodní prvek." << endl;
			}
			else
			{
				cout << "Neplatná volba třídy / Neplatná volba třídy / Neplatná volba třídy" << endl;
			}
		}
		else
		{
			cout << "Neplatná volba třídy / Neplatná volba třídy / Neplatná volba třídy" << endl;
		}


		}	

	else if (lang == 3) {
	}

	cout << "Теперь зададим характеристики вашего персонажа!" << endl;
	cout << "А иммено Имя вашего персонажа" << endl;
	string name;
	cin >> name;
	cout << "Ваш персонаж будет называться " << name << endl;
	cout << "Теперь выберем пол вашего персонажа!" << endl;
	cout << "1. Мужской" << endl;
	cout << "2. Женский" << endl;
	int gender;
	cin >> gender;

	cout << "На чале игры вы будете иметь 10 очков здоровья и 10 маны" << endl;
	cout << "В дальнейшем вы сможете прокачать свои характеристики!"
	
	cout << "Все характеристики были выбраны! Желаем хорошего прохождения игры!"
		cout << "Ваше имя персонажа: " << name << endl;
	cout << "Ваш класс: " << class_choice << endl;
	cout << "Ваш тип: " << class_choice_version << endl;
	int health = 10;
	int mana = 10;
	cout << "Ваше здоровье: " << health << endl;
	cout << "Ваша мана: " << mana << endl;
	int money = 0;
	cout << "Ваши деньги: " << money << endl;
	int reputation = 0;
	cout << "Ваша репутация: " << reputation << endl;

	

		
