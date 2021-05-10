
#ifndef ANCILLARY_H__
#define ANCILLARY_H__

#define ANCIL_MAX_N_FDS 960

extern int
ancil_send_fds_with_buffer(int, const int *, unsigned, void *);

extern int
ancil_recv_fds_with_buffer(int, int *, unsigned, void *);

#define ANCIL_FD_BUFFER(n) \
    struct { \
	struct cmsghdr h; \
	int fd[n]; \
    }

extern int
ancil_send_fds(int, const int *, unsigned);

extern int
ancil_recv_fds(int, int *, unsigned);

extern int
ancil_send_fd(int, int);

extern int
ancil_recv_fd(int, int *);

#endif 
