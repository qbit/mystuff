# $OpenBSD: Makefile,v 1.1.1.1 2018/07/30 14:40:06 juanfra Exp $

COMMENT =		CI/CD job runner for GitLab

V =			v11.4.0
DISTNAME =		gitlab-runner-${V}
PKGNAME =		${DISTNAME:S/v//}

CATEGORIES =		sysutils

HOMEPAGE =		https://gitlab.com/gitlab-org/gitlab-runner

# Apache 2
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB =		c pthread

MASTER_SITES =		https://gitlab.com/gitlab-org/gitlab-runner/-/archive/${V}/

MODULES =		lang/go

# These don't do anything :(
MODGO_LDFLAGS +=	-X ${ALL_TARGET}/common.NAME=gitlab-runner
MODGO_LDFLAGS +=	-X ${ALL_TARGET}/common.VERSION=${V:S/v//}
MODGO_LDFLAGS +=	-X ${ALL_TARGET}/common.REVISION=""
MODGO_LDFLAGS +=	-X ${ALL_TARGET}/common.BRANCH=""
MODGO_LDFLAGS +=	-X ${ALL_TARGET}/common.BUILT="" -s -w

ALL_TARGET =		gitlab.com//gitlab-org/gitlab-runner


#WRKDIST=${WRKSRC}
do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/go/bin/gitlab-runner ${PREFIX}/bin

.include <bsd.port.mk>
