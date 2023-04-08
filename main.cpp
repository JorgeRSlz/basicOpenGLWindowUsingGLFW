#include <iostream>
#include <GL/gl.h>
#include <GLFW/glfw3.h>

#include "basicInput.cpp"

int main() {

    glfwInit();

    GLFWwindow* GLwindow = glfwCreateWindow(1920, 1080, "Basic OpenGL Window using GLFW", NULL, NULL);

    glfwMakeContextCurrent(GLwindow);

    while(!glfwWindowShouldClose(GLwindow)){
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(GLwindow);
        glfwPollEvents();
    }

    glfwTerminate();
}