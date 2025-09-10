# images
# add_subdirectory(images)

# GUI Guider fonts  
add_subdirectory(guider_fonts)

add_subdirectory(images)

# GUI Guider customer fonts
#add_subdirectory(guider_customer_fonts)

file(GLOB SRC_FILES "*.c")
target_sources(${PRJ_MAIN} PRIVATE ${SRC_FILES})

target_include_directories(${PRJ_MAIN} PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}
)
