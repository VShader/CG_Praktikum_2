project("Aufgabe4_cube_Vertex")
set(CMAKE_BUILD_TYPE Debug)

#find_package(GLUT REQUIRED)
find_package(Qt4 COMPONENTS QtCore QtGui QtOpenGL REQUIRED)
find_package(OpenGL REQUIRED)

include(${QT_USE_FILE})
add_definitions(${QT_DEFINITIONS})


MACRO(HEADER_DIRECTORIES return_list)
    FILE(GLOB_RECURSE new_list *.h)
    SET(dir_list "")
    FOREACH(file_path ${new_list})
        GET_FILENAME_COMPONENT(dir_path ${file_path} PATH)
        SET(dir_list ${dir_list} ${dir_path})
    ENDFOREACH()
    LIST(REMOVE_DUPLICATES dir_list)
    SET(${return_list} ${dir_list})
ENDMACRO()


file(GLOB_RECURSE proSOURCES *.cpp)
file(GLOB_RECURSE proHEADERS *.h)
file(GLOB_RECURSE proUIS *.ui)

QT4_WRAP_UI(UISrcs ${proUIS})
QT4_WRAP_CPP(MOCSrcs ${proHEADERS})
HEADER_DIRECTORIES(list_DIR)
include_directories(${list_DIR} ${CMAKE_CURRENT_BINARY_DIR})
#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/${proDIR} ${CMAKE_CURRENT_BINARY_DIR} )
add_executable(${PROJECT_NAME} ${proSOURCES}  ${proHEADERS} ${proUIS} ${UISrcs} ${MOCSrcs})
target_link_libraries(${PROJECT_NAME} ${QT_LIBRARIES} ${OPENGL_LIBRARIES})