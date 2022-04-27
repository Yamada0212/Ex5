#include "getVolumeSurface.h"

bool isSendable(BOX* box)
{
	bool indexProof = false;
	const int sizeIndex = 8;

	double boxSize = box->width * box->height * box->depth;
	int Size[] = { 60,80,100,120,140,160,180,200 };

	for (int i = 0; i < sizeIndex; i++)
	{
		if (boxSize <= Size[i])
		{
			box->packSize = Size[i];
			indexProof = true;
			break;
		}
	}
	return indexProof;
}