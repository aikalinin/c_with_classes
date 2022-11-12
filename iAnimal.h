//
// Created by Антон Калинин on 11.11.2022.
//

#ifndef C_WITH_CLASSES_IANIMAL_H
#define C_WITH_CLASSES_IANIMAL_H

typedef struct animal {
    int aaa;

    void (*say)(struct animal *this);

    void (*desctructor)(struct animal *this);
} iAnimal;

#endif //C_WITH_CLASSES_IANIMAL_H
