#ifndef UNNOMINABLE_TYPES_HPP_
#define UNNOMINABLE_TYPES_HPP_
#include <glad/gl.h>

/// All numerical types in OpenGL.
enum class GLtype : GLenum {
    BYTE                         = GL_BYTE,
    UNSIGNED_BYTE                = GL_UNSIGNED_BYTE,
    SHORT                        = GL_SHORT,
    UNSIGNED_SHORT               = GL_UNSIGNED_SHORT,
    INT                          = GL_INT,
    UNSIGNED_INT                 = GL_UNSIGNED_INT,
    HALF_FLOAT                   = GL_HALF_FLOAT,
    FLOAT                        = GL_FLOAT,
    DOUBLE                       = GL_DOUBLE,
    FIXED                        = GL_FIXED,
    INT_2_10_10_10_REV           = GL_INT_2_10_10_10_REV,
    UNSIGNED_INT_2_10_10_10_REV  = GL_UNSIGNED_INT_2_10_10_10_REV,
    UNSIGNED_INT_10F_11F_11F_REV = GL_UNSIGNED_INT_10F_11F_11F_REV,
};

/// All integer types in OpenGL.
enum class GLtype_int : GLenum {
    BYTE           = GL_BYTE,
    UNSIGNED_BYTE  = GL_UNSIGNED_BYTE,
    SHORT          = GL_SHORT,
    UNSIGNED_SHORT = GL_UNSIGNED_SHORT,
    INT            = GL_INT,
    UNSIGNED_INT   = GL_UNSIGNED_INT,
};

#endif // UNNOMINABLE_TYPES_HPP_
