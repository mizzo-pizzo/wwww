#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	/*Array20.Дан массив размера N и целые числа K и L(1 ≤ K ≤ L ≤ N).Найти
	сумму элементов массива с номерами от K до L включительно.	int n, k, l;

	cout << "Введите значение n: ";

	cin >> n;

	cout << "Введите значение k: ";

	cin >> k;

	cout << "Введите значение l: ";

	cin >> l;

	int* arr = new int[n];

	cout << "Заполните массив: ";

	for (int i = 0; i < n; i++) {

		cin >> arr[i];

	}

	int sum = 0;

	for (int i = k; i <= l; i++) {

		sum += arr[i];

	}

	cout << "Сумма элементов массива с номерами от K до L включительно = " << sum << endl;*/
    //дан массив из 11 эелемнтов найти  средее арифметическое элементов массива
	int N, K, L;

	cout << "Vvedite N: ";
	cin >> N;
	cout << "Vvedite K: ";
	cin >> K;
	cout << "Vvedite L: ";
	cin >> L;

	int mas = new int[N];

	for (int i = 0; i < N; i++)
	{
		mas[i] = 1 + rand() % 10;
	}

	cout << "Ishodnii massiv: " << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "[" << i + 1 << "]-" << mas[i] << " ";
	}

	double sum = 0;
	int count = 0;

	for (int i = K - 1; i <= L - 1; i++)
	{
		sum = sum + mas[i];
		count++;
	}

	cout << "\n" << "Srednee elementov ot " << K << " do " << L << " = " << sum / count << endl;

	int M = K + N - L - 1;
	int array = new int[M];
	int j = 0;

	for (int i = 0; i < K - 1; i++)
	{
		array[i] = mas[i];
		j++;
	}

	for (int i = L; i < N; i++)
	{
		array[j] = mas[i];
		j++;
	}

	cout << "Ostavshiesja elementi dinamicheski razmeshennie v pamjati: " << endl;
	for (int i = 0; i < M; i++)
	{
		cout << "[" << i + 1 << "]-" << array[i] << " ";
	}
}