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
		cout << "幅を入力：";
		cin >> boxes[i].width;
		cout << "高さを入力：";
		cin >> boxes[i].height;
		cout << "奥行を入力：";
		cin >> boxes[i].depth;

		getVolumeSurface(&boxes[i]);
		indexProof = isSendable(&boxes[i]);

		if (indexProof)
		{
			cout << boxes[i].packSize << "サイズで送れます。" << endl;
		}
		else
		{
			cout << "送ることはできません。" << endl;
		}
	}
	return 0;
}