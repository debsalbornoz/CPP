<h1 align="center">CPP Modules</h1>

<div align="center">
<img alt="Static Badge" src="https://img.shields.io/badge/Status-Finished-green">
<img alt="Static Badge" src="https://img.shields.io/badge/42-Project-blue">
<img alt="Static Badge" src="https://img.shields.io/badge/Language-C%2B%2B-lightgrey">
</div>

## About

**CPP Modules** is a series of 42 School projects that introduce the fundamentals of C++, moving progressively from basic object-oriented concepts to more advanced features like templates, polymorphism, and the Standard Template Library (STL).

Coming from a strictly C background, this series is designed to build a solid understanding of what C++ adds on top of C — starting with namespaces and classes, and gradually working up to inheritance, polymorphism, exception handling, casting, templates, and STL containers. Each module builds on the concepts of the previous one, reinforcing good C++ practices such as the **Orthodox Canonical Form** and proper resource management.

## Table of Contents

- [CPP00 — Namespaces, Classes, Member Functions](#cpp00--namespaces-classes-member-functions)
- [CPP01 — Memory Allocation, References, Pointers to Members](#cpp01--memory-allocation-references-pointers-to-members)
- [CPP02 — Ad-hoc Polymorphism, Operator Overloading](#cpp02--ad-hoc-polymorphism-operator-overloading)
- [CPP03 — Inheritance](#cpp03--inheritance)
- [CPP04 — Subtype Polymorphism, Abstract Classes](#cpp04--subtype-polymorphism-abstract-classes)
- [CPP05 — Repetition and Exceptions](#cpp05--repetition-and-exceptions)
- [CPP06 — C++ Casts](#cpp06--c-casts)
- [CPP07 — Templates](#cpp07--templates)
- [CPP08 — Templated Containers, Iterators, Algorithms](#cpp08--templated-containers-iterators-algorithms)
- [CPP09 — STL Containers](#cpp09--stl-containers)
- [How to Use](#how-to-use)

---

## CPP00 — Namespaces, Classes, Member Functions

Introduces the basic building blocks of C++: namespaces, classes, member functions, and standard I/O streams (`std::cout`, `std::cin`).

- **ex00** — `Megaphone`: a simple program that converts input strings to uppercase, introducing basic string manipulation and I/O.
- **ex01** — `PhoneBook`: a phone book application storing up to 8 contacts, using a `Contact` class and a fixed-size array, with basic input validation.
- **ex02** — `Account`: an implementation of a bank account class that logs every operation (deposits, withdrawals, account creation) with timestamps, introducing static members and static member functions.

## CPP01 — Memory Allocation, References, Pointers to Members

Covers the difference between stack and heap allocation, references vs. pointers, and pointers to member functions.

- **ex00** — `Zombie`: comparing heap (`new`) vs. stack allocation for creating objects.
- **ex01** — `ZombieHorde`: allocating an array of objects on the heap.
- **ex02** — Exploring pointers and references to the same variable, demonstrating that they point to the same memory address.
- **ex03** — `Weapon`/`HumanA`: introduces references as class members.
- **ex04** — `HumanB`: introduces pointers as class members, showing how a `NULL` pointer must be handled safely.
- **ex05** — Pointers to member functions, used to select and call a function dynamically at runtime.
- **ex06** — `Harl`: a class that uses a pointer-to-member-function array to dispatch different "complaint levels" without a chain of `if/else`.

## CPP02 — Ad-hoc Polymorphism, Operator Overloading

Introduces operator overloading and the **Orthodox Canonical Form** (default constructor, copy constructor, copy assignment operator, and destructor) through a fixed-point number class.

- **ex00** — `Fixed`: a fixed-point number class implementing the Orthodox Canonical Form.
- **ex01** — Extends `Fixed` with constructors from `int` and `float`, and `toInt()`/`toFloat()` conversion functions.
- **ex02** — Overloads comparison (`>`, `<`, `>=`, `<=`, `==`, `!=`), arithmetic (`+`, `-`, `*`, `/`), and increment/decrement (`++`, `--`) operators for `Fixed`.
- **ex03** — `BSP`: uses the `Fixed` class to determine whether a point lies inside a triangle, applying it to a small geometric algorithm.

## CPP03 — Inheritance

Explores class inheritance, constructors/destructors in a hierarchy, and function overriding.

- **ex00** — `ClapTrap`: a base class with hit points, energy points, and attack/take-damage/be-repaired behavior.
- **ex01** — `ScavTrap`: inherits from `ClapTrap`, overriding some of its behavior and adding a new ability.
- **ex02** — `FragTrap`: another subclass of `ClapTrap`, introducing **diamond inheritance** considerations for a future exercise.
- **ex03** — `Diamond of Trap`: `DiamondTrap` inherits from both `ScavTrap` and `FragTrap`, demonstrating multiple inheritance and how to resolve ambiguity between shared base-class members.

## CPP04 — Subtype Polymorphism, Abstract Classes

Introduces virtual functions, abstract classes, and interfaces to explore true (subtype) polymorphism.

- **ex00** — `Animal`/`Dog`/`Cat`: demonstrates polymorphism through a base `Animal` class with a virtual `makeSound()` function, showing how the correct override is called even through a base-class pointer.
- **ex01** — Adds deep copy semantics with a `Brain` class owned by each `Dog`/`Cat`, avoiding shallow-copy bugs.
- **ex02** — Turns `Animal` into an **abstract class** by adding a pure virtual function, preventing direct instantiation.
- **ex03** — `ICharacter`/`AMateria`: introduces interfaces (pure abstract classes) and an inventory system for equipping and using "materia" (spell-like items) with `WrongCat`/`WrongAnimal` illustrating the pitfalls of non-virtual functions.

## CPP05 — Repetition and Exceptions

Covers custom exception classes and exception handling (`try`/`catch`/`throw`).

- **ex00** — `Bureaucrat`: a class representing an employee with a grade, throwing custom exceptions (`GradeTooHighException`, `GradeTooLowException`) when the grade is out of bounds.
- **ex01** — `Form`: adds a form that a `Bureaucrat` can sign, with its own grade requirements and exceptions.
- **ex02** — Concrete form subclasses (`ShrubberyCreationForm`, `RobotomyRequestForm`, `PresidentialPardonForm`) that execute a specific action once signed and executed.
- **ex03** — `Intern`: a factory-like class capable of creating any of the concrete forms by name, without a long `if/else` chain.

## CPP06 — C++ Casts

Introduces C++'s explicit cast operators as safer, more expressive alternatives to C-style casts.

- **ex00** — `ScalarConverter`: converts a scalar literal (`char`, `int`, `float`, `double`) into all the others, handling edge cases like special float values (`nan`, `inf`) and out-of-range conversions.
- **ex01** — `Serializer`: converts a pointer to an integer type and back using `reinterpret_cast`, verifying the round trip preserves the original pointer.
- **ex02** — `Base`/`A`/`B`/`C`: uses `dynamic_cast` to identify a derived object's real type at runtime through a base class pointer/reference.

## CPP07 — Templates

Introduces function and class templates to write type-independent, reusable code.

- **ex00** — Template functions `swap`, `min`, and `max` that work with any comparable type.
- **ex01** — A generic `iter` function that applies another function to each element of an array, regardless of its type.
- **ex02** — `Array`: a templated container class wrapping a fixed-size array, with bounds checking and deep-copy semantics.

## CPP08 — Templated Containers, Iterators, Algorithms

Introduces the STL's core containers, iterators, and algorithms through custom implementations.

- **ex00** — `easyfind`: a templated function that finds a value in any STL container that supports iterators.
- **ex01** — `Span`: a class that stores a range of integers and can compute the shortest and longest span between any two numbers in the collection, using STL algorithms internally.
- **ex02** — `MutantStack`: a stack built on top of `std::stack` but made iterable, comparing its behavior and performance against `std::list`.

## CPP09 — STL Containers

The final module, focused on solving practical problems using STL containers, with strict performance and complexity constraints.

- **ex00** — `BitcoinExchange`: parses a CSV database of exchange rates and computes the value of Bitcoin at given dates from an input file, using `std::map` for efficient date lookups.
- **ex01** — `RPN`: a Reverse Polish Notation calculator using `std::stack` to evaluate mathematical expressions.
- **ex02** — `PmergeMe`: implements the **merge-insertion sort** (Ford-Johnson algorithm) to sort a sequence of positive integers, comparing performance between two different STL containers (e.g. `std::vector` and `std::deque` or `std::list`).

---

## How to Use

### Requirements

Each module requires a C++ compiler supporting **C++98**, and `make`.

### Instructions

1. Clone the repository:

    ```bash
    git clone https://github.com/debsalbornoz/CPP_Modules.git
    ```

2. Navigate into the module and exercise you want to run:

    ```bash
    cd CPP_Modules/CPP00/ex00
    ```

3. Build it:

    ```bash
    make
    ```

4. Run the resulting executable:

    ```bash
    ./program_name
    ```

---

<p align="center">Built as part of the 42 curriculum 🖥️</p>
