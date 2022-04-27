
struct BOX //箱の定義
{	
	double width;	//幅
	double height;	//高さ
	double depth;	//奥行
	double volume;	//体積
	double surface; //表面積
	double packSize; //宅急便のサイズ
};

//体積と表面積
void getVolumeSurface(BOX* box);
//宅急便判定
bool isSendable(BOX* box);