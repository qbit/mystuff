# $OpenBSD: Makefile,v 1.4 2013/06/15 14:28:05 ajacoutot Exp $

COMMENT =	mount remote s3 buckets with fuse

V =		2014.11.21
DISTNAME =	s3fs-fuse-${V}

CATEGORIES =	sysutils

HOMEPAGE =	https://github.com/s3fs-fuse/s3fs-fuse

MAINTAINER =	Aaron Bieber <abieber@openbsd.org.>

GH_ACCOUNT =	s3fs-fuse
GH_PROJECT =	s3fs-fuse
#GH_TAGNAME = 	${TAG}
GH_COMMIT =	082eb24c12de62a0bacfc240c99d36114a75ccc0

# GPLv2
PERMIT_PACKAGE_CDROM =	Yes

BUILD_DEPENDS =	${MODGNU_AUTOCONF_DEPENDS} \
		${MODGNU_AUTOMAKE_DEPENDS}

AUTOCONF_VERSION =	2.69
AUTOMAKE_VERSION =	1.11

CONFIGURE_STYLE =	gnu

post-patch:
	@cd ${WRKSRC} && env AUTOCONF_VERSION=${AUTOCONF_VERSION} \
	    AUTOMAKE_VERSION=${AUTOMAKE_VERSION} ./autogen.sh

.include <bsd.port.mk>
