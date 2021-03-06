#include "Application.h"

#define TINYOBJLOADER_IMPLEMENTATION
#include "tiny_obj_loader/tiny_obj_loader.h"

#define STB_IMAGE_IMPLEMENTATION
#include <stb/stb_image.h>

int main()
{
    Application app;

    try
    {
        app.Run();
    }
    catch (const std::runtime_error& e)
    {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
