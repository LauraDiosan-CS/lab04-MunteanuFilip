#pragma once
#include "repository.h"
class Service
{
private:
	Repo repo;
public:
	void insert_service(char*, char*, char*);
	void updateFilme(Filme s, char*);
	void deleteFilme(Filme s);
	int findFilme(Filme s);
	int get_Size();
	Filme* get_All();
};