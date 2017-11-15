#ifndef LIBPASSION_INCLUDE_MODULES_PS_FILESYSTEM_H_
#define LIBPASSION_INCLUDE_MODULES_PS_FILESYSTEM_H_
#include <stdint.h>

#include "../utils/ps_status.h"

#include "filesystem/ps_filedecoder.h"
#include "filesystem/ps_filemode.h"

static const uint32_t PS_FILESYSTEM_FULLSIZE = 0x00;

struct ps_passion;

struct ps_filesystem {
        enum ps_status (*append)(struct ps_filesystem *this,
                const char *filename, const char *data, uint32_t size);

        enum ps_status (*get_size)(struct ps_filesystem *this,
                const char *filename, uint32_t *filesize);

        enum ps_status (*read)(struct ps_filesystem *this,
                const char *filename, uint32_t size,
                char *content, uint32_t *read
        );

        enum ps_status (*write)(struct ps_filesystem *this,
                const char *filename, const char *data, uint32_t size);
};

#endif