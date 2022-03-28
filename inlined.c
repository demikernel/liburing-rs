/*
 * Copyright (c) Microsoft Corporation.
 * Licensed under the MIT license.
 */

/*
 * This file contains wrappers for inline functions in <liburing.h>.
 */

#include <liburing.h>

struct io_uring_sqe *io_uring_get_sqe_(struct io_uring *ring)
{
    return _io_uring_get_sqe(ring);
}

void io_uring_prep_send_(struct io_uring_sqe *sqe, int sockfd, const void *buf, size_t len, int flags)
{
    io_uring_prep_send(sqe, sockfd, buf, len, flags);
}

void io_uring_prep_recv_(struct io_uring_sqe *sqe, int sockfd, void *buf, size_t len, int flags)
{
    io_uring_prep_recv(sqe, sockfd, buf, len, flags);
}

int io_uring_wait_cqe_(struct io_uring *ring, struct io_uring_cqe **cqe_ptr)
{
    return io_uring_wait_cqe(ring, cqe_ptr);
}

int io_uring_peek_cqe_(struct io_uring *ring, struct io_uring_cqe **cqe_ptr)
{
    return io_uring_peek_cqe(ring, cqe_ptr);
}

void io_uring_cqe_seen_(struct io_uring *ring, struct io_uring_cqe *cqe)
{
    io_uring_cqe_seen(ring, cqe);
}

void *io_uring_cqe_get_data_(const struct io_uring_cqe *cqe)
{
    return io_uring_cqe_get_data(cqe);
}

void io_uring_sqe_set_data_(struct io_uring_sqe *sqe, void *data)
{
    io_uring_sqe_set_data(sqe, data);
}