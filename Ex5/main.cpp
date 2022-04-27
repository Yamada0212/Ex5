#include <iostream>
#include"getVolumeSurface.h"

using namespace std;

int main()
{
	const int BoxCount = 3;
	bool indexProof;
	BOX boxes[BoxCount];
	for (int i = 0; i < BoxCount; i++)
	{
		cout << "������́F";
		cin >> boxes[i].width;
		cout << "��������́F";
		cin >> boxes[i].height;
		cout << "���s����́F";
		cin >> boxes[i].depth;

		getVolumeSurface(&boxes[i]);
		indexProof = isSendable(&boxes[i]);

		if (indexProof)
		{
			cout << boxes[i].packSize << "�T�C�Y�ő���܂��B" << endl;
		}
		else
		{
			cout << "���邱�Ƃ͂ł��܂���B" << endl;
		}
	}
	return 0;
}