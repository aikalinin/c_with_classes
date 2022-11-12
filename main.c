#include <stdio.h>
#include <stdlib.h>
#include "iAnimal.h"
#include "dog.h"
#include "cat.h"


int main() {
    iAnimal *dog = construct_dog("James");
    iAnimal *cat = construct_cat("Untitled");

    dog->say(dog);
    cat->say(cat);

    cat->desctructor(cat);
    dog->desctructor(dog);

    return 0;
}
