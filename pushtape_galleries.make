api = 2
core = 7.x

projects[entity_view_mode][subdir] = contrib
projects[file_entity][subdir] = contrib
projects[media][subdir] = contrib
projects[media][version] = 2.x-dev

projects[multiform][version] = 1.0
projects[multiform][type] = module
projects[multiform][subdir] = contrib

projects[media_gallery][version] =  1.x-dev
projects[media_gallery][subdir] = contrib
projects[media_gallery][patch][] = http://drupal.org/files/support_media_2.x-1244204-90.patch

projects[plupload][subdir] = contrib

libraries[plupload][download][type] = get
libraries[plupload][download][url] = https://github.com/downloads/moxiecode/plupload/plupload_1_5_4.zip