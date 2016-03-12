################################################################################
# Bootstrap image                                                              #
# Author: Andrei Mironenko <andrei.mironenko@paralleldynamic.com>              #
################################################################################


# Development build is based on the release one with some packages which are  
# taken from the cutting edge of the Git sources.
require ../rel/packages.inc

###############################################################################
# Common packages preferred versions                                  #
###############################################################################
PREFERRED_VERSION_system-configs = "git"
PREFERRED_VERSION_system-security = "git"
PREFERRED_VERSION_build-scripts = "git"   

###############################################################################
# Application package preferred versions                                      #
###############################################################################
PREFERRED_VERSION_firmloader = "git"

###############################################################################
# Machine specific preferred versions                                         #
###############################################################################

#DM814x-EVM
PREFERRED_VERSION_linux-omap3-evm = "git"
PREFERRED_VERSION_u-boot-omap3-evm = "git"

#DM814x-Z3
PREFERRED_VERSION_linux-omap3-z3 = "git"
PREFERRED_VERSION_u-boot-omap3-z3 = "git"

#DM365-EVM
PREFERRED_VERSION_linux_davinci = "git"
PREFERRED_VERSION_u-boot-davinci = "git"



