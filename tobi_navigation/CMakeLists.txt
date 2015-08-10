cmake_minimum_required(VERSION 2.4.6)

project("tobi_navigation")
catkin_package()

install(DIRECTORY ./
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}/
  PATTERN "*.txt" EXCLUDE
  PATTERN "*.xml" EXCLUDE
  PATTERN "*.docx" EXCLUDE
  PATTERN "*.sh" EXCLUDE
  )
