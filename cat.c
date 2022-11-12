#include <printf.h>
#include <stdlib.h>
#include "cat.h"
#include "iAnimal.h"

static void cat_say(iAnimal *super) {
    CatImpl *this = (CatImpl *) super;

    printf("%s says: Meow\n", this->name);
}

static void cat_destructor(iAnimal *super) {
    CatImpl *this = (CatImpl *) super;

    printf("%s got destructed\n", this->name);

    free(this);
}

static void cat_stuff(iAnimal *super) {
    CatImpl *this = (CatImpl *) super;

    printf("Scratch\n");

    free(this);
}

iAnimal *construct_cat(char *dogName) {
//    iAnimal *super = malloc(sizeof(iAnimal));
    iAnimal super = {};
    CatImpl *child = malloc(sizeof(CatImpl));

    super.aaa = 123456789;

    child->super = super;
    child->name = dogName;
    child->super.say = cat_say;
    child->super.desctructor = cat_destructor;

    return (iAnimal *) child;
}