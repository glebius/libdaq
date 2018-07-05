
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "daq_dlt.h"
#include "daq_instance_api_defaults.h"

int daq_default_set_filter(void *handle, const char *filter)
{
    return DAQ_ERROR_NOTSUP;
}

int daq_default_start(void *handle)
{
    return DAQ_ERROR_NOTSUP;
}

int daq_default_inject(void *handle, DAQ_Msg_h msg, const uint8_t *packet_data, uint32_t len, int reverse)
{
    return DAQ_ERROR_NOTSUP;
}

int daq_default_breakloop(void *handle)
{
    return DAQ_ERROR_NOTSUP;
}

int daq_default_stop(void *handle)
{
    return DAQ_ERROR_NOTSUP;
}

void daq_default_shutdown(void *handle)
{
}

int daq_default_get_stats(void *handle, DAQ_Stats_t *stats)
{
    return DAQ_ERROR_NOTSUP;
}

void daq_default_reset_stats(void *handle)
{
}

int daq_default_get_snaplen(void *handle)
{
    return -1;
}

uint32_t daq_default_get_capabilities(void *handle)
{
    return 0;
}

int daq_default_get_datalink_type(void *handle)
{
    return DLT_NULL;
}

int daq_default_get_device_index(void *handle, const char *device)
{
    return DAQ_ERROR_NOTSUP;
}

int daq_default_modify_flow(void *handle, DAQ_Msg_h msg, const DAQ_ModFlow_t *modify)
{
    return DAQ_ERROR_NOTSUP;
}

int daq_default_hup_prep(void *handle, void **new_config)
{
    return DAQ_ERROR_NOTSUP;
}

int daq_default_hup_apply(void *handle, void *new_config, void **old_config)
{
    return DAQ_ERROR_NOTSUP;
}

int daq_default_hup_post(void *handle, void *old_config)
{
    return DAQ_ERROR_NOTSUP;
}

int daq_default_dp_add_dc(void *handle, DAQ_Msg_h msg, DAQ_DP_key_t *dp_key,
        const uint8_t *packet_data, DAQ_Data_Channel_Params_t *params)
{
    return DAQ_ERROR_NOTSUP;
}

int daq_default_query_flow(void *handle, DAQ_Msg_h msg, DAQ_QueryFlow_t *query)
{
    return DAQ_ERROR_NOTSUP;
}

unsigned daq_default_msg_receive(void *handle, const unsigned max_recv, const DAQ_Msg_t *msgs[], DAQ_RecvStatus *rstat)
{
    return DAQ_ERROR_NOTSUP;
}

int daq_default_msg_finalize(void *handle, const DAQ_Msg_t *msg, DAQ_Verdict verdict)
{
    return DAQ_ERROR_NOTSUP;
}

int daq_default_get_msg_pool_info(void *handle, DAQ_MsgPoolInfo_t *info)
{
    return DAQ_ERROR_NOTSUP;
}
