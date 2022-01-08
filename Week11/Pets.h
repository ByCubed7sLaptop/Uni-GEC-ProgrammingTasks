#pragma

#include "Pet.h"

#include <iostream>

class Cat  : public Pet { virtual void talk() override { std::cout << "I am a cat, I do cat things. I'm feeling "   << getMoodString() << std::endl; } };
class Dog  : public Pet { virtual void talk() override { std::cout << "I am a dog, I do dog things. I'm feeling "   << getMoodString() << std::endl; } };
class Birb : public Pet { virtual void talk() override { std::cout << "I am a birb, I do birb things. I'm feeling " << getMoodString() << std::endl; } };