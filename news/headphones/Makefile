# $OpenBSD: Makefile,v 1.2 2012/07/10 10:29:39 ajacoutot Exp $

COMMENT =				search for Music nzb-files via web interface
DISTNAME =			master
# alpha version
PKGNAME =				headphones-1.0.0
REVISION = 			0
CATEGORIES =		news
HOMEPAGE =			https://github.com/rembo10/headphones
MAINTAINER =		Aaron Bieber <abieber@openbsd.org>

# GPLv3
PERMIT_PACKAGE_CDROM =		Yes
PERMIT_PACKAGE_FTP =			Yes
PERMIT_DISTFILES_CDROM =	Yes
PERMIT_DISTFILES_FTP =		Yes

MASTER_SITES = 			https://github.com/rembo10/headphones/archive/

MODULES =						lang/python

BUILD_DEPENDS =			${_MODPY_BUILD_DEPENDS}
RUN_DEPENDS =				news/sabnzbd

NO_BUILD =				Yes
NO_REGRESS =			Yes
PKG_ARCH =				*

WRKSRC =					${WRKDIR}/headphones-master

pre-configure: 
	for file in ${WRKSRC}/*.py; do \
		perl -pi -e 's,/usr/bin/env python,${MODPY_BIN},g' \
			$$file; \
	done

do-install:
	${INSTALL_DATA_DIR} \
	    ${PREFIX}/lib/python${MODPY_VERSION}/site-packages/headphones
	cp -Rp ${WRKSRC}/* \
	    ${PREFIX}/lib/python${MODPY_VERSION}/site-packages/headphones
	${SUBST_CMD} -c ${FILESDIR}/headphones ${WRKSRC}/headphones/headphones
	${INSTALL_SCRIPT} ${WRKSRC}/headphones/headphones ${PREFIX}/bin/headphones
	chown -R ${BINOWN}:${BINGRP} \
	    ${PREFIX}/lib/python${MODPY_VERSION}/site-packages/headphones

post-install:
	${MODPY_BIN} ${MODPY_LIBDIR}/compileall.py \
	    ${PREFIX}/lib/python${MODPY_VERSION}/site-packages/headphones

.include <bsd.port.mk>
