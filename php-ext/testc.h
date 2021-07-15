//
// Created by bobyzhang on 2021/1/6.
//

#ifndef TESTC_TESTC_H
#define TESTC_TESTC_H

#if defined(__GNUC__) && __GNUC__ >= 4
# define ZEND_API __attribute__ ((visibility("default")))
# define ZEND_DLEXPORT __attribute__ ((visibility("default")))
#else
# define ZEND_API
# define ZEND_DLEXPORT
#endif

#endif //TESTC_TESTC_H
