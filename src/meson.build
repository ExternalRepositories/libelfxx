source_files=[]

subdir('printer')
elfxx_lib=shared_library(
  'elfxx',
  [
    'libelfxx.cpp',
    'binary_reader.cpp'
  ],
  source_files,
  include_directories: inc,
  install : true
)
elfxx = declare_dependency(
  link_with : elfxx_lib,
  include_directories : inc
)

