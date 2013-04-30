# $OpenBSD: Makefile,v 1.2 2012/07/10 10:29:39 ajacoutot Exp $

COMMENT =			search for Movie nzb-files via web interface
DISTNAME =			master
# alpha version
PKGNAME =			couchpotato-2.0.0
REVISION=			0
CATEGORIES =			news
HOMEPAGE =			http://couchpota.to/
MAINTAINER =			Aaron Bieber <abieber@openbsd.org>

# GPLv3
PERMIT_PACKAGE_CDROM =		Yes
PERMIT_PACKAGE_FTP =		Yes
PERMIT_DISTFILES_CDROM =	Yes
PERMIT_DISTFILES_FTP =		Yes

MASTER_SITES = 			https://github.com/RuudBurger/CouchPotatoServer/archive/

MODULES =			lang/python

BUILD_DEPENDS =			${_MODPY_BUILD_DEPENDS}
RUN_DEPENDS =			news/sabnzbd

NO_BUILD =			Yes
NO_REGRESS =			Yes
PKG_ARCH =			*

WRKSRC =			${WRKDIR}/CouchPotatoServer-master

pre-configure: 
	for file in ${WRKSRC}/*.py; do \
		perl -pi -e 's,/usr/bin/env python,${MODPY_BIN},g' \
			$$file; \
	done

do-install:
	${INSTALL_DATA_DIR} \
	    ${PREFIX}/lib/python${MODPY_VERSION}/site-packages/couchpotato
	cp -Rp ${WRKSRC}/* \
	    ${PREFIX}/lib/python${MODPY_VERSION}/site-packages/couchpotato
	${SUBST_CMD} -c ${FILESDIR}/couchpotato ${WRKSRC}/couchpotato/couchpotato
	${INSTALL_SCRIPT} ${WRKSRC}/couchpotato/couchpotato ${PREFIX}/bin/couchpotato
	chown -R ${BINOWN}:${BINGRP} \
	    ${PREFIX}/lib/python${MODPY_VERSION}/site-packages/couchpotato

post-install:
	${MODPY_BIN} ${MODPY_LIBDIR}/compileall.py \
	    ${PREFIX}/lib/python${MODPY_VERSION}/site-packages/couchpotato

.include <bsd.port.mk>
