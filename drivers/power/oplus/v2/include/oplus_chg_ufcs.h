// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2023-2023 Oplus. All rights reserved.
 */

#ifndef __OPLUS_CHG_UFCS_H__
#define __OPLUS_CHG_UFCS_H__

#include <oplus_mms.h>

enum ufcs_topic_item {
	UFCS_ITEM_ONLINE,
	UFCS_ITEM_CHARGING,
	UFCS_ITEM_ADAPTER_ID,
	UFCS_ITEM_OPLUS_ADAPTER,
	UFCS_ITEM_BCC_MAX_CURR,
	UFCS_ITEM_BCC_MIN_CURR,
	UFCS_ITEM_BCC_EXIT_CURR,
	UFCS_ITEM_BCC_TEMP_RANGE,
};

enum ufcs_fastchg_type {
	UFCS_FASTCHG_TYPE_UNKOWN,
	UFCS_FASTCHG_TYPE_THIRD = 0x8211,
	UFCS_FASTCHG_TYPE_V1 = 0x4211,
	UFCS_FASTCHG_TYPE_V2,
	UFCS_FASTCHG_TYPE_V3,
	UFCS_FASTCHG_TYPE_OTHER,
};

enum ufcs_power_type {
	UFCS_POWER_TYPE_UNKOWN,
	UFCS_POWER_TYPE_THIRD = 18,
	UFCS_POWER_TYPE_V1 = 33,
	UFCS_POWER_TYPE_V2 = 65,
	UFCS_POWER_TYPE_OTHER = 240,
};

enum ufcs_curr_table_type {
	UFCS_CURR_BIDIRECT_TABLE = 0,
	UFCS_CURR_CP_TABLE = 1,
};

int oplus_ufcs_current_to_level(struct oplus_mms *topic, int curr);
enum fastchg_protocol_type oplus_ufcs_adapter_id_to_protocol_type(u32 id);
int oplus_ufcs_adapter_id_to_power(u32 id);

#endif /* __OPLUS_CHG_UFCS_H__ */
