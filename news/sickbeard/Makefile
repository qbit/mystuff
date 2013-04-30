# $OpenBSD: Makefile,v 1.2 2012/07/10 10:29:39 ajacoutot Exp $

COMMENT =			search for TV serie nzb-files via web interface
DISTNAME =			master
# alpha version
PKGNAME =			sickbeard-0.0.3
REVISION= 		0
CATEGORIES =			news
HOMEPAGE =			http://sickbeard.com/
MAINTAINER =			Marcus Glocker <marcus@nazgul.ch>

# GPLv3
PERMIT_PACKAGE_CDROM =		Yes
PERMIT_PACKAGE_FTP =		Yes
PERMIT_DISTFILES_CDROM =	Yes
PERMIT_DISTFILES_FTP =		Yes

MASTER_SITES = 			https://github.com/midgetspy/Sick-Beard/archive/

MODULES =			lang/python

BUILD_DEPENDS =			${_MODPY_BUILD_DEPENDS}
RUN_DEPENDS =			news/sabnzbd

NO_BUILD =			Yes
NO_REGRESS =			Yes
PKG_ARCH =			*

WRKSRC =			${WRKDIR}/Sick-Beard-master

pre-configure: 
	for file in ${WRKSRC}/autoProcessTV/*.py; do \
		perl -pi -e 's,/usr/bin/env python,${MODPY_BIN},g' \
			$$file; \
	done

do-install:
	${INSTALL_DATA_DIR} \
	    ${PREFIX}/lib/python${MODPY_VERSION}/site-packages/sickbeard
	cp -Rp ${WRKSRC}/* \
	    ${PREFIX}/lib/python${MODPY_VERSION}/site-packages/sickbeard
	${SUBST_CMD} -c ${FILESDIR}/sickbeard ${WRKSRC}/sickbeard/sickbeard
	${INSTALL_SCRIPT} ${WRKSRC}/sickbeard/sickbeard ${PREFIX}/bin/sickbeard
	chown -R ${BINOWN}:${BINGRP} \
	    ${PREFIX}/lib/python${MODPY_VERSION}/site-packages/sickbeard

post-install:
	${MODPY_BIN} ${MODPY_LIBDIR}/compileall.py \
	    ${PREFIX}/lib/python${MODPY_VERSION}/site-packages/sickbeard

.include <bsd.port.mk>
