################################################################################
# Bootstrap image                                                              #
#                                                                              #
# Author: Andrei Mironenko <andrei.mironenko@paralleldynamic.com>              #
#                                                                              #
# Copyright(C) 2015 Parallel Dyanmic Ltd.                                      #
# This file is licensed under the terms of the GNU General Public License      #
# version 2. This program  is licensed "as is" without any warranty of any     #
# kind, whether express or implied.                                            #
################################################################################

TASK_BASE =      "\
    mtd-utils             \
    curl                  \
    arago-feed-configs    \
    initscript-telnetd    \
    devmem2               \
    ethtool               \
    tcpdump               \
    base-files            \
    base-passwd           \
    busybox               \
    initscripts           \
    modutils-initscripts  \
    netbase               \
    update-alternatives   \
    module-init-tools     \
  "
  
TASK_ALSA_UTILS = "\
    alsa-conf \
    alsa-conf-base \
    alsa-server \
    alsa-state \
    alsa-utils-alsamixer \
    alsa-utils-midi \
    alsa-utils-aplay \
    alsa-utils-amixer \
    alsa-utils-aconnect \
    alsa-utils-iecset \
    alsa-utils-speakertest \
    alsa-utils-aseqnet \
    alsa-utils-aseqdump \
    alsa-utils-alsaconf \
    alsa-utils-alsactl  \
    "

TASK_UTILS =     "\
   i2c-tools              \
   fbset                  \
   fbset-modes            \
   usbutils               \
   iproute2               \
   udev-utils             \
   nfs-utils              \
   nmap                   \
   rsync                  \
   wget                   \
   bash                   \
   tar                    \
   bzip2                  \
   netcat                 \
"

TASK_EDITORS =   "\
   vim                    \
   nano                   \
    "

TASK_JPEG_VIEWER = "\
  fbida                   \
  tiff                    \
  "
  
TASK_PYTHON3 = "\
	python3             \
 "
 
TASK_FSUTILS =   "\
    e2fsprogs             \
    e2fsprogs-e2fsck      \
    e2fsprogs-mke2fs      \
    dosfstools            \
    mtd-utils             \
  "
  
TASK_NCURSES =   "\
    ncurses-terminfo      \
    ncurses-tools         \
    "

TASK_APPS =      "\
  firmloader              \
  "      
  
export TASK_PRODUCT =       "\
      ${TASK_BASE}          \
      ${TASK_UTILS}         \
      ${TASK_ALSA_UTILS}    \ 
      ${TASK_EDITORS}       \
      ${TASK_JPEG_VIEWER}   \
      ${TASK_FSUTILS}       \
      ${TASK_NCURSES}       \
      ${TASK_PYTHON3}        \
      ${TASK_APPS}          \
    "    
    
###############################################################################
# Common packages preferred versions                                  #
###############################################################################
PREFERRED_VERSION_system-configs = "1.1.2"
PREFERRED_VERSION_system-security = "1.0.2"
PREFERRED_VERSION_build-scripts = "1.0.4"   

###############################################################################
# Application package preferred versions                                      #
###############################################################################
PREFERRED_VERSION_firmloader = "1.0.8"

###############################################################################
# Machine specific preferred versions                                         #
###############################################################################

#TI DM814X packages
PREFERRED_VERSION_ti-media-controller-loader = "3.00.00.07"
PREFERRED_VERSION_ti-c674x-aaclcdec = "01.41.00.00"
PREFERRED_VERSION_ti-codec-engine = "3.22.01.06"
PREFERRED_VERSION_ti-edma3lld = "02.11.05.02"
PREFERRED_VERSION_ti-framework-components = "3.22.01.07"
PREFERRED_VERSION_ti-ipc = "1.24.03.32"
PREFERRED_VERSION_ti-linuxutils = "3.22.00.02"
PREFERRED_VERSION_ti-osal = "1.22.01.09"
PREFERRED_VERSION_ti-slog = "04.00.00.02"
PREFERRED_VERSION_ti-sysbios = "6.33.05.46"
PREFERRED_VERSION_ti-uia = "1.01.01.14"
PREFERRED_VERSION_ti-xdctools = "3.23.03.53"
PREFERRED_VERSION_ti-xdais = "7.22.00.03"
PREFERRED_VERSION_ti-rpe = "1.00.00.12"
PREFERRED_VERSION_ti-dspbios = "6.33.05.46"

#Upgraded 
PREFERRED_VERSION_gst-openmax-ti = "07.00.00"
PREFERRED_VERSION_ti-omx = "05.02.00.48"
PREFERRED_VERSION_ti-syslink = "2.20.02.20"
PREFERRED_VERSION_ti-cgt6x = "7.3.4"

#System
#DM814x-STIB
PREFERRED_VERSION_linux-omap3-evm = "2.6.37-04.04.00.01"
PREFERRED_VERSION_u-boot-omap3-evm = "04.04.00.01"
PREFFERED_VERSION_omap3-sgx-modules = "1.6.16.4117"

#DM814x-Z3
PREFERRED_VERSION_linux-omap3-z3 = "2.6.37-04.04.00.01"
PREFERRED_VERSION_u-boot-omap3-z3 = "04.04.00.01"
PREFFERED_VERSION_omap3-sgx-modules = "1.6.16.4117"

#DM365-HTC
PREFERRED_VERSION_linux_davinci_htc = "2.6.32.17-03.01.01.39"
PREFERRED_VERSION_u-boot-davinci-htc = "03.21.00.03"
PREFERRED_VERSION_kernel = "2.6.32.17-03.01.01.39"
PREFERRED_VERSION_watchdog="1.2.3"
