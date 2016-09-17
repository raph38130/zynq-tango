SUMMARY = "opencv demo"
LICENSE = "CLOSED"

DEPENDS = "opencv"
SRC_URI = "file://*"

S = "${WORKDIR}/{PN}-${PV}/../"

EXTRA_OEMAKE = " 'CC=${CC}' 'RANLIB=${RANLIB}' 'AR=${AR}' 'BUILDDIR=${S}' \
'OUTPUT_DIR=${S}' \
"

do_compile () {
        export EmbeddedSystem=1
	export TOOLBINDIR=${S}
	oe_runmake
}

do_install() {
	install -m 0755 -d ${D}${bindir}
	install -m 0777 ${S}/cvdemo ${D}${bindir}
}


