#include "Window.h"

void Window::Start()
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_DOUBLEBUFFER, GL_TRUE);
    glfwWindowHint(GLFW_DECORATED, true);
    glfwWindowHint(GLFW_RESIZABLE, false);

    _mWidth  = 1280;
    _mHeight = 720;

    _mpWindow = glfwCreateWindow(_mWidth, _mHeight, "Temporality ~ BC/DC Games", nullptr, nullptr);

    if (_mpWindow == nullptr)
    {
        std::cout << "Failed to create GLFW Window: " << std::endl;
        glfwTerminate();
    }

    glfwMakeContextCurrent(_mpWindow);

    //
	gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);

    int width, height;
    glfwGetFramebufferSize(_mpWindow, &width, &height);

    glViewport(0, 0, width, height);
}

void Window::Destroy() { glfwTerminate(); }
