#include <iostream>
#include <cmath>

using namespace std;

// Константи для максимального розміру масивів
const int MAX_EVENTS = 100;

// Масиви для зберігання даних про заходи
string eventNames[MAX_EVENTS];
string eventDates[MAX_EVENTS];
string eventDescriptions[MAX_EVENTS];
int eventCount = 0;  // Лічильник кількості заходів

// Функція для додавання нового заходу
void addEvent() {
    if (eventCount >= MAX_EVENTS) {
        cout << "Неможливо додати більше заходів.\n";
        return;
    }

    cout << "Введіть назву заходу: ";
    cin.ignore();  // Очищення буфера перед введенням
    getline(cin, eventNames[eventCount]);

    cout << "Введіть дату заходу (ДД.ММ.РРРР): ";
    getline(cin, eventDates[eventCount]);

    cout << "Опис заходу: ";
    getline(cin, eventDescriptions[eventCount]);

    eventCount++;  // Збільшуємо кількість заходів
    cout << "Заходу успішно додано!\n";
}

// Функція для перегляду всіх заходів
void viewEvents() {
    if (eventCount == 0) {
        cout << "План заходів порожній.\n";
        return;
    }

    cout << "Поточний план заходів:\n";
    for (int i = 0; i < eventCount; ++i) {
        cout << "Заходу " << i + 1 << ": " << eventNames[i] 
             << " | Дата: " << eventDates[i] 
             << " | Опис: " << eventDescriptions[i] << "\n";
    }
}

// Функція для формування звіту
void generateReport() {
    if (eventCount == 0) {
        cout << "Немає заходів для формування звіту.\n";
        return;
    }

    cout << "Звіт за проведеними заходами:\n";
    for (int i = 0; i < eventCount; ++i) {
        cout << "Заходу: " << eventNames[i] << " | Дата: " << eventDates[i] << "\n";
    }
}

// Головна функція
int main() {
    int choice;

    do {
        // Головне меню
        cout << "\n--- Меню програми куратора ---\n";
        cout << "1. Додати заходу\n";
        cout << "2. Переглянути план заходів\n";
        cout << "3. Формувати звіт\n";
        cout << "4. Вийти\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        // Обробка вибору
        switch (choice) {
            case 1:
                addEvent();  // Виклик функції для додавання заходу
                break;
            case 2:
                viewEvents();  // Виклик функції для перегляду заходів
                break;
            case 3:
                generateReport();  // Виклик функції для формування звіту
                break;
            case 4:
                cout << "Завершення програми.\n";
                break;
            default:
                cout << "Неправильний вибір. Спробуйте ще раз.\n";
        }

    } while (choice != 4);  // Програма працює до вибору "вийти"

    return 0;
}
