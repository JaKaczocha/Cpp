#pragma once
class Plorg
{
public:
	Plorg(const char* name = "Plorga");
	void setFullness(int fullness);
	void show();
	
private:
		char name[19];
		int fullness = 50;


};

