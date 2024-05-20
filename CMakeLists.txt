cmake_minimum_required(VERSION 3.5)

project(my_ui VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS PrintSupport)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS PrintSupport)




set(PROJECT_SOURCES
        main.cpp
        widget.cpp
        widget.h
        widget.ui
        data_overview.cpp
        data_overview.h
        transaction.cpp
        transaction.h
        time_.cpp
        time_.h
        enumerations.h
        kind.h
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(my_ui
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        pages.h
        pages.cpp
        image.qrc
        CMakeLists.txt CMakeLists.txt.user data_overview.cpp data_overview.h enumerations.h image.qrc  kind.h  main.cpp pages.cpp pages.h README.md time_.cpp time_.h transaction.cpp transaction.h widget.cpp widget.h widget.ui yuanqi.md
        main_page.h main_page.cpp main_page.ui
        data_analysis_page.h data_analysis_page.cpp data_analysis_page.ui

        user_help_page.h user_help_page.cpp user_help_page.ui
        setting_page.h setting_page.cpp setting_page.ui
        manage_account_page.h manage_account_page.cpp manage_account_page.ui
        add_account_page.h add_account_page.cpp add_account_page.ui
        login_page.h login_page.cpp login_page.ui
        first_time_page.h first_time_page.cpp first_time_page.ui
        password.h
        account_item.h account_item.cpp account_item.ui
        io.h
        changepage.h changepage.cpp changepage.ui
        qcustomplot.cpp qcustomplot.h


    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET my_ui APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(my_ui SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(my_ui
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(my_ui PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(my_ui PRIVATE Qt${QT_VERSION_MAJOR}::PrintSupport)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.my_ui)
endif()
set_target_properties(my_ui PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS my_ui
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(my_ui)
endif()
