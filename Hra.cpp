#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocate(LC_ALL, "Russian" "Czech")
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
			cout << "Макс жизней- 5 / Макс мана- 20 / Возможности- Скрытое убийство"
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

	else (lang == 3) {
	}

	if (lang == 1) {
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
	}
	else if (lang == 2) {
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
		cout << "Пол вашего персонажа: " << gender << endl;
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

	}


	// Здесь будет код игры / Here will be the game code / Zde bude kód hry

	if (lang == 1) {
		if (class_choice == 1) {
			if (class_choice_version == 1) {
				int varik = 0;

				cout << "Тень прошлого" << endl;
				cout << "1324 год, Франция. Королевство разрывают междоусобицы," << endl;
				cout << "а инквизиция безжалостно преследует инакомыслящих. В тени великих соборов и замков плетутся заговоры, и лишь Орден Скрытых стоит на страже истинной свободы." << endl;
				cout << "Ты - " << name << ", последний из рода рыцарей-тамплиеров, преданных своими же. В детстве ты видел, как твоего отца казнили по ложному обвинению," << endl;
				cout << "а мать сожгли на костре за «ересь». Спасенный таинственным стариком — наставником ассасинов — ты вырос в их убежище, постигая науку теней: скрытные убийства, паркур, яды и искусство маскировки." << endl;
				cout << "Теперь, спустя годы, ты — невидимый клинок в сердце тирании. Твой меч — не грубая сила, а точный удар из темноты. Твоя броня — чужие лица. " << endl;
				cout << "Но когда ты узнаешь, что убийца твоего отца — великий магистр тамплиеров, а сам Орден Скрытых погряз в предательствах, тебе предстоит выбрать: месть или долг?" << endl;

				cout << "" << endl;

				cout << "В данный момент ты находишься в деревне. Можешь сдесь походить и осмотрется или иди сразу к наставнику. У него для тебя есть задание" << endl;
				cout << "Выберите куда хотите пойти" << endl;
				cout << "1. Пивнуха" << endl;
				cout << "2. Чумной доктор" << endl;
				cout << "3. Казино" << endl;
				cout << "4. К наставнику" << endl;

				cin >> varik;

				if (varik == 1) {
					cout << "Ты пришёл в пивнуху. Здесь ты можешь выпить и пообщаться с местными жителями." << endl;
					cout << "Ты выпил 2 кружки пива и пообщался с местными жителями." << endl;
					cout << "Ты узнал, что в деревне завелся маньяк, который убивает местных жителей." << endl;
					cout << "Ты решил, что это может быть интересным заданием для тебя." << endl;
					cout << "За убийство маньяка ты получишь 100 золотых монет" << endl;
					cout << "Возмёшься за это?" << endl;
					cout << "1. Да" << endl;
					cout << "2. Нет" << endl;
					int varik2;
					cin >> varik2;
					if (varik2 == 1) {
						cout << "Ты взял задание и пошёл искать маньяка." << endl;
						cout << "Ты нашёл маньяка и убил его." << endl;
						cout << "Ты получил 100 золотых монет." << endl;
						money += 100;
						cout << "У тебя теперь " << money << " золотых монет." << endl;
					}
					else if (varik2 == 2) {
						cout << "Ты решил не брать задание и пошёл к наставнику." << endl;
					}
					else {
						cout << "Неверный выбор." << endl;
				
					}
				}
				else if (varik == 2) {
					cout << "Ты пришёл к чумному доктору. Он предлагает тебе купить у него зелья." << endl;
					cout << "Ты купил зелье здоровья за 50 золотых монет." << endl;
					money -= 50;
					cout << "У тебя теперь " << money << " золотых монет." << endl;
				}
				else if (varik == 3) {
					cout << "Ты пришёл в казино. Ты можешь поиграть в карты или в рулетку." << endl;
					cout << "Ты решил поиграть в карты." << endl;
					cout << "Ты выиграл 100 золотых монет." << endl;
					money += 100;
					cout << "У тебя теперь " << money << " золотых монет." << endl;
				}
				else if (varik == 4) {
					cout << "Ты пришёл к наставнику. Он говорит тебе, что у него есть задание для тебя." << endl;
					cout << "Ты согласился взять задание." << endl;
				}
				else {
					cout << "Неверный выбор." << endl;

			} cout << "После того как ты выслушал задание от наставника, ты узнал что тебе поручено убить одного из тамплиеров."
				cout << "Ты узнал что тамплиер находится в замке, который охраняется стражниками." << endl;
			cout << "Ты решил, что это может быть интересным заданием для тебя." << endl;
			cout << "Ты пошёл к замку." << endl;
			cout << "Ты пришёл к замку. Ты можешь войти в замок или обойти его." << endl;
			cout << "1. Войти в замок" << endl;
			cout << "2. Обойти замок" << endl;
			int varik3;
			cin >> varik3;

			if (varik3 == 1) {
				reputation -= 1;
				cout << "Ты вошёл в замок." << endl;
				cout << "Незаметно пробравшись сквозь охрану, ты подобрался к покоям тамплиера." << endl;
				cout << "зайдя в них ты увидел сидящего тамплиера за столом. Подобравшись к нему в плотную ты увидел на его поясе часы твоего отца." << endl;
				cout << "Это тебя ввело в ступор. Нахнынули воспоминания о твоём отце." << endl;
				cout << "Пока ты на отвлёкся, тамлиер почуствовал не ладное и обернулся. Ты одскочил от него и он достал свой меч." << endl;
				cout << "Он узнал тебя так как он знал твоего отца и тебя но говорить этого не стал" << endl;
				cout << "Ты вступил с ним в бой. В его глазах было видно как он этого не хотел делать. " << endl;
				// тут будет бой с тамплиером
				// Все бои будут прямолинейные и не сложные. игра задумана на сюжет и атмосферу а не на бои. идите нахуй.
				
				cout << "" << endl;
				cout << "Выбери первый удар" << endl;
				cout << "1. Удар скрытым клинком" << endl;
				cout << "2. Удар мечом" << endl;
				cout << "3. Удар кулаком" << endl;
				int varik4;
				cin >> varik4;
				if (varik4 == 1) {
					cout << "Ты ударил тамплиера скрытым клинком. Он был удивлён твоей ловкостью." << endl;
					cout << "Перед смертью он тебе всё рассказал. Как он знал твоего отца, как ему было жаль, бла бла бла." << endl;
					cout << "Не поверив его словам ты хотел все разузнать об этом у своего наставника" << endl;
					cout << "Ты убил тамплиера. Задание выполнено." << endl;

					
				}
				else if (varik4 == 2) {
					cout << "Ты ударил тамплиера мечом. Он был удивлён твоей силой и твоей способностью быстро реагировать." << endl;
					cout << "Резким быстрым движение меча ты отрубил ему голову." << endl;
					cout << "Ты убил тамплиера. Задание выполнено." << endl;
				}
				else if (varik4 == 3) {
					cout << "Ты ударил тамплиера кулаком. Он был удивлён твоей силой." << endl;
					cout << "Но тамплиер оказался не промах и ударом меча ранил вас в руку." << endl;
					health -= 1;
					cout << "После удара, ты выхватил у него его же саблю и прямым ударом в сердце ты его убил." << endl;
					cout << "Ты убил тамплиера. Задание выполнено" << endl;
				}
				else {
					cout << "Неверный выбор." << endl;
				}



			}
			else if (varik3 == 2) {
				reputation += 1;
				cout << "Ты обошёл замок. Залез на  высокую точку ты заметил тамлиера" << endl;
				cout << "Применив прыжок веры и скрытый клинок, быстрыми и чётким ударом убил тамплиера" << endl;
				cout << "Ты убил тамплиера. Задание выполнено" << endl;
			}
			else {
				cout << "Неверный выбор." << endl;
			}


			if (varik3 == 1) {
				cout << "Ты вернулся к наставнику." << endl;
				cout << "Ты рассказал ему о том, что произошло." << endl;
				cout << "Наставник был разочарован что ты расстерялся в самый отвецтвенный момент." << endl;
				cout << "Но он рассказал тебе, всю информацию про твоего отца и как он был связан с тамплиерами." << endl;
				cout << "Узнав всю правду ты был ошеламлён что твой отец был тамплиером!!! " << endl;
				cout << "Но наставник видел в тебе талант и сказал что знает еще тамплиеров которые были связаны с твоим отцом" << endl;
				cout << "Ты решил что будешь мстить тамплиерам за своего отца." << endl;	
				cout << "Наставник дал тебе задание выследить и убить второго тамплиера."
				cout << "Выслушав всё ты принялся выполнять задание."
			}
			else if (varik3 == 2) {
				cout << "Ты вернулся к наставнику. Он был рад тебя видеть." << endl;
				cout << "Ты рассказал ему о том, что произошло." << endl;
				cout << "Наставник был удивлён твоей силой и ловкостью." << endl;
				cout << "Он сказал тебе, что ты стал настоящим ассасином." << endl;
				cout << "Ты получил 1000 золотых монет." << endl;
				money += 1000;
				cout << "У тебя теперь " << money << " золотых монет." << endl;
				cout << "Наставник сказал тебе, что у него есть для тебя новое задание." << endl;
				cout << "Ты согласился взять задание." << endl;

			}
			else {
				cout << "Неверный выбор." << endl;
			}

			} // конец первого боя

			if (varik3 == 1) {
				cout << "Весь путь тебе мешали мысли об твоём отце. У тебя были только вопросы и никаких ответов." << endl;
				cout << "Наставник сказал что второй тамплиер будет у себя во дворце." << endl;
				cout << "Ты пришёл к дворцу. Ты можешь войти в дворец или обойти его." << endl;
				cout << "1. Войти в дворец" << endl;
				cout << "2. Обойти дворец" << endl;
				int varik5;
				cin >> varik5;
				if (varik5 == 1) {
					cout << "Ты вошёл в дворец." << endl;
					cout << "Ты пробрался к покоям тамплиера." << endl;
					cout << "Ты увидел тамплиера за столом. Он был удивлён твоему появлению." << endl;
					cout << "Ты начал расспрашивать у него за отца" << endl;
					cout << "Но тамплиер не хотел с тобой разговаривать." << endl;
					cout << "Ты вступил с ним в бой." << endl;
					cout << "Ты ударил тамплиера скрытым клинком. Он был удивлён твоей ловкостью." << endl;
					cout << "Перед смертью он тебе всё рассказал. Он сказал что твой отец был из старейшин Тамплиеров." << endl;
					cout << "Вопросов становилось все больше и больше а ответов меньше." << endl;
					cout << "Ты убил тамплиера. Задание выполнено." << endl;
					cout << "Ты вернулся к наставнику." << endl;
					cout << "Ты рассказал ему о том, что произошло." << endl;
					cout << "Наставник подтвердил слова тамлиера и сказал что у твоего отца было две правые руки"
					cout << "Это были братья близняшки, которые после смерти отца заняли престол старейшин."
					cout << " "

					// тут будет бой с тамплиером
					// Все бои будут прямолинейные и не сложные. игра задумана на сюжет и атмосферу а не на бои. Идите нахуй.

				}
				else if (varik5 == 2) {
					cout << "Ты обошёл дворец." << endl;
					cout << "Ты увидел тамплиера стоящим возле сада." << endl;
					cout << "Незаметным прыжком веры ты устранил Тамплиера." << endl;
					cout << "Ты убил тамплиера. Задание выполнено." << endl;
					cout << "Ты вернулся к наставнику." << endl;
					cout << "Ты рассказал ему о том, что произошло." << endl;
					cout << "Наставник был удивлён твоей ловкостью." << endl;
					cout << "Он сказал тебе, что ты становишься только сильнее, дух в тебе сильнее." << endl;
					cout << "Ты получил 1000 золотых монет." << endl;
					money += 1000;
					cout << "У тебя теперь " << money << " золотых монет." << endl;
					cout << "Наставник сказал тебе, что у него есть для тебя новое задание." << endl;
					cout << "Ты согласился взять задание." << endl;

					// тут будет бой с тамплиером
					// Все бои будут прямолинейные и не сложные. игра задумана на сюжет и атмосферу а не на бои. Идите нахуй.

				}
				else {
					cout << "Неверный выбор." << endl;
				}
				
			}





		} 	
		else if (class_choice == 1) {
			if (class_choice_version == 2) {
				while (stage <= 7 && health > 0) {
        cout << "\n=== Этап " << stage << " ===\n";
        switch(stage) {
            case 1:
                cout << "Вы входите в Зловещий Лес. Мрак окружает вас.\n";
                cout << "1. Сражаться с теневым волком\n2. Попробовать обойти\n";
                cin >> choice;
                if (choice == 1) {
                    cout << "Вы победили, но были ранены.\n";
                    health -= 3;
                    reputation += 1;
                } else {
                    cout << "Вы избежали боя, но потеряли уважение.\n";
                    reputation -= 1;
                }
                break;

            case 2:
                cout << "Вы оказались в Затопленном Болотe.\n";
                cout << "1. Исследовать руины\n2. Игнорировать и идти дальше\n";
                cin >> choice;
                if (choice == 1) {
                    cout << "Вы нашли зелье и восстановили здоровье!\n";
                    health += 5;
                } else {
                    cout << "Вы прошли мимо, теряя шанс укрепиться.\n";
                }
                break;

            case 3:
                cout << "Вы достигли Проклятого Кладбища.\n";
                cout << "1. Сразиться с мертвецами\n2. Притвориться одним из них\n";
                cin >> choice;
                if (choice == 1) {
                    cout << "Вы сражались храбро, но потеряли здоровье.\n";
                    health -= 5;
                    reputation += 2;
                } else {
                    cout << "Мертвецы не поверили вам и атаковали!\n";
                    health -= 7;
                }
                break;

            case 4:
                cout << "Вы находите храм света.\n";
                cout << "1. Помолиться\n2. Взломать и украсть артефакт\n";
                cin >> choice;
                if (choice == 1) {
                    cout << "Вы восстановили ману и повысили репутацию.\n";
                    mana += 5;
                    reputation += 2;
                } else {
                    cout << "Вы были прокляты!\n";
                    health -= 4;
                    reputation -= 3;
                }
                break;

            case 5:
                cout << "Вы в замке Призрачного Властелина.\n";
                cout << "1. Вступить в бой\n2. Попробовать переговоры\n";
                cin >> choice;
                if (choice == 1) {
                    cout << "Битва была ожесточённой, но вы победили.\n";
                    health -= 6;
                } else {
                    cout << "Властелин отвлёк вас и ранил исподтишка.\n";
                    health -= 8;
                }
                break;

            case 6:
                cout << "Вы встречаете таинственного странника.\n";
                cout << "1. Довериться ему\n2. Пройти мимо\n";
                cin >> choice;
                if (choice == 1) {
                    cout << "Он дал вам артефакт света. Здоровье +10!\n";
                    health += 10;
                } else {
                    cout << "Вы прошли мимо и упустили шанс.\n";
                }
                break;

            case 7:
                cout << "Финальная битва: Темный Верховный Магистр!\n";
                cout << "1. Сражаться\n2. Пожертвовать собой, чтобы уничтожить зло\n";
                cin >> choice;
                if (choice == 1) {
                    if (health > 10 && reputation >= 3) {
                        cout << "Вы победили Магистра и разрушили Чёрное Солнце!\n";
                        cout << "Светлая концовка. Герой Эларии.\n";
                    } else {
                        cout << "Вы сражались храбро, но погибли.\n";
                        cout << "Тёмная концовка. Мир поглощён тьмой.\n";
                    }
                } else {
                    cout << "Вы пожертвовали собой, уничтожив проклятие.\n";
                    cout << "Нейтральная концовка. Жертва ради мира.\n";
                }
                break;
        }

        if (health <= 0) {
            cout << "Вы пали в бою. Мир обречён...\n";
            break;
        }

        stage++;
    }

    cout << "\nСпасибо за игру, " << name << "!\n";
    return 0;
}


			}
		}
		else if (class_choice == 2) {
			if (class_choice_version == 3) {
		int health = 10;
    int mana = 10;
    int reputation = 0;
    int money = 0;
    int stage = 1;
    int choice;

    cout << "Ты — гуль, тип Ринкаку. После пробуждения Кагуне ты потерял всё: имя, дом, человечность." << endl;
    cout << "Теперь ты должен выжить в охваченных войной улицах Токио, где каждый день — бой за существование." << endl;
    cout << "Ты направляешься в кафе 'Антэйку', единственное место, где гулям помогают выжить..." << endl;

    #include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int stage = 1;
    int health = 20;
    int mana = 5;
    int reputation = 0;
    int humanity = 5;
    int choice;

    cout << "Введите имя вашего персонажа (Гуль): ";
    cin >> name;

    while (stage <= 15 && health > 0) {
        cout << "\n=== Этап " << stage << " ===\n";
        switch(stage) {
            case 1:
                cout << "Вы просыпаетесь в катакомбах, полных трупов стражи.\n";
                cout << "1. Пожрать трупы\n2. Воздержаться\n";
                cin >> choice;
                if (choice == 1) { health += 5; humanity -= 2; } 
                else { health -= 2; humanity += 1; }
                break;

            case 2:
                cout << "Вы подходите к разрушенной деревне.\n1. Напасть на выживших\n2. Предупредить об опасности\n";
                cin >> choice;
                if (choice == 1) { health += 4; reputation -= 2; } 
                else { reputation += 2; humanity += 1; }
                break;

            case 3:
                cout << "Вы сталкиваетесь с охотниками на чудовищ.\n1. Сразиться\n2. Спрятаться\n";
                cin >> choice;
                if (choice == 1) { health -= 4; reputation += 2; } 
                else { mana += 2; humanity += 1; }
                break;

            case 4:
                cout << "Заброшенная библиотека Инквизиции.\n1. Изучить магию\n2. Сжечь книги\n";
                cin >> choice;
                if (choice == 1) { mana += 5; humanity -= 1; } 
                else { reputation += 1; mana -= 2; }
                break;

            case 5:
                cout << "Вы находите логово других гулей.\n1. Присоединиться\n2. Уничтожить их\n";
                cin >> choice;
                if (choice == 1) { health += 3; humanity -= 2; } 
                else { reputation += 2; health -= 5; }
                break;

            case 6:
                cout << "Подземный рынок плоти.\n1. Устроить резню\n2. Освободить рабов\n";
                cin >> choice;
                if (choice == 1) { health += 6; reputation -= 3; } 
                else { humanity += 3; mana -= 3; }
                break;

            case 7:
                cout << "Мёртвое озеро.\n1. Выпить воду\n2. Обойти\n";
                cin >> choice;
                if (choice == 1) {
                    int effect = rand() % 2;
                    if (effect == 0) health += 5;
                    else health -= 5;
                }
                break;

            case 8:
                cout << "Руины замка Очищения.\n1. Призвать духа\n2. Игнорировать\n";
                cin >> choice;
                if (choice == 1) { mana -= 3; } // может помочь позже
                break;

            case 9:
                cout << "Лабиринт Вопля.\n1. Следовать за голосами\n2. Закрыть разум\n";
                cin >> choice;
                if (choice == 1) { health -= 3; mana += 2; } 
                else { mana -= 2; }
                break;

            case 10:
                cout << "Храм Душегубцев.\n1. Принести жертву\n2. Восстать\n";
                cin >> choice;
                if (choice == 1) { humanity -= 2; mana += 4; } 
                else { health -= 4; reputation += 2; }
                break;

            case 11:
                cout << "Погоня за ведьмой.\n1. Сделка\n2. Убить\n";
                cin >> choice;
                if (choice == 1) { health += 8; humanity -= 3; } 
                else { health -= 5; reputation += 3; }
                break;

            case 12:
                cout << "Расколотый мост.\n1. Спасти паломников\n2. Столкнуть их\n";
                cin >> choice;
                if (choice == 1) { reputation += 3; health -= 3; } 
                else { health += 3; reputation -= 2; }
                break;

            case 13:
                cout << "Вы встречаете свою тень.\n1. Поговорить\n2. Уничтожить\n";
                cin >> choice;
                if (choice == 1) { humanity += 2; } 
                else { mana += 3; humanity -= 2; }
                break;

            case 14:
                cout << "Арена Кровавого Клана.\n1. Сразиться\n2. Отказаться\n";
                cin >> choice;
                if (choice == 1) { health -= 6; reputation += 4; } 
                else { reputation -= 3; humanity += 2; }
                break;

            case 15:
                cout << "Финал: Сердце Чёрной Луны.\n1. Поглотить\n2. Разрушить\n3. Передать человеку\n";
                cin >> choice;
                if (choice == 1) {
                    cout << "Вы стали Королём Гулей. Мир дрожит от страха.\nТёмная концовка.\n";
                } else if (choice == 2) {
                    cout << "Вы погибли, разрушив Сердце.\nСветлая концовка.\n";
                } else {
                    cout << "Вы дали шанс человечеству.\nНейтральная концовка.\n";
                }
                break;
        }

        if (health <= 0) {
            cout << "Вы погибли. Элария утратила последнюю надежду.\n";
            break;
        }

        stage++;
    }

    cout << "\nСпасибо за игру, " << name << "!\n";
    return 0;
}


			}
		}
		else if (class_choice == 2) {
			if (class_choice_version == 4) {
				int health = 10;
    int mana = 10;
    int reputation = 0;
    int money = 0;
    int stage = 1;
    int choice;

    cout << "Ты — гуль, тип Ринкаку. После пробуждения Кагуне ты потерял всё: имя, дом, человечность." << endl;
    cout << "Теперь ты должен выжить в охваченных войной улицах Токио, где каждый день — бой за существование." << endl;
    cout << "Ты направляешься в кафе 'Антэйку', единственное место, где гулям помогают выжить..." << endl;

    while (stage <= 17 && health > 0) {
        cout << "\n=== Этап " << stage << " ===\n";

        switch(stage) {
            case 1: case 6: case 11: case 16: // V
                cout << "Ты заходишь в 'Антэйку'. Тоука помогает тебе восстановиться." << endl;
                health = 10;
                mana = 10;
                cout << "Здоровье и мана полностью восстановлены." << endl;
                break;

            case 2: case 3: case 7: // M
                cout << "Ты сталкиваешься с агентом CCG." << endl;
                cout << "1. Сразиться\n2. Попробовать сбежать" << endl;
                cin >> choice;
                if (choice == 1) {
                    cout << "Ты убиваешь агента, но получаешь ранение." << endl;
                    health -= 2;
                    reputation -= 1;
                } else if (choice == 2) {
                    cout << "Ты сбегаешь, но тебя ранят в спину." << endl;
                    health -= 3;
                    reputation -= 2;
                } else {
                    cout << "Неверный выбор. Ты теряешь концентрацию и получаешь ранение." << endl;
                    health -= 4;
                }
                break;

            case 4: case 8: case 9: case 12: case 13: // 2xM
                cout << "Ты попал в засаду двух агентов." << endl;
                cout << "1. Сразиться\n2. Использовать ману, чтобы активировать 'Режим Буйства'" << endl;
                cin >> choice;
                if (choice == 1) {
                    cout << "Ты убиваешь их, но тяжело ранен." << endl;
                    health -= 4;
                    reputation -= 2;
                } else if (choice == 2) {
                    if (mana >= 5) {
                        cout << "Ты активировал Режим Буйства, уничтожив их за секунды!" << endl;
                        mana -= 5;
                        reputation += 1;
                    } else {
                        cout << "Не хватает маны! Ты получаешь тяжёлую травму." << endl;
                        health -= 6;
                    }
                } else {
                    cout << "Ты замешкался, и один из врагов ранил тебя." << endl;
                    health -= 5;
                }
                break;

            case 5: case 10: // MB
                cout << "=== Мини-Босс: Следователь Амон ===" << endl;
                cout << "Тебе противостоит опытный следователь с куинке-клинком." << endl;
                cout << "1. Атаковать лоб в лоб\n2. Уклониться и нанести контратаку" << endl;
                cin >> choice;
                if (choice == 1) {
                    cout << "Ты был тяжело ранен, но победил." << endl;
                    health -= 5;
                    reputation += 2;
                } else if (choice == 2) {
                    cout << "Ты умело уворачиваешься и пронзаешь Амона." << endl;
                    health -= 2;
                    reputation += 3;
                } else {
                    cout << "Неверный выбор. Амон ранил тебя." << endl;
                    health -= 6;
                }
                break;

            case 14: // 3xM
                cout << "Ты оказался в окружении троих агентов CCG!" << endl;
                cout << "1. Атаковать всех по очереди\n2. Активировать особую форму Кагуне (10 маны)" << endl;
                cin >> choice;
                if (choice == 1) {
                    cout << "Сражение было кровавым, ты выжил, но едва держишься." << endl;
                    health -= 6;
                    reputation += 2;
                } else if (choice == 2) {
                    if (mana >= 10) {
                        cout << "Ты активировал особую форму и уничтожил всех в один миг!" << endl;
                        mana -= 10;
                        reputation += 4;
                    } else {
                        cout << "Не хватает маны! Ты получил тяжёлое ранение." << endl;
                        health -= 8;
                    }
                } else {
                    cout << "Неверный выбор. Ты потерял шанс на удар первым." << endl;
                    health -= 5;
                }
                break;

            case 17: // HB
                cout << "=== ГЛАВНЫЙ БОСС: Арима Кишо ===" << endl;
                cout << "Ты достиг финальной точки. Перед тобой — легендарный Арима." << endl;
                cout << "1. Сразиться в открытом бою\n2. Попробовать обмануть и нанести скрытный удар" << endl;
                cin >> choice;
                if (choice == 1) {
                    if (health >= 8 && reputation >= 5) {
                        cout << "Ты отразил удары Аримы, нашёл брешь и победил. Гули теперь свободны!" << endl;
                    } else {
                        cout << "Ты сражался достойно, но Арима был сильнее. Ты пал в бою..." << endl;
                        health = 0;
                    }
                } else if (choice == 2) {
                    cout << "Ты подкрался, но Арима предугадал атаку и нанёс смертельный удар." << endl;
                    health = 0;
                } else {
                    cout << "Ты не сделал выбор — и Арима тебя уничтожил." << endl;
                    health = 0;
                }
                break;

            default:
                cout << "Ошибка этапа. Неверный номер стадии." << endl;
                break;
        }

        if (health <= 0) {
            cout << "\nТы пал... Голод, боль и смерть настигли тебя." << endl;
            break;
        }

        stage++;
    }

    if (health > 0 && stage > 17) {
        cout << "\n=== ПОБЕДА ===" << endl;
        cout << "Ты прошёл весь путь и стал символом новой эры для гулей." << endl;
    }

    cout << "\nИтоговое здоровье: " << health << endl;
    cout << "Мана: " << mana << endl;
    cout << "Репутация: " << reputation << endl;
    cout << "Деньги: " << money << endl;
}
				

			}
		}
		else if (class_choice == 3) {
			if (class_choice_version == 5) {

			}
		}
		else if (class_choice == 3) {
			if (class_choice_version == 6) {

			}
		}
		else {
			cout << "Неверный выбор класса / Neplatná volba třídy / Invalid class choice" << endl;


		}

	}

}



	

		
