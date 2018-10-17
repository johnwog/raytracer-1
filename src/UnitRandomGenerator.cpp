//
// Created by Joona on 16/10/2018.
//

#include "raytracer/common.h"
#include "raytracer/UnitRandomGenerator.h"



vec3 UnitRandomGenerator::random_in_unit_sphere() {
    vec3 p;
    do {
        p = 2.0 * vec3(get_number(), get_number(), get_number()) - vec3(1, 1, 1);
    } while (p.len_squared() >= 1.0);
    return p;
}

UnitRandomGenerator rng;