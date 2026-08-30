#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
	private:
		Brain *brain;
	public:
	Cat(void);
	Cat(const Cat &copy);
	Cat &operator=(const Cat &copy);
	virtual ~Cat();
	virtual void makeSound(void) const;
	std::string *getBrain() const;
	void setIdea(int index, std::string idea);
	std::string getIdea(int index) const;
};

#endif