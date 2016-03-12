#!/bin/bash

export TARGET_PRODUCT="stib"

function config_install ()
{
	##########################################################################
	# All MACHINEs section 
	##########################################################################
	
	printf "%s" "Installing /boot/boot.scr ... "
	cp ./boot/boot.scr ${ROOT_DIR}/boot/
	chmod 644 ${ROOT_DIR}/boot/boot.scr 
	printf "%s\n" "Ok"
	
	printf "%s" "Installing /etc/profile ... "
	cp ./etc/profile ${ROOT_DIR}/etc/ 
	chmod 644 ${ROOT_DIR}/etc/profile 
	printf "%s\n" "Ok"

	##########################################################################
	#MACHINE specific sections
	##########################################################################
	if [ $MACHINE == "dm365-htc" ] ; then
		echo "No any DM365-HTC specific items to install, skip it"
		#List machine specific installation here ...
	fi
	
	return 0
}

export -f config_install
