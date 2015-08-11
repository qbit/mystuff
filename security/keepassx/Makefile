# $OpenBSD: Makefile,v 1.6 2013/03/11 11:41:25 espie Exp $

COMMENT =	management tool for sensitive data

DISTNAME =	keepassx-2.0-beta1
CATEGORIES =	security

HOMEPAGE =	http://www.keepassx.org/

MAINTAINER =	Steven Mestdagh <steven@openbsd.org>

# GPLv2
PERMIT_PACKAGE_CDROM =	Yes

MASTER_SITES =	https://www.keepassx.org/dev/attachments/download/100/

MODULES =	x11/qt4 devel/cmake

WANTLIB += QtGui X11 Xtst c gcrypt m pthread z

RUN_DEPENDS =	devel/desktop-file-utils \
		misc/shared-mime-info

.include <bsd.port.mk>
