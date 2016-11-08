
#define BUFLEN 8

/**
 * Cycle_Buffer
 * 
 * Реализация циклического буфера
 */
struct Cycle_Buffer
{
	int array[BUFLEN];
	int in;
	int out;
	bool empty;
	bool full;

	bool put(int);
	int get();
};

/**
 * put — добавление элемента в циклический буфер
 * При полном буфере генерирует ответ = false
 * При успешном добавлении возвращает = true
 * 
 * @param  _val значение добавляемого узла
 * @return      результат добавления в буфер
 */
bool Cycle_Buffer::put(int _val)
{
	/*
		ЕСЛИ буфер не полный
			ТО 
				добавляем элемент
				сдвигаем индекс in на 1 элемент
				ЕСЛИ in равен длине буфера
					ТО
						in = 0
				буфер не пустой
				ЕСЛИ in == out
					буфер полный
				Вернуть true
		ИНАЧЕ
			запись невозможна — вернуть false			
	 */
	if (full)
	{
		return false;
	}
	array[in++] = _val;
	if(in == BUFLEN)
		in = 0;
	empty = false;
	if(in == out){
		full = true;
	}
	return true;
}

/**
 * get — получение значения из циклического буфера
 * при пустом буфере возвращает 0
 * 
 * @return значение под индексом out
 */
int Cycle_Buffer::get()
{
	/*
		ЕСЛИ буфер не пустой
			ТО
				выводим элемент в консоль
				сохранить значение элемента
				сдвигаем out на 1 элемент
				ЕСЛИ out == длине буфера
					ТО
						out = 0
				буфер не полный
				ЕСЛИ out == in
					буфер пустой
				Вернуть значение элемента
		ИНАЧЕ
			буфер пустой — вернуть 0
	 */
	if (!empty)
	{
		int tmp;
		tmp = array[out];
		cout << tmp;
		out++;
		if(out == BUFLEN)
			out = 0;
		full = 0;
		if(out == in)
			empty = 1;
		return tmp;
	}
	else
	{
		return 0;
	}
}
