#ifndef PROJECT_CONF_H_
#define PROJECT_CONF_H_

/*---------------------------------------------------------------------------*/
/* Enable the ROM bootloader */
// #define CCXXWARE_CONF_ROM_BOOTLOADER_ENABLE     1
#define ROM_BOOTLOADER_ENABLE                   1
/*---------------------------------------------------------------------------*/
/* Change to match your configuration */
#define IEEE802154_CONF_PANID                   0xABCD
#define IEEE802154_CONF_DEFAULT_CHANNEL         25
#define RF_BLE_CONF_ENABLED                     0

#define MAC_CONF_WITH_NULLMAC                   1
#define ROUTING_CONF_NULLROUTING                1
#define NETSTACK_CONF_WITH_NULLNET              1

#define NETSTACK_CONF_MAC nullmac_driver
/*---------------------------------------------------------------------------*/
#endif /* PROJECT_CONF_H_ */
/*---------------------------------------------------------------------------*/
