api = 2
core = 7.x

projects[multiform][version] = 1.0
projects[multiform][type] = module
projects[multiform][subdir] = contrib

projects[media_gallery][version] =  1.x-dev
projects[media_gallery][subdir] = contrib
projects[media_gallery][patch][] = http://drupal.org/files/media_gallery-1391332-15.patch

; Panopoly - Contrib - Media TODO: find a better way to stay current with panoplolys version

;projects[panelizer][version] = 3.x-dev
projects[panelizer][subdir] = contrib
projects[panelizer][type] = module
projects[panelizer][download][type] = git
projects[panelizer][download][revision] = 186f4bc
;projects[panelizer][download][branch] = 7.x-3.x
projects[panelizer][patch][1675136] = http://drupal.org/files/taxonomy-term-fix-1675136-3.patch


projects[media][version] = 2.x-dev
projects[media][type] = module
projects[media][subdir] = contrib

projects[plupload][version] = 1.0
projects[plupload][subdir] = contrib

libraries[plupload][download][type] = get
libraries[plupload][download][url] = https://github.com/downloads/moxiecode/plupload/plupload_1_5_4.zip