#!/bin/bash
#start at the base dir of the project, where the git and drupal dirs reside

#GIT PULL
pushd git/crm_drupal_modules
git pull
popd
pushd git/drupal_themes
git pull
popd


#work in DRUPAL

#CACHE CLEAR
pushd drupal
drush cc all

#enable modules (needs sudo for downloading dependencies)
drush -y en crm_modules_enabler
drush -y en intoto_modules_enabler
drush -y en intoto_ormil_modules_enabler

#GET NEW THINGS FROM FEATURES:

##blocks need disable/enable
#drush -y dis ormil_blocks
#drush -y en intoto_ormil_modules_enabler

drush fr ormil_activities
drush fr ormil_blocks
drush fr ormil_menus
drush fr ormil_react_on_contact_us_form
drush fr intoto_display_formats
drush fr intoto_staff_permissions
drush fr ormil_site_settings_entities