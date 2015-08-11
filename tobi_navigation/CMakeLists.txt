cmake_minimum_required(VERSION 2.4.6)
project("tobi_navigation")

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED)

catkin_package()

install(DIRECTORY ./
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}/
  PATTERN "*.txt" EXCLUDE
  PATTERN "*.xml" EXCLUDE
  PATTERN "*.docx" EXCLUDE
  PATTERN "*.sh" EXCLUDE
  )
