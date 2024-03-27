#pragma once



class Golf
{
public:
	
	Golf(const char* name, int hc);

	void setgolf();

	void setHandicap(int hc);

	void showgolf();
private:
	static const int Len = 40;
	char fullname[Len];
	int handicap;
};

