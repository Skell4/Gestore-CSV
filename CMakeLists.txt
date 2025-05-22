cmake_minimum_required(VERSION 3.19)
project(GestoreCSV LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_resources(RESOURCES resources.qrc)

qt_add_executable(GestoreCSV
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    ${RESOURCES}
)

target_link_libraries(GestoreCSV
    PRIVATE
        Qt::Core
        Qt::Widgets
)

if(WIN32)
    target_link_libraries(GestoreCSV PRIVATE dwmapi)
endif()

include(GNUInstallDirs)

install(TARGETS GestoreCSV
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET GestoreCSV
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
