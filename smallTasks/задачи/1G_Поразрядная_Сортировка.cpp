#include <iostream>
#include <vector>

int main()
{
	int n = 0;
	std::cin >> n;
	std::vector<int> v(n);
	int vv = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> vv;
		v[i] = vv;
	}
	int sch = 0;
	int sch1 = 0;
	for (int i = 0; i < n; i++)
	{
		vv = v[i];
		while (vv > 0) {
			vv /= 10;
			sch++;
		}
		if (sch > sch1) {
			sch1 = sch;
		}
		sch = 0;
	}

	std::vector<int> q0;
	std::vector<int> q1;
	std::vector<int> q2;
	std::vector<int> q3;
	std::vector<int> q4;
	std::vector<int> q5;
	std::vector<int> q6;
	std::vector<int> q7;
	std::vector<int> q8;
	std::vector<int> q9;
	sch = 1;
	int dlsch = 0;
	for (int i = 0; i < sch1; i++)
	{

		for (int j = 0; j < n; j++)
		{
			if (((v[j] / sch) % 10) == 0) {
				q0.push_back(v[j]);
			}
			if (((v[j] / sch) % 10) == 1) {
				q1.push_back(v[j]);
			}
			if (((v[j] / sch) % 10) == 2) {
				q2.push_back(v[j]);
			}
			if (((v[j] / sch) % 10) == 3) {
				q3.push_back(v[j]);
			}
			if (((v[j] / sch) % 10) == 4) {
				q4.push_back(v[j]);
			}
			if (((v[j] / sch) % 10) == 5) {
				q5.push_back(v[j]);
			}
			if (((v[j] / sch) % 10) == 6) {
				q6.push_back(v[j]);
			}
			if (((v[j] / sch) % 10) == 7) {
				q7.push_back(v[j]);
			}
			if (((v[j] / sch) % 10) == 8) {
				q8.push_back(v[j]);
			}
			if (((v[j] / sch) % 10) == 9) {
				q9.push_back(v[j]);
			}
		}
		sch *= 10;
		for (int j = 0; j < size(q0); j++)
		{
			v[dlsch++] = q0[j];
		}
		for (int j = 0; j < size(q1); j++)
		{
			v[dlsch++] = q1[j];
		}
		for (int j = 0; j < size(q2); j++)
		{
			v[dlsch++] = q2[j];
		}
		for (int j = 0; j < size(q3); j++)
		{
			v[dlsch++] = q3[j];
		}
		for (int j = 0; j < size(q4); j++)
		{
			v[dlsch++] = q4[j];
		}
		for (int j = 0; j < size(q5); j++)
		{
			v[dlsch++] = q5[j];
		}
		for (int j = 0; j < size(q6); j++)
		{
			v[dlsch++] = q6[j];
		}
		for (int j = 0; j < size(q7); j++)
		{
			v[dlsch++] = q7[j];
		}
		for (int j = 0; j < size(q8); j++)
		{
			v[dlsch++] = q8[j];
		}
		for (int j = 0; j < size(q9); j++)
		{
			v[dlsch++] = q9[j];
		}
		dlsch = size(q0);
		for (int j = 0; j < dlsch; j++)
		{
			q0.pop_back();
		}
		dlsch = size(q1);
		for (int j = 0; j < dlsch; j++)
		{
			q1.pop_back();
		}
		dlsch = size(q2);
		for (int j = 0; j < dlsch; j++)
		{
			q2.pop_back();
		}
		dlsch = size(q3);
		for (int j = 0; j < dlsch; j++)
		{
			q3.pop_back();
		}
		dlsch = size(q4);
		for (int j = 0; j < dlsch; j++)
		{
			q4.pop_back();
		}
		dlsch = size(q5);
		for (int j = 0; j < dlsch; j++)
		{
			q5.pop_back();
		}
		dlsch = size(q6);
		for (int j = 0; j < dlsch; j++)
		{
			q6.pop_back();
		}
		dlsch = size(q7);
		for (int j = 0; j < dlsch; j++)
		{
			q7.pop_back();
		}
		dlsch = size(q8);
		for (int j = 0; j < dlsch; j++)
		{
			q8.pop_back();
		}
		dlsch = size(q9);
		for (int j = 0; j < dlsch; j++)
		{
			q9.pop_back();
		}
		dlsch = 0;
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << v[i] << " ";
	}
}