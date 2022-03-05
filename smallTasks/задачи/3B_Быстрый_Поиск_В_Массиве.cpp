#include <iostream>
#include <vector>
#include <string>

using namespace std;

template<typename T> struct heap
{
private:
	vector<T> v;

	void SiftUp(int id)
	{
		if (id == 0)
			return;
		int p = (id - 1) / 2; // родитель; делаем - 1, ибо 2 / 2 = 1, не 0, как надо.
		if (v[id] < v[p])
		{
			swap(v[id], v[p]); //
			SiftUp(p);
		}
	}

	void SiftDown(int id)
	{
		int left = id * 2 + 1;
		int right = id * 2 + 2;

		if (left + 1 == v.size())
			right = left;
		else if (left + 1 > v.size())
			return;

		int i_min = (v[left] < v[right]) ? left : right; // ? == if, : == else;
		if (v[i_min] < v[id])
		{
			swap(v[i_min], v[id]);
			SiftDown(i_min);

		}

	}

public:
	void add(T value)
	{
		v.push_back(value);
		SiftUp(v.size() - 1);
	}

	T get()
	{
		if (v.size() > 0)
		{
			T tmp = v[0];
			v[0] = v.back();
			v.pop_back();
			SiftDown(0);
			return tmp;
			//cout « tmp « endl;
		}

	}

	void clear()
	{
		v.clear();
	}

	bool empty()
	{
		return v.empty();
	}

	int size()
	{
		return v.size();
	}

	T top()
	{
		return v[0];
	}
};

int Find(vector<int>& v, int num)
{
	int start = 0;
	int end = v.size();
	int n = end;
	if (num > v[v.size() - 1])
		return -1;
	else if (num < v[0])
		return -2;
	while (n != 0)
	{
		n = (end - start) / 2;
		if (num < v[start + n])
			end = start + n;
		else if (num > v[start + n])
			start += n;
		else //if (num == v[start + n])
		{
			return start + n;
		}

	}
	return -(start + 3); //Если не находит то, что надо, но оно в середине массива (надо потом вычесть 1)
}

int PFind(vector < vector < int>>& v, int num)
{
	int start = 0;
	int end = v.size();
	int n = end;
	if (num > v[v.size() - 1][0])
		return -1;
	else if (num < v[0][0])
		return -2;
	while (n != 0)
	{
		n = (end - start) / 2;
		if (num < v[start + n][0])
			end = start + n;
		else if (num > v[start + n][0])
			start += n;
		else //if (num == v[start + n])
		{
			return start + n;
		}

	}
	return -(start + 3); //Если не находит то, что надо, но оно в середине массива (надо потом вычесть 1)
}

int main()
{
	int N, K, L, R, pi = 0;
	heap<int> h;
	cin >> N;
	vector<int> v(N);
	vector < vector < int>> p;
	// 0 — число
	// 1 — первое вступление
	// 2 — последнее вступление

	// Сортировка по возрастанию
	for (int i = 0; i < N; ++i)
	{
		int n;
		cin >> n;
		h.add(n);
	}
	for (int i = 0; i < N; ++i)
	{
		v[i] = h.get();
		if (p.size() == 0 || v[i] != v[i - 1])
		{
			if (i > 0)
				p[pi - 1].push_back(i - 1);
			vector<int> V;
			p.push_back(V);
			p[pi].push_back(v[i]);
			p[pi].push_back(i);
			++pi;
		}
	}
	p[pi - 1].push_back(N - 1);
	cin >> K;
	for (int i = 0; i < K; ++i)
	{
		cin >> L >> R;
		L = Find(v, L);
		R = Find(v, R);
		//cout « L « " " « R « endl;
		//Если левый конец не больше максимального числа массива, а правый не меньше наименьшего числа
		if (L != -1 && R != -2)
		{
			if (L == -2)
				L = 0;
			else if (L < 0)
				L = -L - 2;

			if (R == -1)
				R = v.size() - 1;
			else if (R < 0)
				R = -R - 3;

			L = p[PFind(p, v[L])][1];

			R = p[PFind(p, v[R])][2];
			++R;

			//cout « L « " " « R « endl;
			cout << R - L << endl;
		}
		else cout << 0 << endl;

	}

}
/*
TL на 11 тесте.
Сделать бинарный поиск по массиву p
*/