//
// Created by Антон Калинин on 11.11.2022.
//

#ifndef C_WITH_CLASSES_CAT_H
#define C_WITH_CLASSES_CAT_H
#include "iAnimal.h"

typedef struct Cat {
    iAnimal super;

    char *name;

    void (*cat_stuff)(struct Cat *this);

} CatImpl;

iAnimal *construct_cat(char *catName);

#endif //C_WITH_CLASSES_CAT_H
