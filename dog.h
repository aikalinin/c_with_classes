//
// Created by Антон Калинин on 11.11.2022.
//

#ifndef C_WITH_CLASSES_DOG_H
#define C_WITH_CLASSES_DOG_H

#include "iAnimal.h"

typedef struct Dog {
    iAnimal super;

    char *name;
} DogImpl;

iAnimal *construct_dog(char *dogName);

#endif //C_WITH_CLASSES_DOG_H
