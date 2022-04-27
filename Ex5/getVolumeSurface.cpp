#include "getVolumeSurface.h"

void getVolumeSurface(BOX* box) 
{
	box->volume = box->width * box->height * box->depth;
	box->surface = 2 * (box->width * box->height + box->width * box->depth + box->height * box->depth);
	return;
}