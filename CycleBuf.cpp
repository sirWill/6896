
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


