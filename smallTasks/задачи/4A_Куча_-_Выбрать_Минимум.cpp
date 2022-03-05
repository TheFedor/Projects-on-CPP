#include <vector>
#include <iostream>

template <typename T> struct heap {

private:
	std::vector<T> v;

	void SiftUp(int ind) {
		if (ind == 0) return;
		if (v[ind] < v[(ind - 1) / 2]) {
			T zam = v[ind];
			v[ind] = v[(ind - 1) / 2];
			v[(ind - 1) / 2] = zam;
			SiftUp((ind - 1) / 2);
		}
	}

	void SiftDown(int ind) {
		int left = (2 * ind) + 1;
		int right = (2 * ind) + 2;

		if (left + 1 > size(v)) return;
		if (left + 1 == size(v)) {
			right = left;
		}

		int min = v[left] < v[right] ? left : right;

		if (v[min] < v[ind]) {
			T zam = v[min];
			v[min] = v[ind];
			v[ind] = zam;
			SiftDown(min);
		}
	}
public:
	void ADD(T value) {
		v.push_back(value);
		SiftUp(v.size() - 1);
	}
	void EXTRACT() {
		if (v.size() == 0) {
			std::cout << "CANNOT";
			std::cout << "\n";
		}
		else {
			std::cout << v[0];
			std::cout << "\n";
			v[0] = v.back();
			v.pop_back();
			SiftDown(0);
		}
	}
	void CLEAR() {
		int d = v.size();
		for (int i = 0; i < d; i++)
		{
			v.pop_back();
		}
	}
	void see() {
		std::cout << v[0];
		std::cout << "\n";
	}
};

int main()
{
	heap <int> h;
	std::string sm = "";
	int vv = 0;
	while (std::cin >> sm) {
		if (sm == "ADD") {
			std::cin >> vv;
			h.ADD(vv);
		}
		if (sm == "EXTRACT") {
			h.EXTRACT();
		}
		if (sm == "CLEAR") {
			h.CLEAR();
		}
		if (sm == "see") {
			h.see();
		}
	}
}