/*
 * Copyright (c) 2012, ASUSTek, Inc. All Rights Reserved.
 * Written by wade chen Wade1_Chen@asus.com
 */
#ifndef __BQ27520_PROC_FS_H__
#define __BQ27520_PROC_FS_H__


int nct7717u_register_proc_fs(void);

#if defined(CONFIG_ASUS_ENGINEER_MODE) && CONFIG_ASUS_ENGINEER_MODE
int nct7717u_register_proc_fs_test(void);
#endif

#endif //__BQ27520_PROC_FS_H__

