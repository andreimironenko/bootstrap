COMPATIBLE_MACHINE = "(dm814x-stib|dm365-htc|dm814x-ht5|dm814x-z3)"

#SSH provider - dropbear light, optimised for embedded system SSH package
DISTRO_SSH_DAEMON = "dropbear"

###############################################################################
#       Hardware configurations STIB central computer                         #
###############################################################################

###################
#  DM814x-STIB    #
###################
IMAGE_INSTALL_append_dm814x-stib = "\
   task-dm814x-stib         \
   "
   
###################
#  DM814x-HT5    #
###################
IMAGE_INSTALL_append_dm814x-ht5 = "\
   task-dm814x-ht5         \
   "
   
###################
#  DM814x-Z3    #
###################
IMAGE_INSTALL_append_dm814x-z3 = "\
   task-dm814x-z3         \
   "
   
###################
#  DM365-HTC      #
###################  
IMAGE_INSTALL_append_dm365-htc = "\
   task-dm365-htc         \
   "


 
# u-boot and linux packages and package versions 
EXTRA_IMAGEDEPENDS_append_dm814x-stib = "\
   linux-omap3-evm                       \
   u-boot-omap3-evm                      \
  "
  
# u-boot and linux packages and package versions 
EXTRA_IMAGEDEPENDS_append_dm814x-ht5 =  "\
   linux-omap3-ht5                       \
   u-boot-omap3-ht5                      \
  "
  
# u-boot and linux packages and package versions 
EXTRA_IMAGEDEPENDS_append_dm814x-z3 =   "\
   linux-omap3-z3                        \
   u-boot-omap3-z3                       \
  "
    
EXTRA_IMAGEDEPENDS_append_dm365-htc = "\
   linux-davinci-htc                   \
   u-boot-davinci-htc                  \
   "