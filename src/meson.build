subdir('printer')
elfxx_lib=shared_library(
  'elfxx',
  [
    'libelfxx.cpp',
    'binary_reader.cpp'
  ],
  include_directories: inc,
  install : true,
  dependencies:[printer]
)
elfxx = declare_dependency(
  link_with : elfxx_lib,
  include_directories : inc
)

