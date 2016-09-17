DESCRIPTION = "tango control system"
LICENSE = "GPLv3 | LGPLv3"
LIC_FILES_CHKSUM = " \
		 file://COPYING;md5=d32239bcb673463ab874e80d47fae504 \
		 file://COPYING.LESSER;md5=6a6a8e020838b23406c81b19c1d46df6 \
"
DEPENDS += " zlib zeromq omniorb-native omniorb4 "
SRC_URI = "http://downloads.sourceforge.net/project/tango-cs/tango-9.1.0.tar.gz"
SRC_URI[md5sum] = "1139c50d0d30fdab16d3c80f6594f068"
SRC_URI[sha256sum] = "fd47bbf4fae6bc6409643c06b12a67441afa1acca63f6f17ebcfc45a42cd8245"

EXTRA_OECONF_append += "PATH=${PATH}:${STAGING_BINDIR_NATIVE}/arm-poky-linux-gnueabi/  \
--disable-dbserver \
'--with-zlib=${STAGING_DIR}' \
'OMNI_ROOT=${STAGING_DIR}/../work/armv7a-vfp-neon-poky-linux-gnueabi/omniorb4/4.2.0-r2/package/usr/' \
'ZMQ_ROOT=${STAGING_DIR}/../work/armv7a-vfp-neon-poky-linux-gnueabi/zeromq/4.0.5-r0/package/usr/' \
"
inherit autotools pkgconfig 

#TODO :
#requires zeromq omniorb omniorb4 zlib
#OMNI_ROOT and ZMQ_ROOT $PN
#libtool issue : remove  aclocal.m4

