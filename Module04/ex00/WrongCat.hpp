#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
	WrongCat(void);
	WrongCat(const WrongCat &copy);
	WrongCat &operator=(const WrongCat &copy);
	virtual ~WrongCat();
	virtual void makeSound(void) const;
};

#endif