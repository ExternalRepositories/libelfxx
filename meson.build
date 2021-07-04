project(
  'libelf++', 'cpp',
  version : '1.0.0',
  license : 'MIT'
)

subdir('include')
subdir('src')

import('pkgconfig').generate(
  libraries : elfxx_lib,
  version : '1.0',
  name : 'libelfxx',
  filebase : 'elfxx',
  description : 'A Elf parser for c++'
)

executable(
  'libtest',
  'test.cpp',
  dependencies: [elfxx]
)