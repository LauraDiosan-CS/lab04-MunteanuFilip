#include "service.h"

void Service::insert_service(char* name, char* date, char* gen)
{
	Filme s(name, date, gen);
	repo.insert(s);
}
void Service::updateFilme(Filme s, char* name)
{
	repo.UpdateFilme(s, name);
}
void Service::deleteFilme(Filme s)
{
	repo.deleteFilme(s);
}
int Service::findFilme(Filme s)
{
	return repo.findFilme(s);
}
Filme* Service::get_All()
{
	return this->repo.get_All();
}
int Service::get_Size()
{
	return this->repo.get_Size();
}