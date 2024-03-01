#pragma once
#include <iostream>

class Cookie
{
public:
	void virtual info() = 0;
};


class CookieChoc:public Cookie
{
public:
	void info() 
	{
		std::cout << " create chocolate cookie" << std::endl;
	}
};

class CookieCocos: public Cookie
{
public:
	void info()
	{
		std::cout << " create cocos cookie" << std::endl;
	}
};

class FactoryMetod
{
public:
	virtual Cookie* createCookie() = 0;

};

class ChocoladFactory: public FactoryMetod
{
public:
	Cookie* createCookie()
	{
		return new CookieChoc;
	}
};

class CocosFactory: public FactoryMetod
{
public:
	Cookie* createCookie()
	{
		return new  CookieCocos;
	}
};

