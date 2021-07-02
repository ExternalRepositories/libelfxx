project(
  'libelf++', 'cpp',
  version : '1.0.0',
  license : 'MIT'
)

subdir('src')

import('pkgconfig').generate(
  libraries : lib,
  version : '1.0',
  name : 'libelfxx',
  filebase : 'elfxx',
  description : 'A Elf parser for c++'
)