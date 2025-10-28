/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 06:43:28 by rlamlaik          #+#    #+#             */
/*   Updated: 2025/10/02 14:45:22 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


// in abstract class the the class that have at least one pure virtual function 
// class NAME{
//      vertual Fucnction() = 0; // any class that inherat from this class
//      he will be daari to have this function in his implemmentation 
//
// }



/*
    PLYMORPHISME
    there is tow type one in the run time and other in compile-time:
    runtime: function overriding
    ex:
        class Animal {
        public:
            virtual void sound() {
                cout << "Animal makes a sound\n";
            }
        };
        class Dog : public Animal {
        public:
            void sound() override {  // Correct override
                cout << "Dog barks\n";
            }
        };
    compile-time:
    operator overload: ovload + = opertation or other ... 
    function overload: is making a function with same  name and deffrent params
    


    

*/
// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
    


//     meta->makeSound();
//     i->makeSound();
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;

//     i->getType(); //will output the cat sound!
//     // j->makeSound();
//     // meta->makeSound();
//     delete i;
//     delete meta;
//     delete j;
//     return 0;
// }


// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     std::cout << "this is the type: " << j->getType() << " " << std::endl;
//     std::cout<< "this is the type: " << i->getType() << " " << std::endl;
//     std::cout<< "this is the type: " << meta->getType() << " " << std::endl;
//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     meta->makeSound();

//     delete meta;
//     delete j;
//     delete i;
    
//     return 0;
// }


int main()
{
    const int size = 6;

    
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Animal* animals[size];
    for (int i = 0; i < size / 2; i++) {
        animals[i] = new Dog();
    }

    for (int i = size / 2; i < size; i++) {
        animals[i] = new Cat();
    }

    for (int i = 0; i < size; i++) {
        delete animals[i];
    }
    
    delete j;
    delete i;
    return 0;
}