#include <printf.h>
#include <stdlib.h>
#include "dog.h"
#include "iAnimal.h"

void dog_say(iAnimal *super) {
    DogImpl *this = (DogImpl *) super;

    printf("%s says: Woof\n", this->name);
}

void dog_destructor(iAnimal *super) {
    DogImpl *this = (DogImpl *) super;

    printf("%s got destructed\n", this->name);

    free(this);
}

iAnimal *construct_dog(char *dogName) {
//    iAnimal *super = malloc(sizeof(iAnimal));
    iAnimal super = {};
    DogImpl *child = malloc(sizeof(DogImpl));

    super.aaa = 123456789;

    child->super = super;
    child->name = dogName;
    child->super.say = dog_say;
    child->super.desctructor = dog_destructor;

    return (iAnimal *) child;
}