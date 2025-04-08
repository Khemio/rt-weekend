#include "rtweekend.h"

#include "camera.h"
#include "hittable_list.h"
#include "sphere.h"
#include <memory>

int main() { 
    hittable_list world;

    // auto material_ground = make_shared<lambertian>(color(0.8, 0.8, 0.0));
    // auto material_center = make_shared<lambertian>(color(0.1, 0.2, 0.5));
    // auto material_left = make_shared<dielectric>(1.50);
    // auto material_bubble = make_shared<dielectric>(1.00/1.50);
    // auto material_right = make_shared<metal>(color(0.8, 0.6, 0.2), 1.0);

    // world.add(std::make_shared<sphere>(point3(0.0,-100.5,-1.0), 100, material_ground));
    // world.add(std::make_shared<sphere>(point3(0.0,0.0,-1.2), 0.5, material_center));
    // world.add(std::make_shared<sphere>(point3(-1.0,0.0,-1.0), 0.5, material_left));
    // world.add(std::make_shared<sphere>(point3(-1.0,0.0,-1.0), 0.4, material_bubble));
    // world.add(std::make_shared<sphere>(point3(1.0,0.0,-1.0), 0.5, material_right));

    auto R = std::cos(pi/4);

    auto material_left = make_shared<lambertian>(color(0, 0, 1));
    auto material_right = make_shared<lambertian>(color(1, 0, 0));

    world.add(std::make_shared<sphere>(point3(-R,0,-1), R, material_left));
    world.add(std::make_shared<sphere>(point3(R,0,-1), R, material_right));

    camera cam;

    cam.aspect_ratio = 16.0 / 9.0;
    cam.image_width = 400;
    cam.samples_per_pixel = 100;
    cam.max_depth = 50;

    cam.vfov = 90;

    cam.render(world);
}