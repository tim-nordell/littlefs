/*
 * The little filesystem
 *
 * Copyright (c) 2017, Arm Limited. All rights reserved.
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef LFS_STATICCFG_H
#define LFS_STATICCFG_H

#if 1
struct lfs_config;

extern int my_read(const struct lfs_config *c, lfs_block_t block,
        lfs_off_t off, void *buffer, lfs_size_t size);
extern int my_prog(const struct lfs_config *c, lfs_block_t block,
            lfs_off_t off, const void *buffer, lfs_size_t size);
extern int my_erase(const struct lfs_config *c, lfs_block_t block);
extern int my_sync(const struct lfs_config *c);
extern int my_lock(const struct lfs_config *c);
extern int my_unlock(const struct lfs_config *c);

extern void *my_read_buffer;
extern void *my_prog_buffer;
extern void *my_lookahead_buffer;
extern void *my_context;

#define LFS_STATICCFG_CONTEXT           my_context
#define LFS_STATICCFG_FN_READ           my_read
#define LFS_STATICCFG_FN_PROG           my_prog
#define LFS_STATICCFG_FN_ERASE          my_erase
#define LFS_STATICCFG_FN_SYNC           my_sync
#define LFS_STATICCFG_FN_LOCK           my_lock
#define LFS_STATICCFG_FN_UNLOCK         my_unlock
#define LFS_STATICCFG_READ_SIZE         16
#define LFS_STATICCFG_PROG_SIZE         16
#define LFS_STATICCFG_BLOCK_SIZE        256
#define LFS_STATICCFG_BLOCK_COUNT       1024
#define LFS_STATICCFG_BLOCK_CYCLES      128
#define LFS_STATICCFG_CACHE_SIZE        64
#define LFS_STATICCFG_LOOKAHEAD_SIZE    64
#define LFS_STATICCFG_READ_BUFFER       my_read_buffer
#define LFS_STATICCFG_PROG_BUFFER       my_prog_buffer
#define LFS_STATICCFG_LOOKAHEAD_BUFFER  my_lookahead_buffer
#define LFS_STATICCFG_NAME_MAX          128
#define LFS_STATICCFG_FILE_MAX          128
#define LFS_STATICCFG_ATTR_MAX          128
#endif

#endif
