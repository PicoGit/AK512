
#ifndef PWM_USER_H
#define	PWM_USER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include "pwm_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* PCLKCON */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PCLKCON_LOCK		( PWM_DRV_PCLKCON_LOCK_UNLOCK )
#define PWM_USER_PCLKCON_DIVSEL		( PWM_DRV_PCLKCON_DIVSEL_2X )
#define PWM_USER_PCLKCON_MCLKSEL	( PWM_DRV_PCLKCON_MCLKSEL_STD_SPEED )
#define PWM_USER_PCLKCON_HRERR		( 0U )
#define PWM_USER_PCLKCON_HRRDY		( 0U )

/*----------------------------------------------------------------------------*/
/* FSCLレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_FSCL	( 0U )
/*----------------------------------------------------------------------------*/
/* FSMINPERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_FSMINPER	( 0U )
/*----------------------------------------------------------------------------*/
/* MPHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_MPHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* MDCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_MDC	( 0U )
/*----------------------------------------------------------------------------*/
/* MPERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_MPER	( 0U )
/*----------------------------------------------------------------------------*/
/* LFSRレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_LFSR_LFSR		( 0U )
#define PWM_USER_LFSR_LFSREN	( 0U )

/*----------------------------------------------------------------------------*/
/* CMBTRIG */
/*----------------------------------------------------------------------------*/
#define PWM_USER_CMBTRIG_CTA1EN		( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_CMBTRIG_CTA2EN		( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_CMBTRIG_CTA3EN		( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_CMBTRIG_CTA4EN		( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_CMBTRIG_CTA5EN		( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_CMBTRIG_CTA6EN		( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_CMBTRIG_CTA7EN		( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_CMBTRIG_CTA8EN		( PWM_DRV_CMBTRIG_DISABLE )

#define PWM_USER_CMBTRIG_CTB1EN		( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_CMBTRIG_CTB2EN		( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_CMBTRIG_CTB3EN		( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_CMBTRIG_CTB4EN		( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_CMBTRIG_CTB5EN		( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_CMBTRIG_CTB6EN		( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_CMBTRIG_CTB7EN		( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_CMBTRIG_CTB8EN		( PWM_DRV_CMBTRIG_DISABLE )

/*----------------------------------------------------------------------------*/
/* LOGCONy */
/*----------------------------------------------------------------------------*/
#define PWM_USER_LOGCONA_PWMLFAD	( PWM_DRV_LOGCON_DISTINATION_DISABLE )
#define PWM_USER_LOGCONA_PWMLFA  	( PWM_DRV_LOGCON_FUNCTION_OR)
#define PWM_USER_LOGCONA_S2APOL  	( PWM_DRV_LOGCON_SOURCE_POL_NORMAL )
#define PWM_USER_LOGCONA_S1APOL  	( PWM_DRV_LOGCON_SOURCE_POL_NORMAL )
#define PWM_USER_LOGCONA_PWMS2A  	( PWM_DRV_LOGCON_SOURCE_PWM1H )
#define PWM_USER_LOGCONA_PWMS1A  	( PWM_DRV_LOGCON_SOURCE_PWM1H )

#define PWM_USER_LOGCONB_PWMLFBD	( PWM_DRV_LOGCON_DISTINATION_DISABLE )
#define PWM_USER_LOGCONB_PWMLFB  	( PWM_DRV_LOGCON_FUNCTION_OR)
#define PWM_USER_LOGCONB_S2BPOL  	( PWM_DRV_LOGCON_SOURCE_POL_NORMAL )
#define PWM_USER_LOGCONB_S1BPOL  	( PWM_DRV_LOGCON_SOURCE_POL_NORMAL )
#define PWM_USER_LOGCONB_PWMS2B  	( PWM_DRV_LOGCON_SOURCE_PWM1H )
#define PWM_USER_LOGCONB_PWMS1B  	( PWM_DRV_LOGCON_SOURCE_PWM1H )

#define PWM_USER_LOGCONC_PWMLFCD	( PWM_DRV_LOGCON_DISTINATION_DISABLE )
#define PWM_USER_LOGCONC_PWMLFC  	( PWM_DRV_LOGCON_FUNCTION_OR)
#define PWM_USER_LOGCONC_S2CPOL  	( PWM_DRV_LOGCON_SOURCE_POL_NORMAL )
#define PWM_USER_LOGCONC_S1CPOL  	( PWM_DRV_LOGCON_SOURCE_POL_NORMAL )
#define PWM_USER_LOGCONC_PWMS2C  	( PWM_DRV_LOGCON_SOURCE_PWM1H )
#define PWM_USER_LOGCONC_PWMS1C  	( PWM_DRV_LOGCON_SOURCE_PWM1H )

#define PWM_USER_LOGCOND_PWMLFDD	( PWM_DRV_LOGCON_DISTINATION_DISABLE )
#define PWM_USER_LOGCOND_PWMLFD  	( PWM_DRV_LOGCON_FUNCTION_OR)
#define PWM_USER_LOGCOND_S2DPOL  	( PWM_DRV_LOGCON_SOURCE_POL_NORMAL )
#define PWM_USER_LOGCOND_S1DPOL  	( PWM_DRV_LOGCON_SOURCE_POL_NORMAL )
#define PWM_USER_LOGCOND_PWMS2D  	( PWM_DRV_LOGCON_SOURCE_PWM1H )
#define PWM_USER_LOGCOND_PWMS1D  	( PWM_DRV_LOGCON_SOURCE_PWM1H )

#define PWM_USER_LOGCONE_PWMLFED	( PWM_DRV_LOGCON_DISTINATION_DISABLE )
#define PWM_USER_LOGCONE_PWMLFE  	( PWM_DRV_LOGCON_FUNCTION_OR)
#define PWM_USER_LOGCONE_S2EPOL  	( PWM_DRV_LOGCON_SOURCE_POL_NORMAL )
#define PWM_USER_LOGCONE_S1EPOL  	( PWM_DRV_LOGCON_SOURCE_POL_NORMAL )
#define PWM_USER_LOGCONE_PWMS2E  	( PWM_DRV_LOGCON_SOURCE_PWM1H )
#define PWM_USER_LOGCONE_PWMS1E  	( PWM_DRV_LOGCON_SOURCE_PWM1H )

#define PWM_USER_LOGCONF_PWMLFFD	( PWM_DRV_LOGCON_DISTINATION_DISABLE )
#define PWM_USER_LOGCONF_PWMLFF  	( PWM_DRV_LOGCON_FUNCTION_OR)
#define PWM_USER_LOGCONF_S2FPOL  	( PWM_DRV_LOGCON_SOURCE_POL_NORMAL )
#define PWM_USER_LOGCONF_S1FPOL  	( PWM_DRV_LOGCON_SOURCE_POL_NORMAL )
#define PWM_USER_LOGCONF_PWMS2F  	( PWM_DRV_LOGCON_SOURCE_PWM1H )
#define PWM_USER_LOGCONF_PWMS1F  	( PWM_DRV_LOGCON_SOURCE_PWM1H )

/*----------------------------------------------------------------------------*/
/* PWMEVTy */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PWMEVTA_EVTAPGS	( PWM_DRV_PWMEVT_EVTSEL_PWM1 )
#define PWM_USER_PWMEVTA_EVTASEL  	( PWM_DRV_PWMEVT_EVTSEL_PGTRGSEL)
#define PWM_USER_PWMEVTA_EVTASYNC  	( PWM_DRV_PWMEVT_EVTSYNC_OFF )
#define PWM_USER_PWMEVTA_EVTASTRD  	( PWM_DRV_PWMEVT_EVTSTRD_8CLOCK )
#define PWM_USER_PWMEVTA_EVTAPOL 	( PWM_DRV_PWMEVT_EVTPOL_ACTIVE_H )
#define PWM_USER_PWMEVTA_EVTAOEN  	( PWM_DRV_PWMEVT_EVTOEN_DISABLE )

#define PWM_USER_PWMEVTB_EVTBPGS	( PWM_DRV_PWMEVT_EVTSEL_PWM1 )
#define PWM_USER_PWMEVTB_EVTBSEL  	( PWM_DRV_PWMEVT_EVTSEL_PGTRGSEL)
#define PWM_USER_PWMEVTB_EVTBSYNC  	( PWM_DRV_PWMEVT_EVTSYNC_OFF )
#define PWM_USER_PWMEVTB_EVTBSTRD  	( PWM_DRV_PWMEVT_EVTSTRD_8CLOCK )
#define PWM_USER_PWMEVTB_EVTBPOL 	( PWM_DRV_PWMEVT_EVTPOL_ACTIVE_H )
#define PWM_USER_PWMEVTB_EVTBOEN  	( PWM_DRV_PWMEVT_EVTOEN_DISABLE )

#define PWM_USER_PWMEVTC_EVTCPGS	( PWM_DRV_PWMEVT_EVTSEL_PWM1 )
#define PWM_USER_PWMEVTC_EVTCSEL  	( PWM_DRV_PWMEVT_EVTSEL_PGTRGSEL)
#define PWM_USER_PWMEVTC_EVTCSYNC  	( PWM_DRV_PWMEVT_EVTSYNC_OFF )
#define PWM_USER_PWMEVTC_EVTCSTRD  	( PWM_DRV_PWMEVT_EVTSTRD_8CLOCK )
#define PWM_USER_PWMEVTC_EVTCPOL 	( PWM_DRV_PWMEVT_EVTPOL_ACTIVE_H )
#define PWM_USER_PWMEVTC_EVTCOEN  	( PWM_DRV_PWMEVT_EVTOEN_DISABLE )

#define PWM_USER_PWMEVTD_EVTDPGS	( PWM_DRV_PWMEVT_EVTSEL_PWM1 )
#define PWM_USER_PWMEVTD_EVTDSEL  	( PWM_DRV_PWMEVT_EVTSEL_PGTRGSEL)
#define PWM_USER_PWMEVTD_EVTDSYNC  	( PWM_DRV_PWMEVT_EVTSYNC_OFF )
#define PWM_USER_PWMEVTD_EVTDSTRD  	( PWM_DRV_PWMEVT_EVTSTRD_8CLOCK )
#define PWM_USER_PWMEVTD_EVTDPOL 	( PWM_DRV_PWMEVT_EVTPOL_ACTIVE_H )
#define PWM_USER_PWMEVTD_EVTDOEN  	( PWM_DRV_PWMEVT_EVTOEN_DISABLE )

#define PWM_USER_PWMEVTE_EVTEPGS	( PWM_DRV_PWMEVT_EVTSEL_PWM1 )
#define PWM_USER_PWMEVTE_EVTESEL  	( PWM_DRV_PWMEVT_EVTSEL_PGTRGSEL)
#define PWM_USER_PWMEVTE_EVTESYNC  	( PWM_DRV_PWMEVT_EVTSYNC_OFF )
#define PWM_USER_PWMEVTE_EVTESTRD  	( PWM_DRV_PWMEVT_EVTSTRD_8CLOCK )
#define PWM_USER_PWMEVTE_EVTEPOL 	( PWM_DRV_PWMEVT_EVTPOL_ACTIVE_H )
#define PWM_USER_PWMEVTE_EVTEOEN  	( PWM_DRV_PWMEVT_EVTOEN_DISABLE )

#define PWM_USER_PWMEVTF_EVTFPGS	( PWM_DRV_PWMEVT_EVTSEL_PWM1 )
#define PWM_USER_PWMEVTF_EVTFSEL  	( PWM_DRV_PWMEVT_EVTSEL_PGTRGSEL)
#define PWM_USER_PWMEVTF_EVTFSYNC  	( PWM_DRV_PWMEVT_EVTSYNC_OFF )
#define PWM_USER_PWMEVTF_EVTFSTRD  	( PWM_DRV_PWMEVT_EVTSTRD_8CLOCK )
#define PWM_USER_PWMEVTF_EVTFPOL 	( PWM_DRV_PWMEVT_EVTPOL_ACTIVE_H )
#define PWM_USER_PWMEVTF_EVTFOEN  	( PWM_DRV_PWMEVT_EVTOEN_DISABLE )

/*----------------------------------------------------------------------------*/
/* PG1CON */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1CON_MODSEL		( PWM_DRV_PGCON_MODSEL_INDEPENDENT_EDGE )
#define PWM_USER_PG1CON_CLKSEL		( PWM_DRV_PGCON_CLKSEL_MCLKSEL )
#define PWM_USER_PG1CON_HREN		( 0U )
#define PWM_USER_PG1CON_TRGCNT		( PWM_DRV_PGCON_TRGCNT_1CYCLE)
#define PWM_USER_PG1CON_ON			( PWM_DRV_PGCON_ON_ENABLE )
#define PWM_USER_PG1CON_SOCS		( PWM_DRV_PGCON_SOCS_LOCAL_EOC )
#define PWM_USER_PG1CON_TRGMOD		( PWM_DRV_PGCON_TRGMOD_SINGLE_TRIGGER )
#define PWM_USER_PG1CON_UPDMOD		( PWM_DRV_PGCON_UPDMOD_SOC )
#define PWM_USER_PG1CON_MSTEN		( PWM_DRV_PGCON_MSTEN_DISABLE )
#define PWM_USER_PG1CON_MPHSEL		( PWM_DRV_PGCON_MPHSEL_PGPHASE )
#define PWM_USER_PG1CON_MPERSEL		( PWM_DRV_PGCON_MPERSEL_PGPER )
#define PWM_USER_PG1CON_MDCSEL		( PWM_DRV_PGCON_MDCSEL_PGDC )

/*----------------------------------------------------------------------------*/
/* PG1STATレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1STAT_TRIG	( 0U )
#define PWM_USER_PG1STAT_CAHALF	( 0U )
#define PWM_USER_PG1STAT_STEER	( 0U )
#define PWM_USER_PG1STAT_UPDREQ	( 0U )
#define PWM_USER_PG1STAT_UPDATE	( 0U )
#define PWM_USER_PG1STAT_CAP	( 0U )
#define PWM_USER_PG1STAT_TRCLR	( 0U )
#define PWM_USER_PG1STAT_TRSET	( 0U )
#define PWM_USER_PG1STAT_FFACT	( 0U )
#define PWM_USER_PG1STAT_CLACT	( 0U )
#define PWM_USER_PG1STAT_FLT1ACT	( 0U )
#define PWM_USER_PG1STAT_FLT2ACT	( 0U )
#define PWM_USER_PG1STAT_SACT	( 0U )
#define PWM_USER_PG1STAT_CAPTR	( 0U )
#define PWM_USER_PG1STAT_FFEVT	( 0U )
#define PWM_USER_PG1STAT_CLEVT	( 0U )
#define PWM_USER_PG1STAT_FLT1EVT	( 0U )
#define PWM_USER_PG1STAT_FLT2EVT	( 0U )
#define PWM_USER_PG1STAT_SEVT	( 0U )

/*----------------------------------------------------------------------------*/
/* PG1IOCON1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1IOCON1_POLL		( PWM_DRV_PGIOCON_POLL_ACTIVE_HIGH )
#define PWM_USER_PG1IOCON1_POLH		( PWM_DRV_PGIOCON_POLH_ACTIVE_HIGH )
#define PWM_USER_PG1IOCON1_PENL		( PWM_DRV_PGIOCON_PENL_DISABLE )
#define PWM_USER_PG1IOCON1_PENH		( PWM_DRV_PGIOCON_PENH_DISABLE )
#define PWM_USER_PG1IOCON1_PMOD		( PWM_DRV_PGIOCON_PMOD_COMPLEMENTARY )
#define PWM_USER_PG1IOCON1_DTCMPSEL	( PWM_DRV_PGIOCON_DTCMPSEL_PCI_SYNC )
#define PWM_USER_PG1IOCON1_SWAP		( PWM_DRV_PGIOCON_SWAP_DISABLE )
#define PWM_USER_PG1IOCON1_PPSEN	( PWM_DRV_PGIOCON_PPSEN_DISABLE )
#define PWM_USER_PG1IOCON1_FORCEON	( 0u )
#define PWM_USER_PG1IOCON1_CAPTRSEL ( 0u )
#define PWM_USER_PG1IOCON1_CAPTREN  ( 0u )
#define PWM_USER_PG1IOCON1_CAPEN	( 0u )
#define PWM_USER_PG1IOCON1_CAPSRC	( PWM_DRV_PGIOCON_CAPSRC_SOFTWARE )
/*----------------------------------------------------------------------------*/
/* PG1IOCON2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1IOCON2_DBDAT	( PWM_DRV_PGIOCON_DBDAT_HL_LL )
#define PWM_USER_PG1IOCON2_FFDAT	( PWM_DRV_PGIOCON_FFDAT_HL_LL )
#define PWM_USER_PG1IOCON2_CLDAT	( PWM_DRV_PGIOCON_CLDAT_HL_LL )
#define PWM_USER_PG1IOCON2_FLT1DAT	( PWM_DRV_PGIOCON_FLTDAT_HL_LL )
#define PWM_USER_PG1IOCON2_FLT2DAT	( PWM_DRV_PGIOCON_FLTDAT_HL_LL )
#define PWM_USER_PG1IOCON2_OSYNC	( PWM_DRV_PGIOCON_OSYNC_TIMEBASE )
#define PWM_USER_PG1IOCON2_OVRDAT	( PWM_DRV_PGIOCON_OVRDAT_HL_LL )
#define PWM_USER_PG1IOCON2_OVRENL	( PWM_DRV_PGIOCON_OVRENL_DISABLE )
#define PWM_USER_PG1IOCON2_OVRENH	( PWM_DRV_PGIOCON_OVRENH_DISABLE )
#define PWM_USER_PG1IOCON2_CLMOD	( PWM_DRV_PGIOCON_CLMOD_CLDAT)
/*----------------------------------------------------------------------------*/
/* PG1EVT1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1EVT1_ADTR1EN1	( PWM_DRV_PGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_PG1EVT1_ADTR1EN2	( PWM_DRV_PGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_PG1EVT1_ADTR1EN3	( PWM_DRV_PGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_PG1EVT1_ADTR1PS	( 0u )
#define PWM_USER_PG1EVT1_ADTR1OFS	( PWM_DRV_PGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_PG1EVT1_DACTREN1	( 0u )
#define PWM_USER_PG1EVT1_DACTREN2	( 0u )
#define PWM_USER_PG1EVT1_PGTRGSEL	( PWM_DRV_PGEVT_PGTRGSEL_EOC )
#define PWM_USER_PG1EVT1_UPDTRG		( PWM_DRV_PGEVT_UPDTRG_MANUAL )
#define PWM_USER_PG1EVT1_PWMPCI		( PWM_DRV_PGEVT_PWMPCI_PWMGEN1 )
#define PWM_USER_PG1EVT1_IEVTSEL	( PWM_DRV_PGEVT_IEVTSEL_EOC )
#define PWM_USER_PG1EVT1_SIEN		( PWM_DRV_PGEVT_SIEN_DISABLE)
#define PWM_USER_PG1EVT1_FFIEN		( PWM_DRV_PGEVT_FFIEN_DISABLE )
#define PWM_USER_PG1EVT1_CLIEN		( PWM_DRV_PGEVT_CLIEN_DISABLE )
#define PWM_USER_PG1EVT1_FLT1IEN	( PWM_DRV_PGEVT_FLTIEN_DISABLE )
#define PWM_USER_PG1EVT1_FLT2IEN	( PWM_DRV_PGEVT_FLTIEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG1EVT2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1EVT2_ADTR1EN1	( PWM_DRV_PGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_PG1EVT2_ADTR1EN2	( PWM_DRV_PGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_PG1EVT2_ADTR1EN3	( PWM_DRV_PGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_PG1EVT2_ADTR2PS	( 0u )
#define PWM_USER_PG1EVT2_ADTR2OFS	( PWM_DRV_PGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_PG1EVT2_CAPTRPS	( 0u )
#define PWM_USER_PG1EVT2_CAPTROFS	( 0u )
/*----------------------------------------------------------------------------*/
/* PG1F1PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1F1PCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG1F1PCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG1F1PCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG1F1PCI1_SWTERM	( 0u )
#define PWM_USER_PG1F1PCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG1F1PCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG1F1PCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG1F1PCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG1F1PCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG1F1PCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG1F1PCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG1F1PCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG1F1PCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG1F1PCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG1F1PCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG1F1PCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG1F1PCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG1F1PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1F1PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1F2PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1F2PCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG1F2PCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG1F2PCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG1F2PCI1_SWTERM	( 0u )
#define PWM_USER_PG1F2PCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG1F2PCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG1F2PCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG1F2PCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG1F2PCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG1F2PCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG1F2PCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG1F2PCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG1F2PCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG1F2PCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG1F2PCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG1F2PCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG1F2PCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG1F2PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1F2PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1CLPCI */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1CLPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG1CLPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG1CLPCI1_PSYNC		( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG1CLPCI1_SWTERM	( 0u )
#define PWM_USER_PG1CLPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG1CLPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG1CLPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG1CLPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG1CLPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG1CLPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG1CLPCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG1CLPCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG1CLPCI1_SWPCI		( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG1CLPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG1CLPCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG1CLPCI1_BPSEL		( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG1CLPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG1CLPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1CLPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1FFPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1FFPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG1FFPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG1FFPCI1_PSYNC		( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG1FFPCI1_SWTERM	( 0u )
#define PWM_USER_PG1FFPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG1FFPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG1FFPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG1FFPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG1FFPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG1FFPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG1FFPCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG1FFPCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG1FFPCI1_SWPCI		( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG1FFPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG1FFPCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG1FFPCI1_BPSEL		( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG1FFPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG1FFPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1FFPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1SPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1SPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG1SPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG1SPCI1_PSYNC		( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG1SPCI1_SWTERM		( 0u )
#define PWM_USER_PG1SPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG1SPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG1SPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG1SPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG1SPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG1SPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG1SPCI1_LATMOD		( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG1SPCI1_SWPCIM		( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG1SPCI1_SWPCI		( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG1SPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG1SPCI1_TERMPS		( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG1SPCI1_BPSEL		( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG1SPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG1SPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1SPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1LEB */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1LEB_LEB			( 0u )
#define PWM_USER_PG1LEB_PLF			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG1LEB_PLR			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG1LEB_PHF			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG1LEB_PHR			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG1LEB_TRGA		( 0U )
#define PWM_USER_PG1LEB_TRGB		( 0U )
#define PWM_USER_PG1LEB_TRGC		( 0U )
#define PWM_USER_PG1LEB_TRGD		( 0U )
/*----------------------------------------------------------------------------*/
/* PG1PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1PHASE_PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1DC	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1DC_DC	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1DCA_DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1PER	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1PER_PER	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1TRIGAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1TRIGA	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1TRIGAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1TRIGA_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG1TRIGBレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1TRIGB_TRIGB		( 0u )
#define PWM_USER_PG1TRIGB_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG1TRIGCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1TRIGC_TRIGC		( 0u )
#define PWM_USER_PG1TRIGC_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG1TRIGDレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1TRIGD_TRIGD		( 0U )
#define PWM_USER_PG1TRIGD_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG1TRIGEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1TRIGE_TRIGE		( 0U )
#define PWM_USER_PG1TRIGE_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG1TRIGFレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1TRIGF_TRIGF		( 0U )
#define PWM_USER_PG1TRIGF_CAHALF	( PWM_DRV_PGTRIG_FIRST )

/*----------------------------------------------------------------------------*/
/* PG1DTレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1DT_DTL	( 0U )
#define PWM_USER_PG1DT_DTH	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1CAPレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1CAP	( 0U )


/*----------------------------------------------------------------------------*/
/* PG1CON */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1CON_MODSEL		( PWM_DRV_PGCON_MODSEL_INDEPENDENT_EDGE )
#define PWM_USER_PG1CON_CLKSEL		( PWM_DRV_PGCON_CLKSEL_MCLKSEL )
#define PWM_USER_PG1CON_HREN		( 0U )
#define PWM_USER_PG1CON_TRGCNT		( PWM_DRV_PGCON_TRGCNT_1CYCLE)
#define PWM_USER_PG1CON_ON			( PWM_DRV_PGCON_ON_ENABLE )
#define PWM_USER_PG1CON_SOCS		( PWM_DRV_PGCON_SOCS_LOCAL_EOC )
#define PWM_USER_PG1CON_TRGMOD		( PWM_DRV_PGCON_TRGMOD_SINGLE_TRIGGER )
#define PWM_USER_PG1CON_UPDMOD		( PWM_DRV_PGCON_UPDMOD_SOC )
#define PWM_USER_PG1CON_MSTEN		( PWM_DRV_PGCON_MSTEN_DISABLE )
#define PWM_USER_PG1CON_MPHSEL		( PWM_DRV_PGCON_MPHSEL_PGPHASE )
#define PWM_USER_PG1CON_MPERSEL		( PWM_DRV_PGCON_MPERSEL_PGPER )
#define PWM_USER_PG1CON_MDCSEL		( PWM_DRV_PGCON_MDCSEL_PGDC )

/*----------------------------------------------------------------------------*/
/* PG1STATレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1STAT_TRIG	( 0U )
#define PWM_USER_PG1STAT_CAHALF	( 0U )
#define PWM_USER_PG1STAT_STEER	( 0U )
#define PWM_USER_PG1STAT_UPDREQ	( 0U )
#define PWM_USER_PG1STAT_UPDATE	( 0U )
#define PWM_USER_PG1STAT_CAP	( 0U )
#define PWM_USER_PG1STAT_TRCLR	( 0U )
#define PWM_USER_PG1STAT_TRSET	( 0U )
#define PWM_USER_PG1STAT_FFACT	( 0U )
#define PWM_USER_PG1STAT_CLACT	( 0U )
#define PWM_USER_PG1STAT_FLT1ACT	( 0U )
#define PWM_USER_PG1STAT_FLT2ACT	( 0U )
#define PWM_USER_PG1STAT_SACT	( 0U )
#define PWM_USER_PG1STAT_CAPTR	( 0U )
#define PWM_USER_PG1STAT_FFEVT	( 0U )
#define PWM_USER_PG1STAT_CLEVT	( 0U )
#define PWM_USER_PG1STAT_FLT1EVT	( 0U )
#define PWM_USER_PG1STAT_FLT2EVT	( 0U )
#define PWM_USER_PG1STAT_SEVT	( 0U )

/*----------------------------------------------------------------------------*/
/* PG1IOCON1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1IOCON1_POLL		( PWM_DRV_PGIOCON_POLL_ACTIVE_HIGH )
#define PWM_USER_PG1IOCON1_POLH		( PWM_DRV_PGIOCON_POLH_ACTIVE_HIGH )
#define PWM_USER_PG1IOCON1_PENL		( PWM_DRV_PGIOCON_PENL_DISABLE )
#define PWM_USER_PG1IOCON1_PENH		( PWM_DRV_PGIOCON_PENH_DISABLE )
#define PWM_USER_PG1IOCON1_PMOD		( PWM_DRV_PGIOCON_PMOD_COMPLEMENTARY )
#define PWM_USER_PG1IOCON1_DTCMPSEL	( PWM_DRV_PGIOCON_DTCMPSEL_PCI_SYNC )
#define PWM_USER_PG1IOCON1_SWAP		( PWM_DRV_PGIOCON_SWAP_DISABLE )
#define PWM_USER_PG1IOCON1_PPSEN	( PWM_DRV_PGIOCON_PPSEN_DISABLE )
#define PWM_USER_PG1IOCON1_FORCEON	( 0u )
#define PWM_USER_PG1IOCON1_CAPTRSEL ( 0u )
#define PWM_USER_PG1IOCON1_CAPTREN  ( 0u )
#define PWM_USER_PG1IOCON1_CAPEN	( 0u )
#define PWM_USER_PG1IOCON1_CAPSRC	( PWM_DRV_PGIOCON_CAPSRC_SOFTWARE )
/*----------------------------------------------------------------------------*/
/* PG1IOCON2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1IOCON2_DBDAT	( PWM_DRV_PGIOCON_DBDAT_HL_LL )
#define PWM_USER_PG1IOCON2_FFDAT	( PWM_DRV_PGIOCON_FFDAT_HL_LL )
#define PWM_USER_PG1IOCON2_CLDAT	( PWM_DRV_PGIOCON_CLDAT_HL_LL )
#define PWM_USER_PG1IOCON2_FLT1DAT	( PWM_DRV_PGIOCON_FLTDAT_HL_LL )
#define PWM_USER_PG1IOCON2_FLT2DAT	( PWM_DRV_PGIOCON_FLTDAT_HL_LL )
#define PWM_USER_PG1IOCON2_OSYNC	( PWM_DRV_PGIOCON_OSYNC_TIMEBASE )
#define PWM_USER_PG1IOCON2_OVRDAT	( PWM_DRV_PGIOCON_OVRDAT_HL_LL )
#define PWM_USER_PG1IOCON2_OVRENL	( PWM_DRV_PGIOCON_OVRENL_DISABLE )
#define PWM_USER_PG1IOCON2_OVRENH	( PWM_DRV_PGIOCON_OVRENH_DISABLE )
#define PWM_USER_PG1IOCON2_CLMOD	( PWM_DRV_PGIOCON_CLMOD_CLDAT)
/*----------------------------------------------------------------------------*/
/* PG1EVT1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1EVT1_ADTR1EN1	( PWM_DRV_PGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_PG1EVT1_ADTR1EN2	( PWM_DRV_PGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_PG1EVT1_ADTR1EN3	( PWM_DRV_PGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_PG1EVT1_ADTR1PS	( 0u )
#define PWM_USER_PG1EVT1_ADTR1OFS	( PWM_DRV_PGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_PG1EVT1_DACTREN1	( 0u )
#define PWM_USER_PG1EVT1_DACTREN2	( 0u )
#define PWM_USER_PG1EVT1_PGTRGSEL	( PWM_DRV_PGEVT_PGTRGSEL_EOC )
#define PWM_USER_PG1EVT1_UPDTRG		( PWM_DRV_PGEVT_UPDTRG_MANUAL )
#define PWM_USER_PG1EVT1_PWMPCI		( PWM_DRV_PGEVT_PWMPCI_PWMGEN1 )
#define PWM_USER_PG1EVT1_IEVTSEL	( PWM_DRV_PGEVT_IEVTSEL_EOC )
#define PWM_USER_PG1EVT1_SIEN		( PWM_DRV_PGEVT_SIEN_DISABLE)
#define PWM_USER_PG1EVT1_FFIEN		( PWM_DRV_PGEVT_FFIEN_DISABLE )
#define PWM_USER_PG1EVT1_CLIEN		( PWM_DRV_PGEVT_CLIEN_DISABLE )
#define PWM_USER_PG1EVT1_FLT1IEN	( PWM_DRV_PGEVT_FLTIEN_DISABLE )
#define PWM_USER_PG1EVT1_FLT2IEN	( PWM_DRV_PGEVT_FLTIEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG1EVT2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1EVT2_ADTR2EN1	( PWM_DRV_PGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_PG1EVT2_ADTR2EN2	( PWM_DRV_PGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_PG1EVT2_ADTR2EN3	( PWM_DRV_PGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_PG1EVT2_ADTR2PS	( 0u )
#define PWM_USER_PG1EVT2_ADTR2OFS	( PWM_DRV_PGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_PG1EVT2_CAPTRPS	( 0u )
#define PWM_USER_PG1EVT2_CAPTROFS	( 0u )
/*----------------------------------------------------------------------------*/
/* PG1F1PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1F1PCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG1F1PCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG1F1PCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG1F1PCI1_SWTERM	( 0u )
#define PWM_USER_PG1F1PCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG1F1PCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG1F1PCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG1F1PCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG1F1PCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG1F1PCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG1F1PCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG1F1PCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG1F1PCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG1F1PCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG1F1PCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG1F1PCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG1F1PCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG1F1PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1F1PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1F2PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1F2PCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG1F2PCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG1F2PCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG1F2PCI1_SWTERM	( 0u )
#define PWM_USER_PG1F2PCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG1F2PCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG1F2PCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG1F2PCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG1F2PCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG1F2PCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG1F2PCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG1F2PCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG1F2PCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG1F2PCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG1F2PCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG1F2PCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG1F2PCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG1F2PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1F2PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1CLPCI */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1CLPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG1CLPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG1CLPCI1_PSYNC		( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG1CLPCI1_SWTERM	( 0u )
#define PWM_USER_PG1CLPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG1CLPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG1CLPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG1CLPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG1CLPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG1CLPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG1CLPCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG1CLPCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG1CLPCI1_SWPCI		( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG1CLPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG1CLPCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG1CLPCI1_BPSEL		( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG1CLPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG1CLPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1CLPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1FFPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1FFPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG1FFPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG1FFPCI1_PSYNC		( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG1FFPCI1_SWTERM	( 0u )
#define PWM_USER_PG1FFPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG1FFPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG1FFPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG1FFPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG1FFPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG1FFPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG1FFPCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG1FFPCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG1FFPCI1_SWPCI		( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG1FFPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG1FFPCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG1FFPCI1_BPSEL		( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG1FFPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG1FFPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1FFPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1SPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1SPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG1SPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG1SPCI1_PSYNC		( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG1SPCI1_SWTERM		( 0u )
#define PWM_USER_PG1SPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG1SPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG1SPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG1SPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG1SPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG1SPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG1SPCI1_LATMOD		( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG1SPCI1_SWPCIM		( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG1SPCI1_SWPCI		( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG1SPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG1SPCI1_TERMPS		( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG1SPCI1_BPSEL		( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG1SPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG1SPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1SPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1LEB */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1LEB_LEB			( 0u )
#define PWM_USER_PG1LEB_PLF			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG1LEB_PLR			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG1LEB_PHF			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG1LEB_PHR			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG1LEB_TRGA		( 0U )
#define PWM_USER_PG1LEB_TRGB		( 0U )
#define PWM_USER_PG1LEB_TRGC		( 0U )
#define PWM_USER_PG1LEB_TRGD		( 0U )
/*----------------------------------------------------------------------------*/
/* PG1PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1PHASE_PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1DC	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1DC_DC	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1DCA_DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1PER	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1PER_PER	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1TRIGAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1TRIGA_TRIGA		( 0U )
#define PWM_USER_PG1TRIGA_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG1TRIGBレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1TRIGB_TRIGB		( 0u )
#define PWM_USER_PG1TRIGB_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG1TRIGCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1TRIGC_TRIGC		( 0u )
#define PWM_USER_PG1TRIGC_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG1TRIGDレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1TRIGD_TRIGD		( 0U )
#define PWM_USER_PG1TRIGD_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG1TRIGEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1TRIGE_TRIGE		( 0U )
#define PWM_USER_PG1TRIGE_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG1TRIGFレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1TRIGF_TRIGF		( 0U )
#define PWM_USER_PG1TRIGF_CAHALF	( PWM_DRV_PGTRIG_FIRST )

/*----------------------------------------------------------------------------*/
/* PG1DTレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1DT_DTL	( 0U )
#define PWM_USER_PG1DT_DTH	( 0U )
/*----------------------------------------------------------------------------*/
/* PG1CAPレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG1CAP	( 0U )


/*----------------------------------------------------------------------------*/
/* PG2CON */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2CON_MODSEL		( PWM_DRV_PGCON_MODSEL_INDEPENDENT_EDGE )
#define PWM_USER_PG2CON_CLKSEL		( PWM_DRV_PGCON_CLKSEL_MCLKSEL )
#define PWM_USER_PG2CON_HREN		( 0U )
#define PWM_USER_PG2CON_TRGCNT		( PWM_DRV_PGCON_TRGCNT_1CYCLE)
#define PWM_USER_PG2CON_ON			( PWM_DRV_PGCON_ON_ENABLE )
#define PWM_USER_PG2CON_SOCS		( PWM_DRV_PGCON_SOCS_LOCAL_EOC )
#define PWM_USER_PG2CON_TRGMOD		( PWM_DRV_PGCON_TRGMOD_SINGLE_TRIGGER )
#define PWM_USER_PG2CON_UPDMOD		( PWM_DRV_PGCON_UPDMOD_SOC )
#define PWM_USER_PG2CON_MSTEN		( PWM_DRV_PGCON_MSTEN_DISABLE )
#define PWM_USER_PG2CON_MPHSEL		( PWM_DRV_PGCON_MPHSEL_PGPHASE )
#define PWM_USER_PG2CON_MPERSEL		( PWM_DRV_PGCON_MPERSEL_PGPER )
#define PWM_USER_PG2CON_MDCSEL		( PWM_DRV_PGCON_MDCSEL_PGDC )

/*----------------------------------------------------------------------------*/
/* PG2STATレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2STAT_TRIG	( 0U )
#define PWM_USER_PG2STAT_CAHALF	( 0U )
#define PWM_USER_PG2STAT_STEER	( 0U )
#define PWM_USER_PG2STAT_UPDREQ	( 0U )
#define PWM_USER_PG2STAT_UPDATE	( 0U )
#define PWM_USER_PG2STAT_CAP	( 0U )
#define PWM_USER_PG2STAT_TRCLR	( 0U )
#define PWM_USER_PG2STAT_TRSET	( 0U )
#define PWM_USER_PG2STAT_FFACT	( 0U )
#define PWM_USER_PG2STAT_CLACT	( 0U )
#define PWM_USER_PG2STAT_FLT1ACT	( 0U )
#define PWM_USER_PG2STAT_FLT2ACT	( 0U )
#define PWM_USER_PG2STAT_SACT	( 0U )
#define PWM_USER_PG2STAT_CAPTR	( 0U )
#define PWM_USER_PG2STAT_FFEVT	( 0U )
#define PWM_USER_PG2STAT_CLEVT	( 0U )
#define PWM_USER_PG2STAT_FLT1EVT	( 0U )
#define PWM_USER_PG2STAT_FLT2EVT	( 0U )
#define PWM_USER_PG2STAT_SEVT	( 0U )

/*----------------------------------------------------------------------------*/
/* PG2IOCON1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2IOCON1_POLL		( PWM_DRV_PGIOCON_POLL_ACTIVE_HIGH )
#define PWM_USER_PG2IOCON1_POLH		( PWM_DRV_PGIOCON_POLH_ACTIVE_HIGH )
#define PWM_USER_PG2IOCON1_PENL		( PWM_DRV_PGIOCON_PENL_DISABLE )
#define PWM_USER_PG2IOCON1_PENH		( PWM_DRV_PGIOCON_PENH_DISABLE )
#define PWM_USER_PG2IOCON1_PMOD		( PWM_DRV_PGIOCON_PMOD_COMPLEMENTARY )
#define PWM_USER_PG2IOCON1_DTCMPSEL	( PWM_DRV_PGIOCON_DTCMPSEL_PCI_SYNC )
#define PWM_USER_PG2IOCON1_SWAP		( PWM_DRV_PGIOCON_SWAP_DISABLE )
#define PWM_USER_PG2IOCON1_PPSEN	( PWM_DRV_PGIOCON_PPSEN_DISABLE )
#define PWM_USER_PG2IOCON1_FORCEON	( 0u )
#define PWM_USER_PG2IOCON1_CAPTRSEL ( 0u )
#define PWM_USER_PG2IOCON1_CAPTREN  ( 0u )
#define PWM_USER_PG2IOCON1_CAPEN	( 0u )
#define PWM_USER_PG2IOCON1_CAPSRC	( PWM_DRV_PGIOCON_CAPSRC_SOFTWARE )
/*----------------------------------------------------------------------------*/
/* PG2IOCON2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2IOCON2_DBDAT	( PWM_DRV_PGIOCON_DBDAT_HL_LL )
#define PWM_USER_PG2IOCON2_FFDAT	( PWM_DRV_PGIOCON_FFDAT_HL_LL )
#define PWM_USER_PG2IOCON2_CLDAT	( PWM_DRV_PGIOCON_CLDAT_HL_LL )
#define PWM_USER_PG2IOCON2_FLT1DAT	( PWM_DRV_PGIOCON_FLTDAT_HL_LL )
#define PWM_USER_PG2IOCON2_FLT2DAT	( PWM_DRV_PGIOCON_FLTDAT_HL_LL )
#define PWM_USER_PG2IOCON2_OSYNC	( PWM_DRV_PGIOCON_OSYNC_TIMEBASE )
#define PWM_USER_PG2IOCON2_OVRDAT	( PWM_DRV_PGIOCON_OVRDAT_HL_LL )
#define PWM_USER_PG2IOCON2_OVRENL	( PWM_DRV_PGIOCON_OVRENL_DISABLE )
#define PWM_USER_PG2IOCON2_OVRENH	( PWM_DRV_PGIOCON_OVRENH_DISABLE )
#define PWM_USER_PG2IOCON2_CLMOD	( PWM_DRV_PGIOCON_CLMOD_CLDAT)
/*----------------------------------------------------------------------------*/
/* PG2EVT1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2EVT1_ADTR1EN1	( PWM_DRV_PGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_PG2EVT1_ADTR1EN2	( PWM_DRV_PGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_PG2EVT1_ADTR1EN3	( PWM_DRV_PGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_PG2EVT1_ADTR1PS	( 0u )
#define PWM_USER_PG2EVT1_ADTR1OFS	( PWM_DRV_PGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_PG2EVT1_DACTREN1	( 0u )
#define PWM_USER_PG2EVT1_DACTREN2	( 0u )
#define PWM_USER_PG2EVT1_PGTRGSEL	( PWM_DRV_PGEVT_PGTRGSEL_EOC )
#define PWM_USER_PG2EVT1_UPDTRG		( PWM_DRV_PGEVT_UPDTRG_MANUAL )
#define PWM_USER_PG2EVT1_PWMPCI		( PWM_DRV_PGEVT_PWMPCI_PWMGEN1 )
#define PWM_USER_PG2EVT1_IEVTSEL	( PWM_DRV_PGEVT_IEVTSEL_EOC )
#define PWM_USER_PG2EVT1_SIEN		( PWM_DRV_PGEVT_SIEN_DISABLE)
#define PWM_USER_PG2EVT1_FFIEN		( PWM_DRV_PGEVT_FFIEN_DISABLE )
#define PWM_USER_PG2EVT1_CLIEN		( PWM_DRV_PGEVT_CLIEN_DISABLE )
#define PWM_USER_PG2EVT1_FLT1IEN	( PWM_DRV_PGEVT_FLTIEN_DISABLE )
#define PWM_USER_PG2EVT1_FLT2IEN	( PWM_DRV_PGEVT_FLTIEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG2EVT2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2EVT2_ADTR2EN1	( PWM_DRV_PGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_PG2EVT2_ADTR2EN2	( PWM_DRV_PGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_PG2EVT2_ADTR2EN3	( PWM_DRV_PGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_PG2EVT2_ADTR2PS	( 0u )
#define PWM_USER_PG2EVT2_ADTR2OFS	( PWM_DRV_PGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_PG2EVT2_CAPTRPS	( 0u )
#define PWM_USER_PG2EVT2_CAPTROFS	( 0u )
/*----------------------------------------------------------------------------*/
/* PG2F1PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2F1PCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG2F1PCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG2F1PCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG2F1PCI1_SWTERM	( 0u )
#define PWM_USER_PG2F1PCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG2F1PCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG2F1PCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG2F1PCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG2F1PCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG2F1PCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG2F1PCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG2F1PCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG2F1PCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG2F1PCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG2F1PCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG2F1PCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG2F1PCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG2F1PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2F1PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG2F2PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2F2PCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG2F2PCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG2F2PCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG2F2PCI1_SWTERM	( 0u )
#define PWM_USER_PG2F2PCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG2F2PCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG2F2PCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG2F2PCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG2F2PCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG2F2PCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG2F2PCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG2F2PCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG2F2PCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG2F2PCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG2F2PCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG2F2PCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG2F2PCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG2F2PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2F2PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG2CLPCI */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2CLPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG2CLPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG2CLPCI1_PSYNC		( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG2CLPCI1_SWTERM	( 0u )
#define PWM_USER_PG2CLPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG2CLPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG2CLPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG2CLPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG2CLPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG2CLPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG2CLPCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG2CLPCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG2CLPCI1_SWPCI		( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG2CLPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG2CLPCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG2CLPCI1_BPSEL		( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG2CLPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG2CLPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2CLPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG2FFPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2FFPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG2FFPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG2FFPCI1_PSYNC		( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG2FFPCI1_SWTERM	( 0u )
#define PWM_USER_PG2FFPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG2FFPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG2FFPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG2FFPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG2FFPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG2FFPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG2FFPCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG2FFPCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG2FFPCI1_SWPCI		( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG2FFPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG2FFPCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG2FFPCI1_BPSEL		( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG2FFPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG2FFPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2FFPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG2SPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2SPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG2SPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG2SPCI1_PSYNC		( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG2SPCI1_SWTERM		( 0u )
#define PWM_USER_PG2SPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG2SPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG2SPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG2SPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG2SPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG2SPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG2SPCI1_LATMOD		( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG2SPCI1_SWPCIM		( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG2SPCI1_SWPCI		( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG2SPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG2SPCI1_TERMPS		( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG2SPCI1_BPSEL		( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG2SPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG2SPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2SPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG2LEB */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2LEB_LEB			( 0u )
#define PWM_USER_PG2LEB_PLF			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG2LEB_PLR			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG2LEB_PHF			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG2LEB_PHR			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG2LEB_TRGA		( 0U )
#define PWM_USER_PG2LEB_TRGB		( 0U )
#define PWM_USER_PG2LEB_TRGC		( 0U )
#define PWM_USER_PG2LEB_TRGD		( 0U )
/*----------------------------------------------------------------------------*/
/* PG2PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* PG2PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2PHASE_PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* PG2DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2DC	( 0U )
/*----------------------------------------------------------------------------*/
/* PG2DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2DC_DC	( 0U )
/*----------------------------------------------------------------------------*/
/* PG2DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* PG2DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2DCA_DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* PG2PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2PER	( 0U )
/*----------------------------------------------------------------------------*/
/* PG2PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2PER_PER	( 0U )
/*----------------------------------------------------------------------------*/
/* PG2TRIGAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2TRIGA	( 0U )
/*----------------------------------------------------------------------------*/
/* PG2TRIGAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2TRIGA_TRIGA		( 0u )
#define PWM_USER_PG2TRIGA_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG2TRIGBレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2TRIGB_TRIGB		( 0u )
#define PWM_USER_PG2TRIGB_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG2TRIGCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2TRIGC_TRIGC		( 0u )
#define PWM_USER_PG2TRIGC_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG2TRIGDレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2TRIGD_TRIGD		( 0U )
#define PWM_USER_PG2TRIGD_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG2TRIGEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2TRIGE_TRIGE		( 0U )
#define PWM_USER_PG2TRIGE_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG2TRIGFレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2TRIGF_TRIGF		( 0U )
#define PWM_USER_PG2TRIGF_CAHALF	( PWM_DRV_PGTRIG_FIRST )

/*----------------------------------------------------------------------------*/
/* PG2DTレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2DT_DTL	( 0U )
#define PWM_USER_PG2DT_DTH	( 0U )
/*----------------------------------------------------------------------------*/
/* PG2CAPレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG2CAP	( 0U )


/*----------------------------------------------------------------------------*/
/* PG3CON */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3CON_MODSEL		( PWM_DRV_PGCON_MODSEL_INDEPENDENT_EDGE )
#define PWM_USER_PG3CON_CLKSEL		( PWM_DRV_PGCON_CLKSEL_MCLKSEL )
#define PWM_USER_PG3CON_HREN		( 0U )
#define PWM_USER_PG3CON_TRGCNT		( PWM_DRV_PGCON_TRGCNT_1CYCLE)
#define PWM_USER_PG3CON_ON			( PWM_DRV_PGCON_ON_ENABLE )
#define PWM_USER_PG3CON_SOCS		( PWM_DRV_PGCON_SOCS_LOCAL_EOC )
#define PWM_USER_PG3CON_TRGMOD		( PWM_DRV_PGCON_TRGMOD_SINGLE_TRIGGER )
#define PWM_USER_PG3CON_UPDMOD		( PWM_DRV_PGCON_UPDMOD_SOC )
#define PWM_USER_PG3CON_MSTEN		( PWM_DRV_PGCON_MSTEN_DISABLE )
#define PWM_USER_PG3CON_MPHSEL		( PWM_DRV_PGCON_MPHSEL_PGPHASE )
#define PWM_USER_PG3CON_MPERSEL		( PWM_DRV_PGCON_MPERSEL_PGPER )
#define PWM_USER_PG3CON_MDCSEL		( PWM_DRV_PGCON_MDCSEL_PGDC )

/*----------------------------------------------------------------------------*/
/* PG3STATレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3STAT_TRIG	( 0U )
#define PWM_USER_PG3STAT_CAHALF	( 0U )
#define PWM_USER_PG3STAT_STEER	( 0U )
#define PWM_USER_PG3STAT_UPDREQ	( 0U )
#define PWM_USER_PG3STAT_UPDATE	( 0U )
#define PWM_USER_PG3STAT_CAP	( 0U )
#define PWM_USER_PG3STAT_TRCLR	( 0U )
#define PWM_USER_PG3STAT_TRSET	( 0U )
#define PWM_USER_PG3STAT_FFACT	( 0U )
#define PWM_USER_PG3STAT_CLACT	( 0U )
#define PWM_USER_PG3STAT_FLT1ACT	( 0U )
#define PWM_USER_PG3STAT_FLT2ACT	( 0U )
#define PWM_USER_PG3STAT_SACT	( 0U )
#define PWM_USER_PG3STAT_CAPTR	( 0U )
#define PWM_USER_PG3STAT_FFEVT	( 0U )
#define PWM_USER_PG3STAT_CLEVT	( 0U )
#define PWM_USER_PG3STAT_FLT1EVT	( 0U )
#define PWM_USER_PG3STAT_FLT2EVT	( 0U )
#define PWM_USER_PG3STAT_SEVT	( 0U )

/*----------------------------------------------------------------------------*/
/* PG3IOCON1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3IOCON1_POLL		( PWM_DRV_PGIOCON_POLL_ACTIVE_HIGH )
#define PWM_USER_PG3IOCON1_POLH		( PWM_DRV_PGIOCON_POLH_ACTIVE_HIGH )
#define PWM_USER_PG3IOCON1_PENL		( PWM_DRV_PGIOCON_PENL_DISABLE )
#define PWM_USER_PG3IOCON1_PENH		( PWM_DRV_PGIOCON_PENH_DISABLE )
#define PWM_USER_PG3IOCON1_PMOD		( PWM_DRV_PGIOCON_PMOD_COMPLEMENTARY )
#define PWM_USER_PG3IOCON1_DTCMPSEL	( PWM_DRV_PGIOCON_DTCMPSEL_PCI_SYNC )
#define PWM_USER_PG3IOCON1_SWAP		( PWM_DRV_PGIOCON_SWAP_DISABLE )
#define PWM_USER_PG3IOCON1_PPSEN	( PWM_DRV_PGIOCON_PPSEN_DISABLE )
#define PWM_USER_PG3IOCON1_FORCEON	( 0u )
#define PWM_USER_PG3IOCON1_CAPTRSEL ( 0u )
#define PWM_USER_PG3IOCON1_CAPTREN  ( 0u )
#define PWM_USER_PG3IOCON1_CAPEN	( 0u )
#define PWM_USER_PG3IOCON1_CAPSRC	( PWM_DRV_PGIOCON_CAPSRC_SOFTWARE )
/*----------------------------------------------------------------------------*/
/* PG3IOCON2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3IOCON2_DBDAT	( PWM_DRV_PGIOCON_DBDAT_HL_LL )
#define PWM_USER_PG3IOCON2_FFDAT	( PWM_DRV_PGIOCON_FFDAT_HL_LL )
#define PWM_USER_PG3IOCON2_CLDAT	( PWM_DRV_PGIOCON_CLDAT_HL_LL )
#define PWM_USER_PG3IOCON2_FLT1DAT	( PWM_DRV_PGIOCON_FLTDAT_HL_LL )
#define PWM_USER_PG3IOCON2_FLT2DAT	( PWM_DRV_PGIOCON_FLTDAT_HL_LL )
#define PWM_USER_PG3IOCON2_OSYNC	( PWM_DRV_PGIOCON_OSYNC_TIMEBASE )
#define PWM_USER_PG3IOCON2_OVRDAT	( PWM_DRV_PGIOCON_OVRDAT_HL_LL )
#define PWM_USER_PG3IOCON2_OVRENL	( PWM_DRV_PGIOCON_OVRENL_DISABLE )
#define PWM_USER_PG3IOCON2_OVRENH	( PWM_DRV_PGIOCON_OVRENH_DISABLE )
#define PWM_USER_PG3IOCON2_CLMOD	( PWM_DRV_PGIOCON_CLMOD_CLDAT)
/*----------------------------------------------------------------------------*/
/* PG3EVT1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3EVT1_ADTR1EN1	( PWM_DRV_PGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_PG3EVT1_ADTR1EN2	( PWM_DRV_PGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_PG3EVT1_ADTR1EN3	( PWM_DRV_PGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_PG3EVT1_ADTR1PS	( 0u )
#define PWM_USER_PG3EVT1_ADTR1OFS	( PWM_DRV_PGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_PG3EVT1_DACTREN1	( 0u )
#define PWM_USER_PG3EVT1_DACTREN2	( 0u )
#define PWM_USER_PG3EVT1_PGTRGSEL	( PWM_DRV_PGEVT_PGTRGSEL_EOC )
#define PWM_USER_PG3EVT1_UPDTRG		( PWM_DRV_PGEVT_UPDTRG_MANUAL )
#define PWM_USER_PG3EVT1_PWMPCI		( PWM_DRV_PGEVT_PWMPCI_PWMGEN1 )
#define PWM_USER_PG3EVT1_IEVTSEL	( PWM_DRV_PGEVT_IEVTSEL_EOC )
#define PWM_USER_PG3EVT1_SIEN		( PWM_DRV_PGEVT_SIEN_DISABLE)
#define PWM_USER_PG3EVT1_FFIEN		( PWM_DRV_PGEVT_FFIEN_DISABLE )
#define PWM_USER_PG3EVT1_CLIEN		( PWM_DRV_PGEVT_CLIEN_DISABLE )
#define PWM_USER_PG3EVT1_FLT1IEN	( PWM_DRV_PGEVT_FLTIEN_DISABLE )
#define PWM_USER_PG3EVT1_FLT2IEN	( PWM_DRV_PGEVT_FLTIEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG3EVT2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3EVT2_ADTR2EN1	( PWM_DRV_PGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_PG3EVT2_ADTR2EN2	( PWM_DRV_PGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_PG3EVT2_ADTR2EN3	( PWM_DRV_PGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_PG3EVT2_ADTR2PS	( 0u )
#define PWM_USER_PG3EVT2_ADTR2OFS	( PWM_DRV_PGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_PG3EVT2_CAPTRPS	( 0u )
#define PWM_USER_PG3EVT2_CAPTROFS	( 0u )
/*----------------------------------------------------------------------------*/
/* PG3F1PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3F1PCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG3F1PCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG3F1PCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG3F1PCI1_SWTERM	( 0u )
#define PWM_USER_PG3F1PCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG3F1PCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG3F1PCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG3F1PCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG3F1PCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG3F1PCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG3F1PCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG3F1PCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG3F1PCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG3F1PCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG3F1PCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG3F1PCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG3F1PCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG3F1PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3F1PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG3F2PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3F2PCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG3F2PCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG3F2PCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG3F2PCI1_SWTERM	( 0u )
#define PWM_USER_PG3F2PCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG3F2PCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG3F2PCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG3F2PCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG3F2PCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG3F2PCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG3F2PCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG3F2PCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG3F2PCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG3F2PCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG3F2PCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG3F2PCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG3F2PCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG3F2PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3F2PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG3CLPCI */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3CLPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG3CLPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG3CLPCI1_PSYNC		( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG3CLPCI1_SWTERM	( 0u )
#define PWM_USER_PG3CLPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG3CLPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG3CLPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG3CLPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG3CLPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG3CLPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG3CLPCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG3CLPCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG3CLPCI1_SWPCI		( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG3CLPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG3CLPCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG3CLPCI1_BPSEL		( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG3CLPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG3CLPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3CLPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG3FFPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3FFPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG3FFPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG3FFPCI1_PSYNC		( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG3FFPCI1_SWTERM	( 0u )
#define PWM_USER_PG3FFPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG3FFPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG3FFPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG3FFPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG3FFPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG3FFPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG3FFPCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG3FFPCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG3FFPCI1_SWPCI		( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG3FFPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG3FFPCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG3FFPCI1_BPSEL		( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG3FFPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG3FFPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3FFPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG3SPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3SPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG3SPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG3SPCI1_PSYNC		( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG3SPCI1_SWTERM		( 0u )
#define PWM_USER_PG3SPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG3SPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG3SPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG3SPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG3SPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG3SPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG3SPCI1_LATMOD		( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG3SPCI1_SWPCIM		( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG3SPCI1_SWPCI		( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG3SPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG3SPCI1_TERMPS		( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG3SPCI1_BPSEL		( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG3SPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG3SPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3SPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG3LEB */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3LEB_LEB			( 0u )
#define PWM_USER_PG3LEB_PLF			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG3LEB_PLR			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG3LEB_PHF			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG3LEB_PHR			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG3LEB_TRGA		( 0U )
#define PWM_USER_PG3LEB_TRGB		( 0U )
#define PWM_USER_PG3LEB_TRGC		( 0U )
#define PWM_USER_PG3LEB_TRGD		( 0U )
/*----------------------------------------------------------------------------*/
/* PG3PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* PG3PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3PHASE_PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* PG3DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3DC	( 0U )
/*----------------------------------------------------------------------------*/
/* PG3DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3DC_DC	( 0U )
/*----------------------------------------------------------------------------*/
/* PG3DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* PG3DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3DCA_DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* PG3PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3PER	( 0U )
/*----------------------------------------------------------------------------*/
/* PG3PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3PER_PER	( 0U )
/*----------------------------------------------------------------------------*/
/* PG3TRIGAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3TRIGA_TRIGA		( 0u )
#define PWM_USER_PG3TRIGA_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG3TRIGBレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3TRIGB_TRIGB		( 0u )
#define PWM_USER_PG3TRIGB_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG3TRIGCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3TRIGC_TRIGC		( 0u )
#define PWM_USER_PG3TRIGC_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG3TRIGDレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3TRIGD_TRIGD		( 0U )
#define PWM_USER_PG3TRIGD_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG3TRIGEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3TRIGE_TRIGE		( 0U )
#define PWM_USER_PG3TRIGE_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG3TRIGFレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3TRIGF_TRIGF		( 0U )
#define PWM_USER_PG3TRIGF_CAHALF	( PWM_DRV_PGTRIG_FIRST )

/*----------------------------------------------------------------------------*/
/* PG3DTレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3DT_DTL	( 0U )
#define PWM_USER_PG3DT_DTH	( 0U )
/*----------------------------------------------------------------------------*/
/* PG3CAPレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG3CAP	( 0U )

/*----------------------------------------------------------------------------*/
/* PG4CON */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4CON_MODSEL		( PWM_DRV_PGCON_MODSEL_INDEPENDENT_EDGE )
#define PWM_USER_PG4CON_CLKSEL		( PWM_DRV_PGCON_CLKSEL_MCLKSEL )
#define PWM_USER_PG4CON_HREN		( 0U )
#define PWM_USER_PG4CON_TRGCNT		( PWM_DRV_PGCON_TRGCNT_1CYCLE)
#define PWM_USER_PG4CON_ON			( PWM_DRV_PGCON_ON_ENABLE )
#define PWM_USER_PG4CON_SOCS		( PWM_DRV_PGCON_SOCS_LOCAL_EOC )
#define PWM_USER_PG4CON_TRGMOD		( PWM_DRV_PGCON_TRGMOD_SINGLE_TRIGGER )
#define PWM_USER_PG4CON_UPDMOD		( PWM_DRV_PGCON_UPDMOD_SOC )
#define PWM_USER_PG4CON_MSTEN		( PWM_DRV_PGCON_MSTEN_DISABLE )
#define PWM_USER_PG4CON_MPHSEL		( PWM_DRV_PGCON_MPHSEL_PGPHASE )
#define PWM_USER_PG4CON_MPERSEL		( PWM_DRV_PGCON_MPERSEL_PGPER )
#define PWM_USER_PG4CON_MDCSEL		( PWM_DRV_PGCON_MDCSEL_PGDC )

/*----------------------------------------------------------------------------*/
/* PG4STATレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4STAT_TRIG	( 0U )
#define PWM_USER_PG4STAT_CAHALF	( 0U )
#define PWM_USER_PG4STAT_STEER	( 0U )
#define PWM_USER_PG4STAT_UPDREQ	( 0U )
#define PWM_USER_PG4STAT_UPDATE	( 0U )
#define PWM_USER_PG4STAT_CAP	( 0U )
#define PWM_USER_PG4STAT_TRCLR	( 0U )
#define PWM_USER_PG4STAT_TRSET	( 0U )
#define PWM_USER_PG4STAT_FFACT	( 0U )
#define PWM_USER_PG4STAT_CLACT	( 0U )
#define PWM_USER_PG4STAT_FLT1ACT	( 0U )
#define PWM_USER_PG4STAT_FLT2ACT	( 0U )
#define PWM_USER_PG4STAT_SACT	( 0U )
#define PWM_USER_PG4STAT_CAPTR	( 0U )
#define PWM_USER_PG4STAT_FFEVT	( 0U )
#define PWM_USER_PG4STAT_CLEVT	( 0U )
#define PWM_USER_PG4STAT_FLT1EVT	( 0U )
#define PWM_USER_PG4STAT_FLT2EVT	( 0U )
#define PWM_USER_PG4STAT_SEVT	( 0U )

/*----------------------------------------------------------------------------*/
/* PG4IOCON1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4IOCON1_POLL		( PWM_DRV_PGIOCON_POLL_ACTIVE_HIGH )
#define PWM_USER_PG4IOCON1_POLH		( PWM_DRV_PGIOCON_POLH_ACTIVE_HIGH )
#define PWM_USER_PG4IOCON1_PENL		( PWM_DRV_PGIOCON_PENL_DISABLE )
#define PWM_USER_PG4IOCON1_PENH		( PWM_DRV_PGIOCON_PENH_DISABLE )
#define PWM_USER_PG4IOCON1_PMOD		( PWM_DRV_PGIOCON_PMOD_COMPLEMENTARY )
#define PWM_USER_PG4IOCON1_DTCMPSEL	( PWM_DRV_PGIOCON_DTCMPSEL_PCI_SYNC )
#define PWM_USER_PG4IOCON1_SWAP		( PWM_DRV_PGIOCON_SWAP_DISABLE )
#define PWM_USER_PG4IOCON1_PPSEN	( PWM_DRV_PGIOCON_PPSEN_DISABLE )
#define PWM_USER_PG4IOCON1_FORCEON	( 0u )
#define PWM_USER_PG4IOCON1_CAPTRSEL ( 0u )
#define PWM_USER_PG4IOCON1_CAPTREN  ( 0u )
#define PWM_USER_PG4IOCON1_CAPEN	( 0u )
#define PWM_USER_PG4IOCON1_CAPSRC	( PWM_DRV_PGIOCON_CAPSRC_SOFTWARE )
/*----------------------------------------------------------------------------*/
/* PG4IOCON2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4IOCON2_DBDAT	( PWM_DRV_PGIOCON_DBDAT_HL_LL )
#define PWM_USER_PG4IOCON2_FFDAT	( PWM_DRV_PGIOCON_FFDAT_HL_LL )
#define PWM_USER_PG4IOCON2_CLDAT	( PWM_DRV_PGIOCON_CLDAT_HL_LL )
#define PWM_USER_PG4IOCON2_FLT1DAT	( PWM_DRV_PGIOCON_FLTDAT_HL_LL )
#define PWM_USER_PG4IOCON2_FLT2DAT	( PWM_DRV_PGIOCON_FLTDAT_HL_LL )
#define PWM_USER_PG4IOCON2_OSYNC	( PWM_DRV_PGIOCON_OSYNC_TIMEBASE )
#define PWM_USER_PG4IOCON2_OVRDAT	( PWM_DRV_PGIOCON_OVRDAT_HL_LL )
#define PWM_USER_PG4IOCON2_OVRENL	( PWM_DRV_PGIOCON_OVRENL_DISABLE )
#define PWM_USER_PG4IOCON2_OVRENH	( PWM_DRV_PGIOCON_OVRENH_DISABLE )
#define PWM_USER_PG4IOCON2_CLMOD	( PWM_DRV_PGIOCON_CLMOD_CLDAT)
/*----------------------------------------------------------------------------*/
/* PG4EVT1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4EVT1_ADTR1EN1	( PWM_DRV_PGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_PG4EVT1_ADTR1EN2	( PWM_DRV_PGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_PG4EVT1_ADTR1EN3	( PWM_DRV_PGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_PG4EVT1_ADTR1PS	( 0u )
#define PWM_USER_PG4EVT1_ADTR1OFS	( PWM_DRV_PGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_PG4EVT1_DACTREN1	( 0u )
#define PWM_USER_PG4EVT1_DACTREN2	( 0u )
#define PWM_USER_PG4EVT1_PGTRGSEL	( PWM_DRV_PGEVT_PGTRGSEL_EOC )
#define PWM_USER_PG4EVT1_UPDTRG		( PWM_DRV_PGEVT_UPDTRG_MANUAL )
#define PWM_USER_PG4EVT1_PWMPCI		( PWM_DRV_PGEVT_PWMPCI_PWMGEN1 )
#define PWM_USER_PG4EVT1_IEVTSEL	( PWM_DRV_PGEVT_IEVTSEL_EOC )
#define PWM_USER_PG4EVT1_SIEN		( PWM_DRV_PGEVT_SIEN_DISABLE)
#define PWM_USER_PG4EVT1_FFIEN		( PWM_DRV_PGEVT_FFIEN_DISABLE )
#define PWM_USER_PG4EVT1_CLIEN		( PWM_DRV_PGEVT_CLIEN_DISABLE )
#define PWM_USER_PG4EVT1_FLT1IEN	( PWM_DRV_PGEVT_FLTIEN_DISABLE )
#define PWM_USER_PG4EVT1_FLT2IEN	( PWM_DRV_PGEVT_FLTIEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG4EVT2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4EVT2_ADTR2EN1	( PWM_DRV_PGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_PG4EVT2_ADTR2EN2	( PWM_DRV_PGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_PG4EVT2_ADTR2EN3	( PWM_DRV_PGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_PG4EVT2_ADTR2PS	( 0u )
#define PWM_USER_PG4EVT2_ADTR2OFS	( PWM_DRV_PGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_PG4EVT2_CAPTRPS	( 0u )
#define PWM_USER_PG4EVT2_CAPTROFS	( 0u )
/*----------------------------------------------------------------------------*/
/* PG4F1PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4F1PCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG4F1PCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG4F1PCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG4F1PCI1_SWTERM	( 0u )
#define PWM_USER_PG4F1PCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG4F1PCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG4F1PCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG4F1PCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG4F1PCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG4F1PCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG4F1PCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG4F1PCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG4F1PCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG4F1PCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG4F1PCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG4F1PCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG4F1PCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG4F1PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4F1PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG4F2PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4F2PCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG4F2PCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG4F2PCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG4F2PCI1_SWTERM	( 0u )
#define PWM_USER_PG4F2PCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG4F2PCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG4F2PCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG4F2PCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG4F2PCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG4F2PCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG4F2PCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG4F2PCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG4F2PCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG4F2PCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG4F2PCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG4F2PCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG4F2PCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG4F2PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4F2PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG4CLPCI */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4CLPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG4CLPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG4CLPCI1_PSYNC		( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG4CLPCI1_SWTERM	( 0u )
#define PWM_USER_PG4CLPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG4CLPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG4CLPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG4CLPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG4CLPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG4CLPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG4CLPCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG4CLPCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG4CLPCI1_SWPCI		( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG4CLPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG4CLPCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG4CLPCI1_BPSEL		( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG4CLPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG4CLPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4CLPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG4FFPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4FFPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG4FFPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG4FFPCI1_PSYNC		( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG4FFPCI1_SWTERM	( 0u )
#define PWM_USER_PG4FFPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG4FFPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG4FFPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG4FFPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG4FFPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG4FFPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG4FFPCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG4FFPCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG4FFPCI1_SWPCI		( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG4FFPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG4FFPCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG4FFPCI1_BPSEL		( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG4FFPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG4FFPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4FFPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG4SPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4SPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG4SPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG4SPCI1_PSYNC		( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG4SPCI1_SWTERM		( 0u )
#define PWM_USER_PG4SPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG4SPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG4SPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG4SPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG4SPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG4SPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG4SPCI1_LATMOD		( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG4SPCI1_SWPCIM		( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG4SPCI1_SWPCI		( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG4SPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG4SPCI1_TERMPS		( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG4SPCI1_BPSEL		( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG4SPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG4SPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4SPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG4LEB */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4LEB_LEB			( 0u )
#define PWM_USER_PG4LEB_PLF			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG4LEB_PLR			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG4LEB_PHF			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG4LEB_PHR			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG4LEB_TRGA		( 0U )
#define PWM_USER_PG4LEB_TRGB		( 0U )
#define PWM_USER_PG4LEB_TRGC		( 0U )
#define PWM_USER_PG4LEB_TRGD		( 0U )
/*----------------------------------------------------------------------------*/
/* PG4PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* PG4PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4PHASE_PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* PG4DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4DC	( 0U )
/*----------------------------------------------------------------------------*/
/* PG4DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4DC_DC	( 0U )
/*----------------------------------------------------------------------------*/
/* PG4DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* PG4DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4DCA_DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* PG4PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4PER	( 0U )
/*----------------------------------------------------------------------------*/
/* PG4PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4PER_PER	( 0U )
/*----------------------------------------------------------------------------*/
/* PG4TRIGAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4TRIGA_TRIGA		( 0u )
#define PWM_USER_PG4TRIGA_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG4TRIGBレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4TRIGB_TRIGB		( 0u )
#define PWM_USER_PG4TRIGB_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG4TRIGCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4TRIGC_TRIGC		( 0u )
#define PWM_USER_PG4TRIGC_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG4TRIGDレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4TRIGD_TRIGD		( 0U )
#define PWM_USER_PG4TRIGD_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG4TRIGEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4TRIGE_TRIGE		( 0U )
#define PWM_USER_PG4TRIGE_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG4TRIGFレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4TRIGF_TRIGF		( 0U )
#define PWM_USER_PG4TRIGF_CAHALF	( PWM_DRV_PGTRIG_FIRST )

/*----------------------------------------------------------------------------*/
/* PG4DTレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4DT_DTL	( 0U )
#define PWM_USER_PG4DT_DTH	( 0U )
/*----------------------------------------------------------------------------*/
/* PG4CAPレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG4CAP	( 0U )

/*----------------------------------------------------------------------------*/
/* PG5CON */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5CON_MODSEL		( PWM_DRV_PGCON_MODSEL_INDEPENDENT_EDGE )
#define PWM_USER_PG5CON_CLKSEL		( PWM_DRV_PGCON_CLKSEL_MCLKSEL )
#define PWM_USER_PG5CON_HREN		( 0U )
#define PWM_USER_PG5CON_TRGCNT		( PWM_DRV_PGCON_TRGCNT_1CYCLE)
#define PWM_USER_PG5CON_ON			( PWM_DRV_PGCON_ON_ENABLE )
#define PWM_USER_PG5CON_SOCS		( PWM_DRV_PGCON_SOCS_LOCAL_EOC )
#define PWM_USER_PG5CON_TRGMOD		( PWM_DRV_PGCON_TRGMOD_SINGLE_TRIGGER )
#define PWM_USER_PG5CON_UPDMOD		( PWM_DRV_PGCON_UPDMOD_SOC )
#define PWM_USER_PG5CON_MSTEN		( PWM_DRV_PGCON_MSTEN_DISABLE )
#define PWM_USER_PG5CON_MPHSEL		( PWM_DRV_PGCON_MPHSEL_PGPHASE )
#define PWM_USER_PG5CON_MPERSEL		( PWM_DRV_PGCON_MPERSEL_PGPER )
#define PWM_USER_PG5CON_MDCSEL		( PWM_DRV_PGCON_MDCSEL_PGDC )

/*----------------------------------------------------------------------------*/
/* PG5STATレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5STAT_TRIG	( 0U )
#define PWM_USER_PG5STAT_CAHALF	( 0U )
#define PWM_USER_PG5STAT_STEER	( 0U )
#define PWM_USER_PG5STAT_UPDREQ	( 0U )
#define PWM_USER_PG5STAT_UPDATE	( 0U )
#define PWM_USER_PG5STAT_CAP	( 0U )
#define PWM_USER_PG5STAT_TRCLR	( 0U )
#define PWM_USER_PG5STAT_TRSET	( 0U )
#define PWM_USER_PG5STAT_FFACT	( 0U )
#define PWM_USER_PG5STAT_CLACT	( 0U )
#define PWM_USER_PG5STAT_FLT1ACT	( 0U )
#define PWM_USER_PG5STAT_FLT2ACT	( 0U )
#define PWM_USER_PG5STAT_SACT	( 0U )
#define PWM_USER_PG5STAT_CAPTR	( 0U )
#define PWM_USER_PG5STAT_FFEVT	( 0U )
#define PWM_USER_PG5STAT_CLEVT	( 0U )
#define PWM_USER_PG5STAT_FLT1EVT	( 0U )
#define PWM_USER_PG5STAT_FLT2EVT	( 0U )
#define PWM_USER_PG5STAT_SEVT	( 0U )

/*----------------------------------------------------------------------------*/
/* PG5IOCON1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5IOCON1_POLL		( PWM_DRV_PGIOCON_POLL_ACTIVE_HIGH )
#define PWM_USER_PG5IOCON1_POLH		( PWM_DRV_PGIOCON_POLH_ACTIVE_HIGH )
#define PWM_USER_PG5IOCON1_PENL		( PWM_DRV_PGIOCON_PENL_DISABLE )
#define PWM_USER_PG5IOCON1_PENH		( PWM_DRV_PGIOCON_PENH_DISABLE )
#define PWM_USER_PG5IOCON1_PMOD		( PWM_DRV_PGIOCON_PMOD_COMPLEMENTARY )
#define PWM_USER_PG5IOCON1_DTCMPSEL	( PWM_DRV_PGIOCON_DTCMPSEL_PCI_SYNC )
#define PWM_USER_PG5IOCON1_SWAP		( PWM_DRV_PGIOCON_SWAP_DISABLE )
#define PWM_USER_PG5IOCON1_PPSEN	( PWM_DRV_PGIOCON_PPSEN_DISABLE )
#define PWM_USER_PG5IOCON1_FORCEON	( 0u )
#define PWM_USER_PG5IOCON1_CAPTRSEL ( 0u )
#define PWM_USER_PG5IOCON1_CAPTREN  ( 0u )
#define PWM_USER_PG5IOCON1_CAPEN	( 0u )
#define PWM_USER_PG5IOCON1_CAPSRC	( PWM_DRV_PGIOCON_CAPSRC_SOFTWARE )
/*----------------------------------------------------------------------------*/
/* PG5IOCON2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5IOCON2_DBDAT	( PWM_DRV_PGIOCON_DBDAT_HL_LL )
#define PWM_USER_PG5IOCON2_FFDAT	( PWM_DRV_PGIOCON_FFDAT_HL_LL )
#define PWM_USER_PG5IOCON2_CLDAT	( PWM_DRV_PGIOCON_CLDAT_HL_LL )
#define PWM_USER_PG5IOCON2_FLT1DAT	( PWM_DRV_PGIOCON_FLTDAT_HL_LL )
#define PWM_USER_PG5IOCON2_FLT2DAT	( PWM_DRV_PGIOCON_FLTDAT_HL_LL )
#define PWM_USER_PG5IOCON2_OSYNC	( PWM_DRV_PGIOCON_OSYNC_TIMEBASE )
#define PWM_USER_PG5IOCON2_OVRDAT	( PWM_DRV_PGIOCON_OVRDAT_HL_LL )
#define PWM_USER_PG5IOCON2_OVRENL	( PWM_DRV_PGIOCON_OVRENL_DISABLE )
#define PWM_USER_PG5IOCON2_OVRENH	( PWM_DRV_PGIOCON_OVRENH_DISABLE )
#define PWM_USER_PG5IOCON2_CLMOD	( PWM_DRV_PGIOCON_CLMOD_CLDAT)
/*----------------------------------------------------------------------------*/
/* PG5EVT1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5EVT1_ADTR1EN1	( PWM_DRV_PGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_PG5EVT1_ADTR1EN2	( PWM_DRV_PGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_PG5EVT1_ADTR1EN3	( PWM_DRV_PGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_PG5EVT1_ADTR1PS	( 0u )
#define PWM_USER_PG5EVT1_ADTR1OFS	( PWM_DRV_PGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_PG5EVT1_DACTREN1	( 0u )
#define PWM_USER_PG5EVT1_DACTREN2	( 0u )
#define PWM_USER_PG5EVT1_PGTRGSEL	( PWM_DRV_PGEVT_PGTRGSEL_EOC )
#define PWM_USER_PG5EVT1_UPDTRG		( PWM_DRV_PGEVT_UPDTRG_MANUAL )
#define PWM_USER_PG5EVT1_PWMPCI		( PWM_DRV_PGEVT_PWMPCI_PWMGEN1 )
#define PWM_USER_PG5EVT1_IEVTSEL	( PWM_DRV_PGEVT_IEVTSEL_EOC )
#define PWM_USER_PG5EVT1_SIEN		( PWM_DRV_PGEVT_SIEN_DISABLE)
#define PWM_USER_PG5EVT1_FFIEN		( PWM_DRV_PGEVT_FFIEN_DISABLE )
#define PWM_USER_PG5EVT1_CLIEN		( PWM_DRV_PGEVT_CLIEN_DISABLE )
#define PWM_USER_PG5EVT1_FLT1IEN	( PWM_DRV_PGEVT_FLTIEN_DISABLE )
#define PWM_USER_PG5EVT1_FLT2IEN	( PWM_DRV_PGEVT_FLTIEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG5EVT2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5EVT2_ADTR2EN1	( PWM_DRV_PGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_PG5EVT2_ADTR2EN2	( PWM_DRV_PGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_PG5EVT2_ADTR2EN3	( PWM_DRV_PGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_PG5EVT2_ADTR2PS	( 0u )
#define PWM_USER_PG5EVT2_ADTR2OFS	( PWM_DRV_PGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_PG5EVT2_CAPTRPS	( 0u )
#define PWM_USER_PG5EVT2_CAPTROFS	( 0u )
/*----------------------------------------------------------------------------*/
/* PG5F1PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5F1PCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG5F1PCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG5F1PCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG5F1PCI1_SWTERM	( 0u )
#define PWM_USER_PG5F1PCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG5F1PCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG5F1PCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG5F1PCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG5F1PCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG5F1PCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG5F1PCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG5F1PCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG5F1PCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG5F1PCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG5F1PCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG5F1PCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG5F1PCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG5F1PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5F1PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG5F2PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5F2PCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG5F2PCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG5F2PCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG5F2PCI1_SWTERM	( 0u )
#define PWM_USER_PG5F2PCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG5F2PCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG5F2PCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG5F2PCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG5F2PCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG5F2PCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG5F2PCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG5F2PCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG5F2PCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG5F2PCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG5F2PCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG5F2PCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG5F2PCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG5F2PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5F2PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG5CLPCI */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5CLPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG5CLPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG5CLPCI1_PSYNC		( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG5CLPCI1_SWTERM	( 0u )
#define PWM_USER_PG5CLPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG5CLPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG5CLPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG5CLPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG5CLPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG5CLPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG5CLPCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG5CLPCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG5CLPCI1_SWPCI		( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG5CLPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG5CLPCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG5CLPCI1_BPSEL		( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG5CLPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG5CLPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5CLPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG5FFPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5FFPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG5FFPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG5FFPCI1_PSYNC		( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG5FFPCI1_SWTERM	( 0u )
#define PWM_USER_PG5FFPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG5FFPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG5FFPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG5FFPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG5FFPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG5FFPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG5FFPCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG5FFPCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG5FFPCI1_SWPCI		( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG5FFPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG5FFPCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG5FFPCI1_BPSEL		( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG5FFPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG5FFPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5FFPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG5SPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5SPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG5SPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG5SPCI1_PSYNC		( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG5SPCI1_SWTERM		( 0u )
#define PWM_USER_PG5SPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG5SPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG5SPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG5SPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG5SPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG5SPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG5SPCI1_LATMOD		( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG5SPCI1_SWPCIM		( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG5SPCI1_SWPCI		( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG5SPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG5SPCI1_TERMPS		( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG5SPCI1_BPSEL		( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG5SPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG5SPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5SPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG5LEB */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5LEB_LEB			( 0u )
#define PWM_USER_PG5LEB_PLF			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG5LEB_PLR			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG5LEB_PHF			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG5LEB_PHR			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG5LEB_TRGA		( 0U )
#define PWM_USER_PG5LEB_TRGB		( 0U )
#define PWM_USER_PG5LEB_TRGC		( 0U )
#define PWM_USER_PG5LEB_TRGD		( 0U )
/*----------------------------------------------------------------------------*/
/* PG5PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* PG5PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5PHASE_PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* PG5DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5DC	( 0U )
/*----------------------------------------------------------------------------*/
/* PG5DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5DC_DC	( 0U )
/*----------------------------------------------------------------------------*/
/* PG5DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* PG5DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5DCA_DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* PG5PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5PER	( 0U )
/*----------------------------------------------------------------------------*/
/* PG5PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5PER_PER	( 0U )
/*----------------------------------------------------------------------------*/
/* PG5TRIGAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5TRIGA_TRIGA		( 0u )
#define PWM_USER_PG5TRIGA_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG5TRIGBレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5TRIGB_TRIGB		( 0u )
#define PWM_USER_PG5TRIGB_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG5TRIGCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5TRIGC_TRIGC		( 0u )
#define PWM_USER_PG5TRIGC_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG5TRIGDレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5TRIGD_TRIGD		( 0U )
#define PWM_USER_PG5TRIGD_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG5TRIGEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5TRIGE_TRIGE		( 0U )
#define PWM_USER_PG5TRIGE_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG5TRIGFレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5TRIGF_TRIGF		( 0U )
#define PWM_USER_PG5TRIGF_CAHALF	( PWM_DRV_PGTRIG_FIRST )

/*----------------------------------------------------------------------------*/
/* PG5DTレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5DT_DTL	( 0U )
#define PWM_USER_PG5DT_DTH	( 0U )
/*----------------------------------------------------------------------------*/
/* PG5CAPレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG5CAP	( 0U )

/*----------------------------------------------------------------------------*/
/* PG6CON */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6CON_MODSEL		( PWM_DRV_PGCON_MODSEL_INDEPENDENT_EDGE )
#define PWM_USER_PG6CON_CLKSEL		( PWM_DRV_PGCON_CLKSEL_MCLKSEL )
#define PWM_USER_PG6CON_HREN		( 0U )
#define PWM_USER_PG6CON_TRGCNT		( PWM_DRV_PGCON_TRGCNT_1CYCLE)
#define PWM_USER_PG6CON_ON			( PWM_DRV_PGCON_ON_ENABLE )
#define PWM_USER_PG6CON_SOCS		( PWM_DRV_PGCON_SOCS_LOCAL_EOC )
#define PWM_USER_PG6CON_TRGMOD		( PWM_DRV_PGCON_TRGMOD_SINGLE_TRIGGER )
#define PWM_USER_PG6CON_UPDMOD		( PWM_DRV_PGCON_UPDMOD_SOC )
#define PWM_USER_PG6CON_MSTEN		( PWM_DRV_PGCON_MSTEN_DISABLE )
#define PWM_USER_PG6CON_MPHSEL		( PWM_DRV_PGCON_MPHSEL_PGPHASE )
#define PWM_USER_PG6CON_MPERSEL		( PWM_DRV_PGCON_MPERSEL_PGPER )
#define PWM_USER_PG6CON_MDCSEL		( PWM_DRV_PGCON_MDCSEL_PGDC )

/*----------------------------------------------------------------------------*/
/* PG6STATレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6STAT_TRIG	( 0U )
#define PWM_USER_PG6STAT_CAHALF	( 0U )
#define PWM_USER_PG6STAT_STEER	( 0U )
#define PWM_USER_PG6STAT_UPDREQ	( 0U )
#define PWM_USER_PG6STAT_UPDATE	( 0U )
#define PWM_USER_PG6STAT_CAP	( 0U )
#define PWM_USER_PG6STAT_TRCLR	( 0U )
#define PWM_USER_PG6STAT_TRSET	( 0U )
#define PWM_USER_PG6STAT_FFACT	( 0U )
#define PWM_USER_PG6STAT_CLACT	( 0U )
#define PWM_USER_PG6STAT_FLT1ACT	( 0U )
#define PWM_USER_PG6STAT_FLT2ACT	( 0U )
#define PWM_USER_PG6STAT_SACT	( 0U )
#define PWM_USER_PG6STAT_CAPTR	( 0U )
#define PWM_USER_PG6STAT_FFEVT	( 0U )
#define PWM_USER_PG6STAT_CLEVT	( 0U )
#define PWM_USER_PG6STAT_FLT1EVT	( 0U )
#define PWM_USER_PG6STAT_FLT2EVT	( 0U )
#define PWM_USER_PG6STAT_SEVT	( 0U )

/*----------------------------------------------------------------------------*/
/* PG6IOCON1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6IOCON1_POLL		( PWM_DRV_PGIOCON_POLL_ACTIVE_HIGH )
#define PWM_USER_PG6IOCON1_POLH		( PWM_DRV_PGIOCON_POLH_ACTIVE_HIGH )
#define PWM_USER_PG6IOCON1_PENL		( PWM_DRV_PGIOCON_PENL_DISABLE )
#define PWM_USER_PG6IOCON1_PENH		( PWM_DRV_PGIOCON_PENH_DISABLE )
#define PWM_USER_PG6IOCON1_PMOD		( PWM_DRV_PGIOCON_PMOD_COMPLEMENTARY )
#define PWM_USER_PG6IOCON1_DTCMPSEL	( PWM_DRV_PGIOCON_DTCMPSEL_PCI_SYNC )
#define PWM_USER_PG6IOCON1_SWAP		( PWM_DRV_PGIOCON_SWAP_DISABLE )
#define PWM_USER_PG6IOCON1_PPSEN	( PWM_DRV_PGIOCON_PPSEN_DISABLE )
#define PWM_USER_PG6IOCON1_FORCEON	( 0u )
#define PWM_USER_PG6IOCON1_CAPTRSEL ( 0u )
#define PWM_USER_PG6IOCON1_CAPTREN  ( 0u )
#define PWM_USER_PG6IOCON1_CAPEN	( 0u )
#define PWM_USER_PG6IOCON1_CAPSRC	( PWM_DRV_PGIOCON_CAPSRC_SOFTWARE )
/*----------------------------------------------------------------------------*/
/* PG6IOCON2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6IOCON2_DBDAT	( PWM_DRV_PGIOCON_DBDAT_HL_LL )
#define PWM_USER_PG6IOCON2_FFDAT	( PWM_DRV_PGIOCON_FFDAT_HL_LL )
#define PWM_USER_PG6IOCON2_CLDAT	( PWM_DRV_PGIOCON_CLDAT_HL_LL )
#define PWM_USER_PG6IOCON2_FLT1DAT	( PWM_DRV_PGIOCON_FLTDAT_HL_LL )
#define PWM_USER_PG6IOCON2_FLT2DAT	( PWM_DRV_PGIOCON_FLTDAT_HL_LL )
#define PWM_USER_PG6IOCON2_OSYNC	( PWM_DRV_PGIOCON_OSYNC_TIMEBASE )
#define PWM_USER_PG6IOCON2_OVRDAT	( PWM_DRV_PGIOCON_OVRDAT_HL_LL )
#define PWM_USER_PG6IOCON2_OVRENL	( PWM_DRV_PGIOCON_OVRENL_DISABLE )
#define PWM_USER_PG6IOCON2_OVRENH	( PWM_DRV_PGIOCON_OVRENH_DISABLE )
#define PWM_USER_PG6IOCON2_CLMOD	( PWM_DRV_PGIOCON_CLMOD_CLDAT)
/*----------------------------------------------------------------------------*/
/* PG6EVT1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6EVT1_ADTR1EN1	( PWM_DRV_PGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_PG6EVT1_ADTR1EN2	( PWM_DRV_PGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_PG6EVT1_ADTR1EN3	( PWM_DRV_PGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_PG6EVT1_ADTR1PS	( 0u )
#define PWM_USER_PG6EVT1_ADTR1OFS	( PWM_DRV_PGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_PG6EVT1_DACTREN1	( 0u )
#define PWM_USER_PG6EVT1_DACTREN2	( 0u )
#define PWM_USER_PG6EVT1_PGTRGSEL	( PWM_DRV_PGEVT_PGTRGSEL_EOC )
#define PWM_USER_PG6EVT1_UPDTRG		( PWM_DRV_PGEVT_UPDTRG_MANUAL )
#define PWM_USER_PG6EVT1_PWMPCI		( PWM_DRV_PGEVT_PWMPCI_PWMGEN1 )
#define PWM_USER_PG6EVT1_IEVTSEL	( PWM_DRV_PGEVT_IEVTSEL_EOC )
#define PWM_USER_PG6EVT1_SIEN		( PWM_DRV_PGEVT_SIEN_DISABLE)
#define PWM_USER_PG6EVT1_FFIEN		( PWM_DRV_PGEVT_FFIEN_DISABLE )
#define PWM_USER_PG6EVT1_CLIEN		( PWM_DRV_PGEVT_CLIEN_DISABLE )
#define PWM_USER_PG6EVT1_FLT1IEN	( PWM_DRV_PGEVT_FLTIEN_DISABLE )
#define PWM_USER_PG6EVT1_FLT2IEN	( PWM_DRV_PGEVT_FLTIEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG6EVT2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6EVT2_ADTR2EN1	( PWM_DRV_PGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_PG6EVT2_ADTR2EN2	( PWM_DRV_PGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_PG6EVT2_ADTR2EN3	( PWM_DRV_PGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_PG6EVT2_ADTR2PS	( 0u )
#define PWM_USER_PG6EVT2_ADTR2OFS	( PWM_DRV_PGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_PG6EVT2_CAPTRPS	( 0u )
#define PWM_USER_PG6EVT2_CAPTROFS	( 0u )
/*----------------------------------------------------------------------------*/
/* PG6F1PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6F1PCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG6F1PCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG6F1PCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG6F1PCI1_SWTERM	( 0u )
#define PWM_USER_PG6F1PCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG6F1PCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG6F1PCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG6F1PCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG6F1PCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG6F1PCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG6F1PCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG6F1PCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG6F1PCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG6F1PCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG6F1PCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG6F1PCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG6F1PCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG6F1PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6F1PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG6F2PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6F2PCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG6F2PCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG6F2PCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG6F2PCI1_SWTERM	( 0u )
#define PWM_USER_PG6F2PCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG6F2PCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG6F2PCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG6F2PCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG6F2PCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG6F2PCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG6F2PCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG6F2PCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG6F2PCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG6F2PCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG6F2PCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG6F2PCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG6F2PCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG6F2PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6F2PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG6CLPCI */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6CLPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG6CLPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG6CLPCI1_PSYNC		( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG6CLPCI1_SWTERM	( 0u )
#define PWM_USER_PG6CLPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG6CLPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG6CLPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG6CLPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG6CLPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG6CLPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG6CLPCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG6CLPCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG6CLPCI1_SWPCI		( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG6CLPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG6CLPCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG6CLPCI1_BPSEL		( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG6CLPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG6CLPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6CLPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG6FFPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6FFPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG6FFPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG6FFPCI1_PSYNC		( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG6FFPCI1_SWTERM	( 0u )
#define PWM_USER_PG6FFPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG6FFPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG6FFPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG6FFPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG6FFPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG6FFPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG6FFPCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG6FFPCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG6FFPCI1_SWPCI		( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG6FFPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG6FFPCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG6FFPCI1_BPSEL		( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG6FFPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG6FFPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6FFPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG6SPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6SPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG6SPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG6SPCI1_PSYNC		( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG6SPCI1_SWTERM		( 0u )
#define PWM_USER_PG6SPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG6SPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG6SPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG6SPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG6SPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG6SPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG6SPCI1_LATMOD		( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG6SPCI1_SWPCIM		( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG6SPCI1_SWPCI		( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG6SPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG6SPCI1_TERMPS		( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG6SPCI1_BPSEL		( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG6SPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG6SPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6SPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG6LEB */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6LEB_LEB			( 0u )
#define PWM_USER_PG6LEB_PLF			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG6LEB_PLR			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG6LEB_PHF			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG6LEB_PHR			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG6LEB_TRGA		( 0U )
#define PWM_USER_PG6LEB_TRGB		( 0U )
#define PWM_USER_PG6LEB_TRGC		( 0U )
#define PWM_USER_PG6LEB_TRGD		( 0U )
/*----------------------------------------------------------------------------*/
/* PG6PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* PG6PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6PHASE_PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* PG6DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6DC	( 0U )
/*----------------------------------------------------------------------------*/
/* PG6DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6DC_DC	( 0U )
/*----------------------------------------------------------------------------*/
/* PG6DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* PG6DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6DCA_DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* PG6PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6PER	( 0U )
/*----------------------------------------------------------------------------*/
/* PG6PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6PER_PER	( 0U )
/*----------------------------------------------------------------------------*/
/* PG6TRIGAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6TRIGA_TRIGA		( 0u )
#define PWM_USER_PG6TRIGA_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG6TRIGBレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6TRIGB_TRIGB		( 0u )
#define PWM_USER_PG6TRIGB_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG6TRIGCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6TRIGC_TRIGC		( 0u )
#define PWM_USER_PG6TRIGC_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG6TRIGDレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6TRIGD_TRIGD		( 0U )
#define PWM_USER_PG6TRIGD_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG6TRIGEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6TRIGE_TRIGE		( 0U )
#define PWM_USER_PG6TRIGE_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG6TRIGFレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6TRIGF_TRIGF		( 0U )
#define PWM_USER_PG6TRIGF_CAHALF	( PWM_DRV_PGTRIG_FIRST )

/*----------------------------------------------------------------------------*/
/* PG6DTレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6DT_DTL	( 0U )
#define PWM_USER_PG6DT_DTH	( 0U )
/*----------------------------------------------------------------------------*/
/* PG6CAPレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG6CAP	( 0U )

/*----------------------------------------------------------------------------*/
/* PG7CON */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7CON_MODSEL		( PWM_DRV_PGCON_MODSEL_INDEPENDENT_EDGE )
#define PWM_USER_PG7CON_CLKSEL		( PWM_DRV_PGCON_CLKSEL_MCLKSEL )
#define PWM_USER_PG7CON_HREN		( 0U )
#define PWM_USER_PG7CON_TRGCNT		( PWM_DRV_PGCON_TRGCNT_1CYCLE)
#define PWM_USER_PG7CON_ON			( PWM_DRV_PGCON_ON_ENABLE )
#define PWM_USER_PG7CON_SOCS		( PWM_DRV_PGCON_SOCS_LOCAL_EOC )
#define PWM_USER_PG7CON_TRGMOD		( PWM_DRV_PGCON_TRGMOD_SINGLE_TRIGGER )
#define PWM_USER_PG7CON_UPDMOD		( PWM_DRV_PGCON_UPDMOD_SOC )
#define PWM_USER_PG7CON_MSTEN		( PWM_DRV_PGCON_MSTEN_DISABLE )
#define PWM_USER_PG7CON_MPHSEL		( PWM_DRV_PGCON_MPHSEL_PGPHASE )
#define PWM_USER_PG7CON_MPERSEL		( PWM_DRV_PGCON_MPERSEL_PGPER )
#define PWM_USER_PG7CON_MDCSEL		( PWM_DRV_PGCON_MDCSEL_PGDC )

/*----------------------------------------------------------------------------*/
/* PG7STATレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7STAT_TRIG	( 0U )
#define PWM_USER_PG7STAT_CAHALF	( 0U )
#define PWM_USER_PG7STAT_STEER	( 0U )
#define PWM_USER_PG7STAT_UPDREQ	( 0U )
#define PWM_USER_PG7STAT_UPDATE	( 0U )
#define PWM_USER_PG7STAT_CAP	( 0U )
#define PWM_USER_PG7STAT_TRCLR	( 0U )
#define PWM_USER_PG7STAT_TRSET	( 0U )
#define PWM_USER_PG7STAT_FFACT	( 0U )
#define PWM_USER_PG7STAT_CLACT	( 0U )
#define PWM_USER_PG7STAT_FLT1ACT	( 0U )
#define PWM_USER_PG7STAT_FLT2ACT	( 0U )
#define PWM_USER_PG7STAT_SACT	( 0U )
#define PWM_USER_PG7STAT_CAPTR	( 0U )
#define PWM_USER_PG7STAT_FFEVT	( 0U )
#define PWM_USER_PG7STAT_CLEVT	( 0U )
#define PWM_USER_PG7STAT_FLT1EVT	( 0U )
#define PWM_USER_PG7STAT_FLT2EVT	( 0U )
#define PWM_USER_PG7STAT_SEVT	( 0U )

/*----------------------------------------------------------------------------*/
/* PG7IOCON1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7IOCON1_POLL		( PWM_DRV_PGIOCON_POLL_ACTIVE_HIGH )
#define PWM_USER_PG7IOCON1_POLH		( PWM_DRV_PGIOCON_POLH_ACTIVE_HIGH )
#define PWM_USER_PG7IOCON1_PENL		( PWM_DRV_PGIOCON_PENL_DISABLE )
#define PWM_USER_PG7IOCON1_PENH		( PWM_DRV_PGIOCON_PENH_DISABLE )
#define PWM_USER_PG7IOCON1_PMOD		( PWM_DRV_PGIOCON_PMOD_COMPLEMENTARY )
#define PWM_USER_PG7IOCON1_DTCMPSEL	( PWM_DRV_PGIOCON_DTCMPSEL_PCI_SYNC )
#define PWM_USER_PG7IOCON1_SWAP		( PWM_DRV_PGIOCON_SWAP_DISABLE )
#define PWM_USER_PG7IOCON1_PPSEN	( PWM_DRV_PGIOCON_PPSEN_DISABLE )
#define PWM_USER_PG7IOCON1_FORCEON	( 0u )
#define PWM_USER_PG7IOCON1_CAPTRSEL ( 0u )
#define PWM_USER_PG7IOCON1_CAPTREN  ( 0u )
#define PWM_USER_PG7IOCON1_CAPEN	( 0u )
#define PWM_USER_PG7IOCON1_CAPSRC	( PWM_DRV_PGIOCON_CAPSRC_SOFTWARE )
/*----------------------------------------------------------------------------*/
/* PG7IOCON2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7IOCON2_DBDAT	( PWM_DRV_PGIOCON_DBDAT_HL_LL )
#define PWM_USER_PG7IOCON2_FFDAT	( PWM_DRV_PGIOCON_FFDAT_HL_LL )
#define PWM_USER_PG7IOCON2_CLDAT	( PWM_DRV_PGIOCON_CLDAT_HL_LL )
#define PWM_USER_PG7IOCON2_FLT1DAT	( PWM_DRV_PGIOCON_FLTDAT_HL_LL )
#define PWM_USER_PG7IOCON2_FLT2DAT	( PWM_DRV_PGIOCON_FLTDAT_HL_LL )
#define PWM_USER_PG7IOCON2_OSYNC	( PWM_DRV_PGIOCON_OSYNC_TIMEBASE )
#define PWM_USER_PG7IOCON2_OVRDAT	( PWM_DRV_PGIOCON_OVRDAT_HL_LL )
#define PWM_USER_PG7IOCON2_OVRENL	( PWM_DRV_PGIOCON_OVRENL_DISABLE )
#define PWM_USER_PG7IOCON2_OVRENH	( PWM_DRV_PGIOCON_OVRENH_DISABLE )
#define PWM_USER_PG7IOCON2_CLMOD	( PWM_DRV_PGIOCON_CLMOD_CLDAT)
/*----------------------------------------------------------------------------*/
/* PG7EVT1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7EVT1_ADTR1EN1	( PWM_DRV_PGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_PG7EVT1_ADTR1EN2	( PWM_DRV_PGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_PG7EVT1_ADTR1EN3	( PWM_DRV_PGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_PG7EVT1_ADTR1PS	( 0u )
#define PWM_USER_PG7EVT1_ADTR1OFS	( PWM_DRV_PGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_PG7EVT1_DACTREN1	( 0u )
#define PWM_USER_PG7EVT1_DACTREN2	( 0u )
#define PWM_USER_PG7EVT1_PGTRGSEL	( PWM_DRV_PGEVT_PGTRGSEL_EOC )
#define PWM_USER_PG7EVT1_UPDTRG		( PWM_DRV_PGEVT_UPDTRG_MANUAL )
#define PWM_USER_PG7EVT1_PWMPCI		( PWM_DRV_PGEVT_PWMPCI_PWMGEN1 )
#define PWM_USER_PG7EVT1_IEVTSEL	( PWM_DRV_PGEVT_IEVTSEL_EOC )
#define PWM_USER_PG7EVT1_SIEN		( PWM_DRV_PGEVT_SIEN_DISABLE)
#define PWM_USER_PG7EVT1_FFIEN		( PWM_DRV_PGEVT_FFIEN_DISABLE )
#define PWM_USER_PG7EVT1_CLIEN		( PWM_DRV_PGEVT_CLIEN_DISABLE )
#define PWM_USER_PG7EVT1_FLT1IEN	( PWM_DRV_PGEVT_FLTIEN_DISABLE )
#define PWM_USER_PG7EVT1_FLT2IEN	( PWM_DRV_PGEVT_FLTIEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG7EVT2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7EVT2_ADTR2EN1	( PWM_DRV_PGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_PG7EVT2_ADTR2EN2	( PWM_DRV_PGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_PG7EVT2_ADTR2EN3	( PWM_DRV_PGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_PG7EVT2_ADTR2PS	( 0u )
#define PWM_USER_PG7EVT2_ADTR2OFS	( PWM_DRV_PGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_PG7EVT2_CAPTRPS	( 0u )
#define PWM_USER_PG7EVT2_CAPTROFS	( 0u )
/*----------------------------------------------------------------------------*/
/* PG7F1PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7F1PCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG7F1PCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG7F1PCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG7F1PCI1_SWTERM	( 0u )
#define PWM_USER_PG7F1PCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG7F1PCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG7F1PCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG7F1PCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG7F1PCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG7F1PCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG7F1PCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG7F1PCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG7F1PCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG7F1PCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG7F1PCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG7F1PCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG7F1PCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG7F1PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7F1PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG7F2PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7F2PCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG7F2PCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG7F2PCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG7F2PCI1_SWTERM	( 0u )
#define PWM_USER_PG7F2PCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG7F2PCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG7F2PCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG7F2PCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG7F2PCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG7F2PCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG7F2PCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG7F2PCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG7F2PCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG7F2PCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG7F2PCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG7F2PCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG7F2PCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG7F2PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7F2PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG7CLPCI */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7CLPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG7CLPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG7CLPCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG7CLPCI1_SWTERM	( 0u )
#define PWM_USER_PG7CLPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG7CLPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG7CLPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG7CLPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG7CLPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG7CLPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG7CLPCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG7CLPCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG7CLPCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG7CLPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG7CLPCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG7CLPCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG7CLPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG7CLPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7CLPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG7FFPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7FFPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG7FFPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG7FFPCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG7FFPCI1_SWTERM	( 0u )
#define PWM_USER_PG7FFPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG7FFPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG7FFPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG7FFPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG7FFPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG7FFPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG7FFPCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG7FFPCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG7FFPCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG7FFPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG7FFPCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG7FFPCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG7FFPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG7FFPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7FFPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG7SPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7SPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG7SPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG7SPCI1_PSYNC		( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG7SPCI1_SWTERM	( 0u )
#define PWM_USER_PG7SPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG7SPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG7SPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG7SPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG7SPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG7SPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG7SPCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG7SPCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG7SPCI1_SWPCI		( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG7SPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG7SPCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG7SPCI1_BPSEL		( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG7SPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG7SPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7SPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG7LEB */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7LEB_LEB			( 0u )
#define PWM_USER_PG7LEB_PLF			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG7LEB_PLR			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG7LEB_PHF			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG7LEB_PHR			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG7LEB_TRGA		( 0U )
#define PWM_USER_PG7LEB_TRGB		( 0U )
#define PWM_USER_PG7LEB_TRGC		( 0U )
#define PWM_USER_PG7LEB_TRGD		( 0U )
/*----------------------------------------------------------------------------*/
/* PG7PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* PG7PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7PHASE_PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* PG7DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7DC	( 0U )
/*----------------------------------------------------------------------------*/
/* PG7DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7DC_DC	( 0U )
/*----------------------------------------------------------------------------*/
/* PG7DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* PG7DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7DCA_DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* PG7PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7PER	( 0U )
/*----------------------------------------------------------------------------*/
/* PG7PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7PER_PER	( 0U )
/*----------------------------------------------------------------------------*/
/* PG7TRIGAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7TRIGA_TRIGA		( 0u )
#define PWM_USER_PG7TRIGA_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG7TRIGBレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7TRIGB_TRIGB		( 0u )
#define PWM_USER_PG7TRIGB_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG7TRIGCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7TRIGC_TRIGC		( 0u )
#define PWM_USER_PG7TRIGC_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG7TRIGDレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7TRIGD_TRIGD		( 0U )
#define PWM_USER_PG7TRIGD_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG7TRIGEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7TRIGE_TRIGE		( 0U )
#define PWM_USER_PG7TRIGE_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG7TRIGFレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7TRIGF_TRIGF		( 0U )
#define PWM_USER_PG7TRIGF_CAHALF	( PWM_DRV_PGTRIG_FIRST )

/*----------------------------------------------------------------------------*/
/* PG7DTレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7DT_DTL	( 0U )
#define PWM_USER_PG7DT_DTH	( 0U )
/*----------------------------------------------------------------------------*/
/* PG7CAPレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG7CAP	( 0U )


/*----------------------------------------------------------------------------*/
/* PG8IOCON1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8IOCON1_POLL		( PWM_DRV_PGIOCON_POLL_ACTIVE_HIGH )
#define PWM_USER_PG8IOCON1_POLH		( PWM_DRV_PGIOCON_POLH_ACTIVE_HIGH )
#define PWM_USER_PG8IOCON1_PENL		( PWM_DRV_PGIOCON_PENL_DISABLE )
#define PWM_USER_PG8IOCON1_PENH		( PWM_DRV_PGIOCON_PENH_DISABLE )
#define PWM_USER_PG8IOCON1_PMOD		( PWM_DRV_PGIOCON_PMOD_COMPLEMENTARY )
#define PWM_USER_PG8IOCON1_DTCMPSEL	( PWM_DRV_PGIOCON_DTCMPSEL_PCI_SYNC )
#define PWM_USER_PG8IOCON1_SWAP		( PWM_DRV_PGIOCON_SWAP_DISABLE )
#define PWM_USER_PG8IOCON1_PPSEN	( PWM_DRV_PGIOCON_PPSEN_DISABLE )
#define PWM_USER_PG8IOCON1_FORCEON	( 0u )
#define PWM_USER_PG8IOCON1_CAPTRSEL ( 0u )
#define PWM_USER_PG8IOCON1_CAPTREN  ( 0u )
#define PWM_USER_PG8IOCON1_CAPEN	( 0u )
#define PWM_USER_PG8IOCON1_CAPSRC	( PWM_DRV_PGIOCON_CAPSRC_SOFTWARE )
/*----------------------------------------------------------------------------*/
/* PG8IOCON2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8IOCON2_DBDAT	( PWM_DRV_PGIOCON_DBDAT_HL_LL )
#define PWM_USER_PG8IOCON2_FFDAT	( PWM_DRV_PGIOCON_FFDAT_HL_LL )
#define PWM_USER_PG8IOCON2_CLDAT	( PWM_DRV_PGIOCON_CLDAT_HL_LL )
#define PWM_USER_PG8IOCON2_FLT1DAT	( PWM_DRV_PGIOCON_FLTDAT_HL_LL )
#define PWM_USER_PG8IOCON2_FLT2DAT	( PWM_DRV_PGIOCON_FLTDAT_HL_LL )
#define PWM_USER_PG8IOCON2_OSYNC	( PWM_DRV_PGIOCON_OSYNC_TIMEBASE )
#define PWM_USER_PG8IOCON2_OVRDAT	( PWM_DRV_PGIOCON_OVRDAT_HL_LL )
#define PWM_USER_PG8IOCON2_OVRENL	( PWM_DRV_PGIOCON_OVRENL_DISABLE )
#define PWM_USER_PG8IOCON2_OVRENH	( PWM_DRV_PGIOCON_OVRENH_DISABLE )
#define PWM_USER_PG8IOCON2_CLMOD	( PWM_DRV_PGIOCON_CLMOD_CLDAT)
/*----------------------------------------------------------------------------*/
/* PG8EVT1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8EVT1_ADTR1EN1	( PWM_DRV_PGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_PG8EVT1_ADTR1EN2	( PWM_DRV_PGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_PG8EVT1_ADTR1EN3	( PWM_DRV_PGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_PG8EVT1_ADTR1PS	( 0u )
#define PWM_USER_PG8EVT1_ADTR1OFS	( PWM_DRV_PGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_PG8EVT1_DACTREN1	( 0u )
#define PWM_USER_PG8EVT1_DACTREN2	( 0u )
#define PWM_USER_PG8EVT1_PGTRGSEL	( PWM_DRV_PGEVT_PGTRGSEL_EOC )
#define PWM_USER_PG8EVT1_UPDTRG		( PWM_DRV_PGEVT_UPDTRG_MANUAL )
#define PWM_USER_PG8EVT1_PWMPCI		( PWM_DRV_PGEVT_PWMPCI_PWMGEN1 )
#define PWM_USER_PG8EVT1_IEVTSEL	( PWM_DRV_PGEVT_IEVTSEL_EOC )
#define PWM_USER_PG8EVT1_SIEN		( PWM_DRV_PGEVT_SIEN_DISABLE)
#define PWM_USER_PG8EVT1_FFIEN		( PWM_DRV_PGEVT_FFIEN_DISABLE )
#define PWM_USER_PG8EVT1_CLIEN		( PWM_DRV_PGEVT_CLIEN_DISABLE )
#define PWM_USER_PG8EVT1_FLT1IEN	( PWM_DRV_PGEVT_FLTIEN_DISABLE )
#define PWM_USER_PG8EVT1_FLT2IEN	( PWM_DRV_PGEVT_FLTIEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG8EVT2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8EVT2_ADTR1EN1	( PWM_DRV_PGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_PG8EVT2_ADTR1EN2	( PWM_DRV_PGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_PG8EVT2_ADTR1EN3	( PWM_DRV_PGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_PG8EVT2_ADTR2PS	( 0u )
#define PWM_USER_PG8EVT2_ADTR2OFS	( PWM_DRV_PGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_PG8EVT2_CAPTRPS	( 0u )
#define PWM_USER_PG8EVT2_CAPTROFS	( 0u )
/*----------------------------------------------------------------------------*/
/* PG8F1PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8F1PCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG8F1PCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG8F1PCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG8F1PCI1_SWTERM	( 0u )
#define PWM_USER_PG8F1PCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG8F1PCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG8F1PCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG8F1PCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG8F1PCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG8F1PCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG8F1PCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG8F1PCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG8F1PCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG8F1PCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG8F1PCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG8F1PCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG8F1PCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG8F1PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8F1PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8F2PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8F2PCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG8F2PCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG8F2PCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG8F2PCI1_SWTERM	( 0u )
#define PWM_USER_PG8F2PCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG8F2PCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG8F2PCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG8F2PCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG8F2PCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG8F2PCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG8F2PCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG8F2PCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG8F2PCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG8F2PCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG8F2PCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG8F2PCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG8F2PCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG8F2PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8F2PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8CLPCI */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8CLPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG8CLPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG8CLPCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG8CLPCI1_SWTERM	( 0u )
#define PWM_USER_PG8CLPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG8CLPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG8CLPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG8CLPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG8CLPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG8CLPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG8CLPCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG8CLPCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG8CLPCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG8CLPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG8CLPCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG8CLPCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG8CLPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG8CLPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8CLPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8FFPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8FFPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG8FFPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG8FFPCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG8FFPCI1_SWTERM	( 0u )
#define PWM_USER_PG8FFPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG8FFPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG8FFPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG8FFPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG8FFPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG8FFPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG8FFPCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG8FFPCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG8FFPCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG8FFPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG8FFPCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG8FFPCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG8FFPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG8FFPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8FFPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8SPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8SPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG8SPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG8SPCI1_PSYNC		( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG8SPCI1_SWTERM	( 0u )
#define PWM_USER_PG8SPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG8SPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG8SPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG8SPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG8SPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG8SPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG8SPCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG8SPCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG8SPCI1_SWPCI		( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG8SPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG8SPCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG8SPCI1_BPSEL		( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG8SPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG8SPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8SPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8LEB */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8LEB_LEB			( 0u )
#define PWM_USER_PG8LEB_PLF			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG8LEB_PLR			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG8LEB_PHF			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG8LEB_PHR			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG8LEB_TRGA		( 0U )
#define PWM_USER_PG8LEB_TRGB		( 0U )
#define PWM_USER_PG8LEB_TRGC		( 0U )
#define PWM_USER_PG8LEB_TRGD		( 0U )
/*----------------------------------------------------------------------------*/
/* PG8PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8PHASE_PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8DC	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8DC_DC	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8DCA_DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8PER	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8PER_PER	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8TRIGAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8TRIGA_TRIGA		( 0u )
#define PWM_USER_PG8TRIGA_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG8TRIGBレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8TRIGB_TRIGB		( 0u )
#define PWM_USER_PG8TRIGB_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG8TRIGCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8TRIGC_TRIGC		( 0u )
#define PWM_USER_PG8TRIGC_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG8TRIGDレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8TRIGD_TRIGD		( 0U )
#define PWM_USER_PG8TRIGD_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG8TRIGEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8TRIGE_TRIGE		( 0U )
#define PWM_USER_PG8TRIGE_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG8TRIGFレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8TRIGF_TRIGF		( 0U )
#define PWM_USER_PG8TRIGF_CAHALF	( PWM_DRV_PGTRIG_FIRST )

/*----------------------------------------------------------------------------*/
/* PG8DTレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8DT_DTL	( 0U )
#define PWM_USER_PG8DT_DTH	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8CAPレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8CAP	( 0U )


/*----------------------------------------------------------------------------*/
/* PG8CON */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8CON_MODSEL		( PWM_DRV_PGCON_MODSEL_INDEPENDENT_EDGE )
#define PWM_USER_PG8CON_CLKSEL		( PWM_DRV_PGCON_CLKSEL_MCLKSEL )
#define PWM_USER_PG8CON_HREN		( 0U )
#define PWM_USER_PG8CON_TRGCNT		( PWM_DRV_PGCON_TRGCNT_1CYCLE)
#define PWM_USER_PG8CON_ON			( PWM_DRV_PGCON_ON_ENABLE )
#define PWM_USER_PG8CON_SOCS		( PWM_DRV_PGCON_SOCS_LOCAL_EOC )
#define PWM_USER_PG8CON_TRGMOD		( PWM_DRV_PGCON_TRGMOD_SINGLE_TRIGGER )
#define PWM_USER_PG8CON_UPDMOD		( PWM_DRV_PGCON_UPDMOD_SOC )
#define PWM_USER_PG8CON_MSTEN		( PWM_DRV_PGCON_MSTEN_DISABLE )
#define PWM_USER_PG8CON_MPHSEL		( PWM_DRV_PGCON_MPHSEL_PGPHASE )
#define PWM_USER_PG8CON_MPERSEL		( PWM_DRV_PGCON_MPERSEL_PGPER )
#define PWM_USER_PG8CON_MDCSEL		( PWM_DRV_PGCON_MDCSEL_PGDC )

/*----------------------------------------------------------------------------*/
/* PG8STATレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8STAT_TRIG	( 0U )
#define PWM_USER_PG8STAT_CAHALF	( 0U )
#define PWM_USER_PG8STAT_STEER	( 0U )
#define PWM_USER_PG8STAT_UPDREQ	( 0U )
#define PWM_USER_PG8STAT_UPDATE	( 0U )
#define PWM_USER_PG8STAT_CAP	( 0U )
#define PWM_USER_PG8STAT_TRCLR	( 0U )
#define PWM_USER_PG8STAT_TRSET	( 0U )
#define PWM_USER_PG8STAT_FFACT	( 0U )
#define PWM_USER_PG8STAT_CLACT	( 0U )
#define PWM_USER_PG8STAT_FLT1ACT	( 0U )
#define PWM_USER_PG8STAT_FLT2ACT	( 0U )
#define PWM_USER_PG8STAT_SACT	( 0U )
#define PWM_USER_PG8STAT_CAPTR	( 0U )
#define PWM_USER_PG8STAT_FFEVT	( 0U )
#define PWM_USER_PG8STAT_CLEVT	( 0U )
#define PWM_USER_PG8STAT_FLT1EVT	( 0U )
#define PWM_USER_PG8STAT_FLT2EVT	( 0U )
#define PWM_USER_PG8STAT_SEVT	( 0U )

/*----------------------------------------------------------------------------*/
/* PG8IOCON1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8IOCON1_POLL		( PWM_DRV_PGIOCON_POLL_ACTIVE_HIGH )
#define PWM_USER_PG8IOCON1_POLH		( PWM_DRV_PGIOCON_POLH_ACTIVE_HIGH )
#define PWM_USER_PG8IOCON1_PENL		( PWM_DRV_PGIOCON_PENL_DISABLE )
#define PWM_USER_PG8IOCON1_PENH		( PWM_DRV_PGIOCON_PENH_DISABLE )
#define PWM_USER_PG8IOCON1_PMOD		( PWM_DRV_PGIOCON_PMOD_COMPLEMENTARY )
#define PWM_USER_PG8IOCON1_DTCMPSEL	( PWM_DRV_PGIOCON_DTCMPSEL_PCI_SYNC )
#define PWM_USER_PG8IOCON1_SWAP		( PWM_DRV_PGIOCON_SWAP_DISABLE )
#define PWM_USER_PG8IOCON1_PPSEN	( PWM_DRV_PGIOCON_PPSEN_DISABLE )
#define PWM_USER_PG8IOCON1_FORCEON	( 0u )
#define PWM_USER_PG8IOCON1_CAPTRSEL ( 0u )
#define PWM_USER_PG8IOCON1_CAPTREN  ( 0u )
#define PWM_USER_PG8IOCON1_CAPEN	( 0u )
#define PWM_USER_PG8IOCON1_CAPSRC	( PWM_DRV_PGIOCON_CAPSRC_SOFTWARE )
/*----------------------------------------------------------------------------*/
/* PG8IOCON2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8IOCON2_DBDAT	( PWM_DRV_PGIOCON_DBDAT_HL_LL )
#define PWM_USER_PG8IOCON2_FFDAT	( PWM_DRV_PGIOCON_FFDAT_HL_LL )
#define PWM_USER_PG8IOCON2_CLDAT	( PWM_DRV_PGIOCON_CLDAT_HL_LL )
#define PWM_USER_PG8IOCON2_FLT1DAT	( PWM_DRV_PGIOCON_FLTDAT_HL_LL )
#define PWM_USER_PG8IOCON2_FLT2DAT	( PWM_DRV_PGIOCON_FLTDAT_HL_LL )
#define PWM_USER_PG8IOCON2_OSYNC	( PWM_DRV_PGIOCON_OSYNC_TIMEBASE )
#define PWM_USER_PG8IOCON2_OVRDAT	( PWM_DRV_PGIOCON_OVRDAT_HL_LL )
#define PWM_USER_PG8IOCON2_OVRENL	( PWM_DRV_PGIOCON_OVRENL_DISABLE )
#define PWM_USER_PG8IOCON2_OVRENH	( PWM_DRV_PGIOCON_OVRENH_DISABLE )
#define PWM_USER_PG8IOCON2_CLMOD	( PWM_DRV_PGIOCON_CLMOD_CLDAT)
/*----------------------------------------------------------------------------*/
/* PG8EVT1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8EVT1_ADTR1EN1	( PWM_DRV_PGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_PG8EVT1_ADTR1EN2	( PWM_DRV_PGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_PG8EVT1_ADTR1EN3	( PWM_DRV_PGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_PG8EVT1_ADTR1PS	( 0u )
#define PWM_USER_PG8EVT1_ADTR1OFS	( PWM_DRV_PGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_PG8EVT1_DACTREN1	( 0u )
#define PWM_USER_PG8EVT1_DACTREN2	( 0u )
#define PWM_USER_PG8EVT1_PGTRGSEL	( PWM_DRV_PGEVT_PGTRGSEL_EOC )
#define PWM_USER_PG8EVT1_UPDTRG		( PWM_DRV_PGEVT_UPDTRG_MANUAL )
#define PWM_USER_PG8EVT1_PWMPCI		( PWM_DRV_PGEVT_PWMPCI_PWMGEN1 )
#define PWM_USER_PG8EVT1_IEVTSEL	( PWM_DRV_PGEVT_IEVTSEL_EOC )
#define PWM_USER_PG8EVT1_SIEN		( PWM_DRV_PGEVT_SIEN_DISABLE)
#define PWM_USER_PG8EVT1_FFIEN		( PWM_DRV_PGEVT_FFIEN_DISABLE )
#define PWM_USER_PG8EVT1_CLIEN		( PWM_DRV_PGEVT_CLIEN_DISABLE )
#define PWM_USER_PG8EVT1_FLT1IEN	( PWM_DRV_PGEVT_FLTIEN_DISABLE )
#define PWM_USER_PG8EVT1_FLT2IEN	( PWM_DRV_PGEVT_FLTIEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG8EVT2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8EVT2_ADTR2EN1	( PWM_DRV_PGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_PG8EVT2_ADTR2EN2	( PWM_DRV_PGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_PG8EVT2_ADTR2EN3	( PWM_DRV_PGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_PG8EVT2_ADTR2PS	( 0u )
#define PWM_USER_PG8EVT2_ADTR2OFS	( PWM_DRV_PGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_PG8EVT2_CAPTRPS	( 0u )
#define PWM_USER_PG8EVT2_CAPTROFS	( 0u )
/*----------------------------------------------------------------------------*/
/* PG8F1PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8F1PCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG8F1PCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG8F1PCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG8F1PCI1_SWTERM	( 0u )
#define PWM_USER_PG8F1PCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG8F1PCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG8F1PCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG8F1PCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG8F1PCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG8F1PCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG8F1PCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG8F1PCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG8F1PCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG8F1PCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG8F1PCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG8F1PCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG8F1PCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG8F1PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8F1PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8F2PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8F2PCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG8F2PCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG8F2PCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG8F2PCI1_SWTERM	( 0u )
#define PWM_USER_PG8F2PCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG8F2PCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG8F2PCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG8F2PCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG8F2PCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG8F2PCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG8F2PCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG8F2PCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG8F2PCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG8F2PCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG8F2PCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG8F2PCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG8F2PCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG8F2PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8F2PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8CLPCI */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8CLPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG8CLPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG8CLPCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG8CLPCI1_SWTERM	( 0u )
#define PWM_USER_PG8CLPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG8CLPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG8CLPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG8CLPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG8CLPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG8CLPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG8CLPCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG8CLPCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG8CLPCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG8CLPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG8CLPCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG8CLPCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG8CLPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG8CLPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8CLPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8FFPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8FFPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG8FFPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG8FFPCI1_PSYNC	( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG8FFPCI1_SWTERM	( 0u )
#define PWM_USER_PG8FFPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG8FFPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG8FFPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG8FFPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG8FFPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG8FFPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG8FFPCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG8FFPCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG8FFPCI1_SWPCI	( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG8FFPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG8FFPCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG8FFPCI1_BPSEL	( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG8FFPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG8FFPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8FFPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8SPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8SPCI1_PSS		( PWM_DRV_PGPCI_PSS_0)
#define PWM_USER_PG8SPCI1_PPS		( PWM_DRV_PGPCI_PPS_NOT_INVERT)
#define PWM_USER_PG8SPCI1_PSYNC		( PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_PG8SPCI1_SWTERM	( 0u )
#define PWM_USER_PG8SPCI1_AQSS		( PWM_DRV_PGPCI_AQSS_1)
#define PWM_USER_PG8SPCI1_AQPS		( PWM_DRV_PGPCI_AQPS_NOT_INVERT )
#define PWM_USER_PG8SPCI1_TERM		( PWM_DRV_PGPCI_TERM_MANUAL )
#define PWM_USER_PG8SPCI1_TSYNCDIS	( PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_PG8SPCI1_TQSS		( PWM_DRV_PGPCI_TQSS_1)
#define PWM_USER_PG8SPCI1_TQPS		( PWM_DRV_PGPCI_TQPS_NOT_INVERT )
#define PWM_USER_PG8SPCI1_LATMOD	( PWM_DRV_PGPCI_LATMODE_SET_DOMI )
#define PWM_USER_PG8SPCI1_SWPCIM	( PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_PG8SPCI1_SWPCI		( PWM_DRV_PGPCI_SWPCI_DISABLE)
#define PWM_USER_PG8SPCI1_ACP		( PWM_DRV_PGPCI_ACP_LEVEL )
#define PWM_USER_PG8SPCI1_TERMPS	( PWM_DRV_PGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_PG8SPCI1_BPSEL		( PWM_DRV_PGPCI_BPSEL_PWM1 )
#define PWM_USER_PG8SPCI1_BPEN		( PWM_DRV_PGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* PG8SPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8SPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8LEB */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8LEB_LEB			( 0u )
#define PWM_USER_PG8LEB_PLF			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG8LEB_PLR			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG8LEB_PHF			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG8LEB_PHR			( PWM_DRV_PGLEB_DISABLE )
#define PWM_USER_PG8LEB_TRGA		( 0U )
#define PWM_USER_PG8LEB_TRGB		( 0U )
#define PWM_USER_PG8LEB_TRGC		( 0U )
#define PWM_USER_PG8LEB_TRGD		( 0U )
/*----------------------------------------------------------------------------*/
/* PG8PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8PHASE_PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8DC	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8DC_DC	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8DCA_DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8PER	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8PER_PER	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8TRIGAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8TRIGA	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8TRIGAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8TRIGA_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG8TRIGBレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8TRIGB_TRIGB		( 0u )
#define PWM_USER_PG8TRIGB_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG8TRIGCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8TRIGC_TRIGC		( 0u )
#define PWM_USER_PG8TRIGC_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG8TRIGDレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8TRIGD_TRIGD		( 0U )
#define PWM_USER_PG8TRIGD_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG8TRIGEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8TRIGE_TRIGE		( 0U )
#define PWM_USER_PG8TRIGE_CAHALF	( PWM_DRV_PGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* PG8TRIGFレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8TRIGF_TRIGF		( 0U )
#define PWM_USER_PG8TRIGF_CAHALF	( PWM_DRV_PGTRIG_FIRST )

/*----------------------------------------------------------------------------*/
/* PG8DTレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8DT_DTL	( 0U )
#define PWM_USER_PG8DT_DTH	( 0U )
/*----------------------------------------------------------------------------*/
/* PG8CAPレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_PG8CAP	( 0U )



/*----------------------------------------------------------------------------*/
/* APCLKCON */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APCLKCON_LOCK		( PWM_DRV_PCLKCON_LOCK_UNLOCK )
#define PWM_USER_APCLKCON_DIVSEL		( PWM_DRV_PCLKCON_DIVSEL_2X )
#define PWM_USER_APCLKCON_MCLKSEL	( PWM_DRV_PCLKCON_MCLKSEL_STD_SPEED )
#define PWM_USER_APCLKCON_HRERR		( 0U )
#define PWM_USER_APCLKCON_HRRDY		( 0U )

/*----------------------------------------------------------------------------*/
/* FSCLレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_AFSCL	( 0U )
/*----------------------------------------------------------------------------*/
/* FSMINPERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_AFSMINPER	( 0U )
/*----------------------------------------------------------------------------*/
/* MPHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_AMPHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* MDCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_AMDC	( 0U )
/*----------------------------------------------------------------------------*/
/* MPERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_AMPER	( 0U )
/*----------------------------------------------------------------------------*/
/* LFSRレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_ALFSR_LFSR	( 0U )
#define PWM_USER_ALFSR_LFSREN	( 0U )

/*----------------------------------------------------------------------------*/
/* CMBTRIG */
/*----------------------------------------------------------------------------*/
#define PWM_USER_ACMBTRIG_CTA1EN	( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_ACMBTRIG_CTA2EN	( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_ACMBTRIG_CTA3EN	( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_ACMBTRIG_CTA4EN	( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_ACMBTRIG_CTA5EN	( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_ACMBTRIG_CTA6EN	( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_ACMBTRIG_CTA7EN	( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_ACMBTRIG_CTA8EN	( PWM_DRV_CMBTRIG_DISABLE )

#define PWM_USER_ACMBTRIG_CTB1EN	( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_ACMBTRIG_CTB2EN	( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_ACMBTRIG_CTB3EN	( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_ACMBTRIG_CTB4EN	( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_ACMBTRIG_CTB5EN	( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_ACMBTRIG_CTB6EN	( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_ACMBTRIG_CTB7EN	( PWM_DRV_CMBTRIG_DISABLE )
#define PWM_USER_ACMBTRIG_CTB8EN	( PWM_DRV_CMBTRIG_DISABLE )

/*----------------------------------------------------------------------------*/
/* LOGCONy */
/*----------------------------------------------------------------------------*/
#define PWM_USER_ALOGCONA_PWMLFAD	( PWM_DRV_LOGCON_DISTINATION_DISABLE )
#define PWM_USER_ALOGCONA_PWMLFA  	( PWM_DRV_LOGCON_FUNCTION_OR)
#define PWM_USER_ALOGCONA_S2APOL  	( PWM_DRV_LOGCON_SOURCE_POL_NORMAL )
#define PWM_USER_ALOGCONA_S1APOL  	( PWM_DRV_LOGCON_SOURCE_POL_NORMAL )
#define PWM_USER_ALOGCONA_PWMS2A  	( PWM_DRV_LOGCON_SOURCE_PWM1H )
#define PWM_USER_ALOGCONA_PWMS1A  	( PWM_DRV_LOGCON_SOURCE_PWM1H )

#define PWM_USER_ALOGCONB_PWMLFBD	( PWM_DRV_LOGCON_DISTINATION_DISABLE )
#define PWM_USER_ALOGCONB_PWMLFB  	( PWM_DRV_LOGCON_FUNCTION_OR)
#define PWM_USER_ALOGCONB_S2BPOL  	( PWM_DRV_LOGCON_SOURCE_POL_NORMAL )
#define PWM_USER_ALOGCONB_S1BPOL  	( PWM_DRV_LOGCON_SOURCE_POL_NORMAL )
#define PWM_USER_ALOGCONB_PWMS2B  	( PWM_DRV_LOGCON_SOURCE_PWM1H )
#define PWM_USER_ALOGCONB_PWMS1B  	( PWM_DRV_LOGCON_SOURCE_PWM1H )

#define PWM_USER_ALOGCONC_PWMLFCD	( PWM_DRV_LOGCON_DISTINATION_DISABLE )
#define PWM_USER_ALOGCONC_PWMLFC  	( PWM_DRV_LOGCON_FUNCTION_OR)
#define PWM_USER_ALOGCONC_S2CPOL  	( PWM_DRV_LOGCON_SOURCE_POL_NORMAL )
#define PWM_USER_ALOGCONC_S1CPOL  	( PWM_DRV_LOGCON_SOURCE_POL_NORMAL )
#define PWM_USER_ALOGCONC_PWMS2C  	( PWM_DRV_LOGCON_SOURCE_PWM1H )
#define PWM_USER_ALOGCONC_PWMS1C  	( PWM_DRV_LOGCON_SOURCE_PWM1H )

#define PWM_USER_ALOGCOND_PWMLFDD	( PWM_DRV_LOGCON_DISTINATION_DISABLE )
#define PWM_USER_ALOGCOND_PWMLFD  	( PWM_DRV_LOGCON_FUNCTION_OR)
#define PWM_USER_ALOGCOND_S2DPOL  	( PWM_DRV_LOGCON_SOURCE_POL_NORMAL )
#define PWM_USER_ALOGCOND_S1DPOL  	( PWM_DRV_LOGCON_SOURCE_POL_NORMAL )
#define PWM_USER_ALOGCOND_PWMS2D  	( PWM_DRV_LOGCON_SOURCE_PWM1H )
#define PWM_USER_ALOGCOND_PWMS1D  	( PWM_DRV_LOGCON_SOURCE_PWM1H )

#define PWM_USER_ALOGCONE_PWMLFED	( PWM_DRV_LOGCON_DISTINATION_DISABLE )
#define PWM_USER_ALOGCONE_PWMLFE  	( PWM_DRV_LOGCON_FUNCTION_OR)
#define PWM_USER_ALOGCONE_S2EPOL  	( PWM_DRV_LOGCON_SOURCE_POL_NORMAL )
#define PWM_USER_ALOGCONE_S1EPOL  	( PWM_DRV_LOGCON_SOURCE_POL_NORMAL )
#define PWM_USER_ALOGCONE_PWMS2E  	( PWM_DRV_LOGCON_SOURCE_PWM1H )
#define PWM_USER_ALOGCONE_PWMS1E  	( PWM_DRV_LOGCON_SOURCE_PWM1H )

#define PWM_USER_ALOGCONF_PWMLFFD	( PWM_DRV_LOGCON_DISTINATION_DISABLE )
#define PWM_USER_ALOGCONF_PWMLFF  	( PWM_DRV_LOGCON_FUNCTION_OR)
#define PWM_USER_ALOGCONF_S2FPOL  	( PWM_DRV_LOGCON_SOURCE_POL_NORMAL )
#define PWM_USER_ALOGCONF_S1FPOL  	( PWM_DRV_LOGCON_SOURCE_POL_NORMAL )
#define PWM_USER_ALOGCONF_PWMS2F  	( PWM_DRV_LOGCON_SOURCE_PWM1H )
#define PWM_USER_ALOGCONF_PWMS1F  	( PWM_DRV_LOGCON_SOURCE_PWM1H )

/*----------------------------------------------------------------------------*/
/* APWMEVTy */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APWMEVTA_EVTAPGS	( PWM_DRV_APWMEVT_EVTSEL_APWM1 )
#define PWM_USER_APWMEVTA_EVTASEL  	( PWM_DRV_APWMEVT_EVTSEL_PGTRGSEL)
#define PWM_USER_APWMEVTA_EVTASYNC  ( PWM_DRV_APWMEVT_EVTSYNC_OFF )
#define PWM_USER_APWMEVTA_EVTASTRD  ( PWM_DRV_APWMEVT_EVTSTRD_8CLOCK )
#define PWM_USER_APWMEVTA_EVTAPOL 	( PWM_DRV_APWMEVT_EVTPOL_ACTIVE_H )
#define PWM_USER_APWMEVTA_EVTAOEN  	( PWM_DRV_APWMEVT_EVTOEN_DISABLE )

#define PWM_USER_APWMEVTB_EVTBPGS	( PWM_DRV_APWMEVT_EVTSEL_APWM1 )
#define PWM_USER_APWMEVTB_EVTBSEL  	( PWM_DRV_APWMEVT_EVTSEL_PGTRGSEL)
#define PWM_USER_APWMEVTB_EVTBSYNC  ( PWM_DRV_APWMEVT_EVTSYNC_OFF )
#define PWM_USER_APWMEVTB_EVTBSTRD  ( PWM_DRV_APWMEVT_EVTSTRD_8CLOCK )
#define PWM_USER_APWMEVTB_EVTBPOL 	( PWM_DRV_APWMEVT_EVTPOL_ACTIVE_H )
#define PWM_USER_APWMEVTB_EVTBOEN  	( PWM_DRV_APWMEVT_EVTOEN_DISABLE )

#define PWM_USER_APWMEVTC_EVTCPGS	( PWM_DRV_APWMEVT_EVTSEL_APWM1 )
#define PWM_USER_APWMEVTC_EVTCSEL  	( PWM_DRV_APWMEVT_EVTSEL_PGTRGSEL)
#define PWM_USER_APWMEVTC_EVTCSYNC  ( PWM_DRV_APWMEVT_EVTSYNC_OFF )
#define PWM_USER_APWMEVTC_EVTCSTRD  ( PWM_DRV_APWMEVT_EVTSTRD_8CLOCK )
#define PWM_USER_APWMEVTC_EVTCPOL 	( PWM_DRV_APWMEVT_EVTPOL_ACTIVE_H )
#define PWM_USER_APWMEVTC_EVTCOEN  	( PWM_DRV_APWMEVT_EVTOEN_DISABLE )

#define PWM_USER_APWMEVTD_EVTDPGS	( PWM_DRV_APWMEVT_EVTSEL_APWM1 )
#define PWM_USER_APWMEVTD_EVTDSEL  	( PWM_DRV_APWMEVT_EVTSEL_PGTRGSEL)
#define PWM_USER_APWMEVTD_EVTDSYNC  ( PWM_DRV_APWMEVT_EVTSYNC_OFF )
#define PWM_USER_APWMEVTD_EVTDSTRD  ( PWM_DRV_APWMEVT_EVTSTRD_8CLOCK )
#define PWM_USER_APWMEVTD_EVTDPOL 	( PWM_DRV_APWMEVT_EVTPOL_ACTIVE_H )
#define PWM_USER_APWMEVTD_EVTDOEN  	( PWM_DRV_APWMEVT_EVTOEN_DISABLE )

#define PWM_USER_APWMEVTE_EVTEPGS	( PWM_DRV_APWMEVT_EVTSEL_APWM1 )
#define PWM_USER_APWMEVTE_EVTESEL  	( PWM_DRV_APWMEVT_EVTSEL_PGTRGSEL)
#define PWM_USER_APWMEVTE_EVTESYNC  ( PWM_DRV_APWMEVT_EVTSYNC_OFF )
#define PWM_USER_APWMEVTE_EVTESTRD  ( PWM_DRV_APWMEVT_EVTSTRD_8CLOCK )
#define PWM_USER_APWMEVTE_EVTEPOL 	( PWM_DRV_APWMEVT_EVTPOL_ACTIVE_H )
#define PWM_USER_APWMEVTE_EVTEOEN  	( PWM_DRV_APWMEVT_EVTOEN_DISABLE )

#define PWM_USER_APWMEVTF_EVTFPGS	( PWM_DRV_APWMEVT_EVTSEL_APWM1 )
#define PWM_USER_APWMEVTF_EVTFSEL  	( PWM_DRV_APWMEVT_EVTSEL_PGTRGSEL)
#define PWM_USER_APWMEVTF_EVTFSYNC  ( PWM_DRV_APWMEVT_EVTSYNC_OFF )
#define PWM_USER_APWMEVTF_EVTFSTRD  ( PWM_DRV_APWMEVT_EVTSTRD_8CLOCK )
#define PWM_USER_APWMEVTF_EVTFPOL 	( PWM_DRV_APWMEVT_EVTPOL_ACTIVE_H )
#define PWM_USER_APWMEVTF_EVTFOEN  	( PWM_DRV_APWMEVT_EVTOEN_DISABLE )

/*----------------------------------------------------------------------------*/
/* APG1CON */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1CON_MODSEL		( PWM_DRV_APGCON_MODSEL_INDEPENDENT_EDGE )
#define PWM_USER_APG1CON_CLKSEL		( PWM_DRV_APGCON_CLKSEL_MCLKSEL )
#define PWM_USER_APG1CON_HREN		( 0U )
#define PWM_USER_APG1CON_TRGCNT		( PWM_DRV_APGCON_TRGCNT_1CYCLE)
#define PWM_USER_APG1CON_ON			( PWM_DRV_APGCON_ON_ENABLE )
#define PWM_USER_APG1CON_SOCS		( PWM_DRV_APGCON_SOCS_LOCAL_EOC )
#define PWM_USER_APG1CON_TRGMOD		( PWM_DRV_APGCON_TRGMOD_SINGLE_TRIGGER )
#define PWM_USER_APG1CON_UPDMOD		( PWM_DRV_APGCON_UPDMOD_SOC )
#define PWM_USER_APG1CON_MSTEN		( PWM_DRV_APGCON_MSTEN_DISABLE )
#define PWM_USER_APG1CON_MPHSEL		( PWM_DRV_APGCON_MPHSEL_PGPHASE )
#define PWM_USER_APG1CON_MPERSEL	( PWM_DRV_APGCON_MPERSEL_PGPER )
#define PWM_USER_APG1CON_MDCSEL		( PWM_DRV_APGCON_MDCSEL_PGDC )

/*----------------------------------------------------------------------------*/
/* APG1STATレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1STAT_TRIG		( 0U )
#define PWM_USER_APG1STAT_CAHALF	( 0U )
#define PWM_USER_APG1STAT_STEER		( 0U )
#define PWM_USER_APG1STAT_UPDREQ	( 0U )
#define PWM_USER_APG1STAT_UPDATE	( 0U )
#define PWM_USER_APG1STAT_CAP		( 0U )
#define PWM_USER_APG1STAT_TRCLR		( 0U )
#define PWM_USER_APG1STAT_TRSET		( 0U )
#define PWM_USER_APG1STAT_FFACT		( 0U )
#define PWM_USER_APG1STAT_CLACT		( 0U )
#define PWM_USER_APG1STAT_FLT1ACT	( 0U )
#define PWM_USER_APG1STAT_FLT2ACT	( 0U )
#define PWM_USER_APG1STAT_SACT		( 0U )
#define PWM_USER_APG1STAT_CAPTR		( 0U )
#define PWM_USER_APG1STAT_FFEVT		( 0U )
#define PWM_USER_APG1STAT_CLEVT		( 0U )
#define PWM_USER_APG1STAT_FLT1EVT	( 0U )
#define PWM_USER_APG1STAT_FLT2EVT	( 0U )
#define PWM_USER_APG1STAT_SEVT		( 0U )

/*----------------------------------------------------------------------------*/
/* APG1IOCON1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1IOCON1_POLL		( PWM_DRV_APGIOCON_POLL_ACTIVE_HIGH )
#define PWM_USER_APG1IOCON1_POLH		( PWM_DRV_APGIOCON_POLH_ACTIVE_HIGH )
#define PWM_USER_APG1IOCON1_PENL		( PWM_DRV_APGIOCON_PENL_DISABLE )
#define PWM_USER_APG1IOCON1_PENH		( PWM_DRV_APGIOCON_PENH_DISABLE )
#define PWM_USER_APG1IOCON1_PMOD		( PWM_DRV_APGIOCON_PMOD_COMPLEMENTARY )
#define PWM_USER_APG1IOCON1_DTCMPSEL	( PWM_DRV_APGIOCON_DTCMPSEL_PCI_SYNC )
#define PWM_USER_APG1IOCON1_SWAP		( PWM_DRV_APGIOCON_SWAP_DISABLE )
#define PWM_USER_APG1IOCON1_PPSEN		( PWM_DRV_APGIOCON_PPSEN_DISABLE )
#define PWM_USER_APG1IOCON1_FORCEON		( 0u )
#define PWM_USER_APG1IOCON1_CAPTRSEL	( 0u )
#define PWM_USER_APG1IOCON1_CAPTREN		( 0u )
#define PWM_USER_APG1IOCON1_CAPEN		( 0u )
#define PWM_USER_APG1IOCON1_CAPSRC		( PWM_DRV_APGIOCON_CAPSRC_SOFTWARE )
/*----------------------------------------------------------------------------*/
/* APG1IOCON2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1IOCON2_DBDAT	( PWM_DRV_APGIOCON_DBDAT_HL_LL )
#define PWM_USER_APG1IOCON2_FFDAT	( PWM_DRV_APGIOCON_FFDAT_HL_LL )
#define PWM_USER_APG1IOCON2_CLDAT	( PWM_DRV_APGIOCON_CLDAT_HL_LL )
#define PWM_USER_APG1IOCON2_FLT1DAT	( PWM_DRV_APGIOCON_FLTDAT_HL_LL )
#define PWM_USER_APG1IOCON2_FLT2DAT	( PWM_DRV_APGIOCON_FLTDAT_HL_LL )
#define PWM_USER_APG1IOCON2_OSYNC	( PWM_DRV_APGIOCON_OSYNC_TIMEBASE )
#define PWM_USER_APG1IOCON2_OVRDAT	( PWM_DRV_APGIOCON_OVRDAT_HL_LL )
#define PWM_USER_APG1IOCON2_OVRENL	( PWM_DRV_APGIOCON_OVRENL_DISABLE )
#define PWM_USER_APG1IOCON2_OVRENH	( PWM_DRV_APGIOCON_OVRENH_DISABLE )
#define PWM_USER_APG1IOCON2_CLMOD	( PWM_DRV_APGIOCON_CLMOD_CLDAT)
/*----------------------------------------------------------------------------*/
/* APG1EVT1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1EVT1_ADTR1EN1	( PWM_DRV_APGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_APG1EVT1_ADTR1EN2	( PWM_DRV_APGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_APG1EVT1_ADTR1EN3	( PWM_DRV_APGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_APG1EVT1_ADTR1PS	( 0u )
#define PWM_USER_APG1EVT1_ADTR1OFS	( PWM_DRV_APGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_APG1EVT1_DACTREN1	( 0u )
#define PWM_USER_APG1EVT1_DACTREN2	( 0u )
#define PWM_USER_APG1EVT1_PGTRGSEL	( PWM_DRV_APGEVT_PGTRGSEL_EOC )
#define PWM_USER_APG1EVT1_UPDTRG	( PWM_DRV_APGEVT_UPDTRG_MANUAL )
#define PWM_USER_APG1EVT1_PWMPCI	( PWM_DRV_APGEVT_PWMPCI_PWMGEN1 )
#define PWM_USER_APG1EVT1_IEVTSEL	( PWM_DRV_APGEVT_IEVTSEL_EOC )
#define PWM_USER_APG1EVT1_SIEN		( PWM_DRV_APGEVT_SIEN_DISABLE)
#define PWM_USER_APG1EVT1_FFIEN		( PWM_DRV_APGEVT_FFIEN_DISABLE )
#define PWM_USER_APG1EVT1_CLIEN		( PWM_DRV_APGEVT_CLIEN_DISABLE )
#define PWM_USER_APG1EVT1_FLT1IEN	( PWM_DRV_APGEVT_FLTIEN_DISABLE )
#define PWM_USER_APG1EVT1_FLT2IEN	( PWM_DRV_APGEVT_FLTIEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* APG1EVT2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1EVT2_ADTR2EN1	( PWM_DRV_APGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_APG1EVT2_ADTR2EN2	( PWM_DRV_APGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_APG1EVT2_ADTR2EN3	( PWM_DRV_APGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_APG1EVT2_ADTR2PS	( 0u )
#define PWM_USER_APG1EVT2_ADTR2OFS	( PWM_DRV_APGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_APG1EVT2_CAPTRPS	( 0u )
#define PWM_USER_APG1EVT2_CAPTROFS	( 0u )
/*----------------------------------------------------------------------------*/
/* APG1F1PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1F1PCI1_PSS		( PWM_DRV_APGPCI_PSS_0)
#define PWM_USER_APG1F1PCI1_PPS		( PWM_DRV_APGPCI_PPS_NOT_INVERT)
#define PWM_USER_APG1F1PCI1_PSYNC	( PWM_DRV_APGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_APG1F1PCI1_SWTERM	( 0u )
#define PWM_USER_APG1F1PCI1_AQSS	( PWM_DRV_APGPCI_AQSS_1)
#define PWM_USER_APG1F1PCI1_AQPS	( PWM_DRV_APGPCI_AQPS_NOT_INVERT )
#define PWM_USER_APG1F1PCI1_TERM	( PWM_DRV_APGPCI_TERM_MANUAL )
#define PWM_USER_APG1F1PCI1_TSYNCDIS	( PWM_DRV_APGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_APG1F1PCI1_TQSS	( PWM_DRV_APGPCI_TQSS_1)
#define PWM_USER_APG1F1PCI1_TQPS	( PWM_DRV_APGPCI_TQPS_NOT_INVERT )
#define PWM_USER_APG1F1PCI1_LATMOD	( PWM_DRV_APGPCI_LATMODE_SET_DOMI )
#define PWM_USER_APG1F1PCI1_SWPCIM	( PWM_DRV_APGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_APG1F1PCI1_SWPCI	( PWM_DRV_APGPCI_SWPCI_DISABLE)
#define PWM_USER_APG1F1PCI1_ACP		( PWM_DRV_APGPCI_ACP_LEVEL )
#define PWM_USER_APG1F1PCI1_TERMPS	( PWM_DRV_APGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_APG1F1PCI1_BPSEL	( PWM_DRV_APGPCI_BPSEL_PWM1 )
#define PWM_USER_APG1F1PCI1_BPEN	( PWM_DRV_APGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* APG1F1PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1F1PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* APG1F2PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1F2PCI1_PSS		( PWM_DRV_APGPCI_PSS_0)
#define PWM_USER_APG1F2PCI1_PPS		( PWM_DRV_APGPCI_PPS_NOT_INVERT)
#define PWM_USER_APG1F2PCI1_PSYNC	( PWM_DRV_APGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_APG1F2PCI1_SWTERM	( 0u )
#define PWM_USER_APG1F2PCI1_AQSS	( PWM_DRV_APGPCI_AQSS_1)
#define PWM_USER_APG1F2PCI1_AQPS	( PWM_DRV_APGPCI_AQPS_NOT_INVERT )
#define PWM_USER_APG1F2PCI1_TERM	( PWM_DRV_APGPCI_TERM_MANUAL )
#define PWM_USER_APG1F2PCI1_TSYNCDIS	( PWM_DRV_APGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_APG1F2PCI1_TQSS	( PWM_DRV_APGPCI_TQSS_1)
#define PWM_USER_APG1F2PCI1_TQPS	( PWM_DRV_APGPCI_TQPS_NOT_INVERT )
#define PWM_USER_APG1F2PCI1_LATMOD	( PWM_DRV_APGPCI_LATMODE_SET_DOMI )
#define PWM_USER_APG1F2PCI1_SWPCIM	( PWM_DRV_APGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_APG1F2PCI1_SWPCI	( PWM_DRV_APGPCI_SWPCI_DISABLE)
#define PWM_USER_APG1F2PCI1_ACP		( PWM_DRV_APGPCI_ACP_LEVEL )
#define PWM_USER_APG1F2PCI1_TERMPS	( PWM_DRV_APGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_APG1F2PCI1_BPSEL	( PWM_DRV_APGPCI_BPSEL_PWM1 )
#define PWM_USER_APG1F2PCI1_BPEN	( PWM_DRV_APGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* APG1F2PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1F2PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* APG1CLPCI */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1CLPCI1_PSS		( PWM_DRV_APGPCI_PSS_0)
#define PWM_USER_APG1CLPCI1_PPS		( PWM_DRV_APGPCI_PPS_NOT_INVERT)
#define PWM_USER_APG1CLPCI1_PSYNC	( PWM_DRV_APGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_APG1CLPCI1_SWTERM	( 0u )
#define PWM_USER_APG1CLPCI1_AQSS	( PWM_DRV_APGPCI_AQSS_1)
#define PWM_USER_APG1CLPCI1_AQPS	( PWM_DRV_APGPCI_AQPS_NOT_INVERT )
#define PWM_USER_APG1CLPCI1_TERM	( PWM_DRV_APGPCI_TERM_MANUAL )
#define PWM_USER_APG1CLPCI1_TSYNCDIS	( PWM_DRV_APGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_APG1CLPCI1_TQSS	( PWM_DRV_APGPCI_TQSS_1)
#define PWM_USER_APG1CLPCI1_TQPS	( PWM_DRV_APGPCI_TQPS_NOT_INVERT )
#define PWM_USER_APG1CLPCI1_LATMOD	( PWM_DRV_APGPCI_LATMODE_SET_DOMI )
#define PWM_USER_APG1CLPCI1_SWPCIM	( PWM_DRV_APGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_APG1CLPCI1_SWPCI	( PWM_DRV_APGPCI_SWPCI_DISABLE)
#define PWM_USER_APG1CLPCI1_ACP		( PWM_DRV_APGPCI_ACP_LEVEL )
#define PWM_USER_APG1CLPCI1_TERMPS	( PWM_DRV_APGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_APG1CLPCI1_BPSEL	( PWM_DRV_APGPCI_BPSEL_PWM1 )
#define PWM_USER_APG1CLPCI1_BPEN	( PWM_DRV_APGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* APG1CLPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1CLPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* APG1FFPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1FFPCI1_PSS		( PWM_DRV_APGPCI_PSS_0)
#define PWM_USER_APG1FFPCI1_PPS		( PWM_DRV_APGPCI_PPS_NOT_INVERT)
#define PWM_USER_APG1FFPCI1_PSYNC		( PWM_DRV_APGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_APG1FFPCI1_SWTERM	( 0u )
#define PWM_USER_APG1FFPCI1_AQSS		( PWM_DRV_APGPCI_AQSS_1)
#define PWM_USER_APG1FFPCI1_AQPS		( PWM_DRV_APGPCI_AQPS_NOT_INVERT )
#define PWM_USER_APG1FFPCI1_TERM		( PWM_DRV_APGPCI_TERM_MANUAL )
#define PWM_USER_APG1FFPCI1_TSYNCDIS	( PWM_DRV_APGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_APG1FFPCI1_TQSS		( PWM_DRV_APGPCI_TQSS_1)
#define PWM_USER_APG1FFPCI1_TQPS		( PWM_DRV_APGPCI_TQPS_NOT_INVERT )
#define PWM_USER_APG1FFPCI1_LATMOD	( PWM_DRV_APGPCI_LATMODE_SET_DOMI )
#define PWM_USER_APG1FFPCI1_SWPCIM	( PWM_DRV_APGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_APG1FFPCI1_SWPCI		( PWM_DRV_APGPCI_SWPCI_DISABLE)
#define PWM_USER_APG1FFPCI1_ACP		( PWM_DRV_APGPCI_ACP_LEVEL )
#define PWM_USER_APG1FFPCI1_TERMPS	( PWM_DRV_APGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_APG1FFPCI1_BPSEL		( PWM_DRV_APGPCI_BPSEL_PWM1 )
#define PWM_USER_APG1FFPCI1_BPEN		( PWM_DRV_APGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* APG1FFPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1FFPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* APG1SPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1SPCI1_PSS		( PWM_DRV_APGPCI_PSS_0)
#define PWM_USER_APG1SPCI1_PPS		( PWM_DRV_APGPCI_PPS_NOT_INVERT)
#define PWM_USER_APG1SPCI1_PSYNC		( PWM_DRV_APGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_APG1SPCI1_SWTERM		( 0u )
#define PWM_USER_APG1SPCI1_AQSS		( PWM_DRV_APGPCI_AQSS_1)
#define PWM_USER_APG1SPCI1_AQPS		( PWM_DRV_APGPCI_AQPS_NOT_INVERT )
#define PWM_USER_APG1SPCI1_TERM		( PWM_DRV_APGPCI_TERM_MANUAL )
#define PWM_USER_APG1SPCI1_TSYNCDIS	( PWM_DRV_APGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_APG1SPCI1_TQSS		( PWM_DRV_APGPCI_TQSS_1)
#define PWM_USER_APG1SPCI1_TQPS		( PWM_DRV_APGPCI_TQPS_NOT_INVERT )
#define PWM_USER_APG1SPCI1_LATMOD		( PWM_DRV_APGPCI_LATMODE_SET_DOMI )
#define PWM_USER_APG1SPCI1_SWPCIM		( PWM_DRV_APGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_APG1SPCI1_SWPCI		( PWM_DRV_APGPCI_SWPCI_DISABLE)
#define PWM_USER_APG1SPCI1_ACP		( PWM_DRV_APGPCI_ACP_LEVEL )
#define PWM_USER_APG1SPCI1_TERMPS		( PWM_DRV_APGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_APG1SPCI1_BPSEL		( PWM_DRV_APGPCI_BPSEL_PWM1 )
#define PWM_USER_APG1SPCI1_BPEN		( PWM_DRV_APGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* APG1SPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1SPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* APG1LEB */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1LEB_LEB			( 0u )
#define PWM_USER_APG1LEB_PLF			( PWM_DRV_APGLEB_DISABLE )
#define PWM_USER_APG1LEB_PLR			( PWM_DRV_APGLEB_DISABLE )
#define PWM_USER_APG1LEB_PHF			( PWM_DRV_APGLEB_DISABLE )
#define PWM_USER_APG1LEB_PHR			( PWM_DRV_APGLEB_DISABLE )
#define PWM_USER_APG1LEB_TRGA		( 0U )
#define PWM_USER_APG1LEB_TRGB		( 0U )
#define PWM_USER_APG1LEB_TRGC		( 0U )
#define PWM_USER_APG1LEB_TRGD		( 0U )
/*----------------------------------------------------------------------------*/
/* APG1PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* APG1PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1PHASE_PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* APG1DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1DC	( 0U )
/*----------------------------------------------------------------------------*/
/* APG1DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1DC_DC	( 0U )
/*----------------------------------------------------------------------------*/
/* APG1DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* APG1DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1DCA_DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* APG1PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1PER	( 0U )
/*----------------------------------------------------------------------------*/
/* APG1PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1PER_PER	( 0U )
/*----------------------------------------------------------------------------*/
/* APG1TRIGAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1TRIGA_TRIGA	( 0u )
#define PWM_USER_APG1TRIGA_CAHALF	( PWM_DRV_APGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* APG1TRIGBレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1TRIGB_TRIGB	( 0u )
#define PWM_USER_APG1TRIGB_CAHALF	( PWM_DRV_APGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* APG1TRIGCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1TRIGC_TRIGC	( 0u )
#define PWM_USER_APG1TRIGC_CAHALF	( PWM_DRV_APGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* APG1TRIGDレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1TRIGD_TRIGD	( 0U )
#define PWM_USER_APG1TRIGD_CAHALF	( PWM_DRV_APGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* APG1TRIGEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1TRIGE_TRIGE	( 0U )
#define PWM_USER_APG1TRIGE_CAHALF	( PWM_DRV_APGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* APG1TRIGFレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1TRIGF_TRIGF	( 0U )
#define PWM_USER_APG1TRIGF_CAHALF	( PWM_DRV_APGTRIG_FIRST )

/*----------------------------------------------------------------------------*/
/* APG1DTレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1DT_DTL	( 0U )
#define PWM_USER_APG1DT_DTH	( 0U )
/*----------------------------------------------------------------------------*/
/* APG1CAPレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG1CAP	( 0U )

/*----------------------------------------------------------------------------*/
/* APG2CON */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2CON_MODSEL		( PWM_DRV_APGCON_MODSEL_INDEPENDENT_EDGE )
#define PWM_USER_APG2CON_CLKSEL		( PWM_DRV_APGCON_CLKSEL_MCLKSEL )
#define PWM_USER_APG2CON_HREN		( 0U )
#define PWM_USER_APG2CON_TRGCNT		( PWM_DRV_APGCON_TRGCNT_1CYCLE)
#define PWM_USER_APG2CON_ON			( PWM_DRV_APGCON_ON_ENABLE )
#define PWM_USER_APG2CON_SOCS		( PWM_DRV_APGCON_SOCS_LOCAL_EOC )
#define PWM_USER_APG2CON_TRGMOD		( PWM_DRV_APGCON_TRGMOD_SINGLE_TRIGGER )
#define PWM_USER_APG2CON_UPDMOD		( PWM_DRV_APGCON_UPDMOD_SOC )
#define PWM_USER_APG2CON_MSTEN		( PWM_DRV_APGCON_MSTEN_DISABLE )
#define PWM_USER_APG2CON_MPHSEL		( PWM_DRV_APGCON_MPHSEL_PGPHASE )
#define PWM_USER_APG2CON_MPERSEL		( PWM_DRV_APGCON_MPERSEL_PGPER )
#define PWM_USER_APG2CON_MDCSEL		( PWM_DRV_APGCON_MDCSEL_PGDC )

/*----------------------------------------------------------------------------*/
/* APG2STATレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2STAT_TRIG	( 0U )
#define PWM_USER_APG2STAT_CAHALF	( 0U )
#define PWM_USER_APG2STAT_STEER	( 0U )
#define PWM_USER_APG2STAT_UPDREQ	( 0U )
#define PWM_USER_APG2STAT_UPDATE	( 0U )
#define PWM_USER_APG2STAT_CAP	( 0U )
#define PWM_USER_APG2STAT_TRCLR	( 0U )
#define PWM_USER_APG2STAT_TRSET	( 0U )
#define PWM_USER_APG2STAT_FFACT	( 0U )
#define PWM_USER_APG2STAT_CLACT	( 0U )
#define PWM_USER_APG2STAT_FLT1ACT	( 0U )
#define PWM_USER_APG2STAT_FLT2ACT	( 0U )
#define PWM_USER_APG2STAT_SACT	( 0U )
#define PWM_USER_APG2STAT_CAPTR	( 0U )
#define PWM_USER_APG2STAT_FFEVT	( 0U )
#define PWM_USER_APG2STAT_CLEVT	( 0U )
#define PWM_USER_APG2STAT_FLT1EVT	( 0U )
#define PWM_USER_APG2STAT_FLT2EVT	( 0U )
#define PWM_USER_APG2STAT_SEVT	( 0U )

/*----------------------------------------------------------------------------*/
/* APG2IOCON1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2IOCON1_POLL		( PWM_DRV_APGIOCON_POLL_ACTIVE_HIGH )
#define PWM_USER_APG2IOCON1_POLH		( PWM_DRV_APGIOCON_POLH_ACTIVE_HIGH )
#define PWM_USER_APG2IOCON1_PENL		( PWM_DRV_APGIOCON_PENL_DISABLE )
#define PWM_USER_APG2IOCON1_PENH		( PWM_DRV_APGIOCON_PENH_DISABLE )
#define PWM_USER_APG2IOCON1_PMOD		( PWM_DRV_APGIOCON_PMOD_COMPLEMENTARY )
#define PWM_USER_APG2IOCON1_DTCMPSEL	( PWM_DRV_APGIOCON_DTCMPSEL_PCI_SYNC )
#define PWM_USER_APG2IOCON1_SWAP		( PWM_DRV_APGIOCON_SWAP_DISABLE )
#define PWM_USER_APG2IOCON1_PPSEN	( PWM_DRV_APGIOCON_PPSEN_DISABLE )
#define PWM_USER_APG2IOCON1_FORCEON	( 0u )
#define PWM_USER_APG2IOCON1_CAPTRSEL ( 0u )
#define PWM_USER_APG2IOCON1_CAPTREN  ( 0u )
#define PWM_USER_APG2IOCON1_CAPEN	( 0u )
#define PWM_USER_APG2IOCON1_CAPSRC	( PWM_DRV_APGIOCON_CAPSRC_SOFTWARE )
/*----------------------------------------------------------------------------*/
/* APG2IOCON2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2IOCON2_DBDAT	( PWM_DRV_APGIOCON_DBDAT_HL_LL )
#define PWM_USER_APG2IOCON2_FFDAT	( PWM_DRV_APGIOCON_FFDAT_HL_LL )
#define PWM_USER_APG2IOCON2_CLDAT	( PWM_DRV_APGIOCON_CLDAT_HL_LL )
#define PWM_USER_APG2IOCON2_FLT1DAT	( PWM_DRV_APGIOCON_FLTDAT_HL_LL )
#define PWM_USER_APG2IOCON2_FLT2DAT	( PWM_DRV_APGIOCON_FLTDAT_HL_LL )
#define PWM_USER_APG2IOCON2_OSYNC	( PWM_DRV_APGIOCON_OSYNC_TIMEBASE )
#define PWM_USER_APG2IOCON2_OVRDAT	( PWM_DRV_APGIOCON_OVRDAT_HL_LL )
#define PWM_USER_APG2IOCON2_OVRENL	( PWM_DRV_APGIOCON_OVRENL_DISABLE )
#define PWM_USER_APG2IOCON2_OVRENH	( PWM_DRV_APGIOCON_OVRENH_DISABLE )
#define PWM_USER_APG2IOCON2_CLMOD	( PWM_DRV_APGIOCON_CLMOD_CLDAT)
/*----------------------------------------------------------------------------*/
/* APG2EVT1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2EVT1_ADTR1EN1	( PWM_DRV_APGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_APG2EVT1_ADTR1EN2	( PWM_DRV_APGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_APG2EVT1_ADTR1EN3	( PWM_DRV_APGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_APG2EVT1_ADTR1PS	( 0u )
#define PWM_USER_APG2EVT1_ADTR1OFS	( PWM_DRV_APGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_APG2EVT1_DACTREN1	( 0u )
#define PWM_USER_APG2EVT1_DACTREN2	( 0u )
#define PWM_USER_APG2EVT1_PGTRGSEL	( PWM_DRV_APGEVT_PGTRGSEL_EOC )
#define PWM_USER_APG2EVT1_UPDTRG	( PWM_DRV_APGEVT_UPDTRG_MANUAL )
#define PWM_USER_APG2EVT1_PWMPCI	( PWM_DRV_APGEVT_PWMPCI_PWMGEN1 )
#define PWM_USER_APG2EVT1_IEVTSEL	( PWM_DRV_APGEVT_IEVTSEL_EOC )
#define PWM_USER_APG2EVT1_SIEN		( PWM_DRV_APGEVT_SIEN_DISABLE)
#define PWM_USER_APG2EVT1_FFIEN		( PWM_DRV_APGEVT_FFIEN_DISABLE )
#define PWM_USER_APG2EVT1_CLIEN		( PWM_DRV_APGEVT_CLIEN_DISABLE )
#define PWM_USER_APG2EVT1_FLT1IEN	( PWM_DRV_APGEVT_FLTIEN_DISABLE )
#define PWM_USER_APG2EVT1_FLT2IEN	( PWM_DRV_APGEVT_FLTIEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* APG2EVT2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2EVT2_ADTR2EN1	( PWM_DRV_APGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_APG2EVT2_ADTR2EN2	( PWM_DRV_APGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_APG2EVT2_ADTR2EN3	( PWM_DRV_APGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_APG2EVT2_ADTR2PS	( 0u )
#define PWM_USER_APG2EVT2_ADTR2OFS	( PWM_DRV_APGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_APG2EVT2_CAPTRPS	( 0u )
#define PWM_USER_APG2EVT2_CAPTROFS	( 0u )
/*----------------------------------------------------------------------------*/
/* APG2F1PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2F1PCI1_PSS		( PWM_DRV_APGPCI_PSS_0)
#define PWM_USER_APG2F1PCI1_PPS		( PWM_DRV_APGPCI_PPS_NOT_INVERT)
#define PWM_USER_APG2F1PCI1_PSYNC	( PWM_DRV_APGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_APG2F1PCI1_SWTERM	( 0u )
#define PWM_USER_APG2F1PCI1_AQSS	( PWM_DRV_APGPCI_AQSS_1)
#define PWM_USER_APG2F1PCI1_AQPS	( PWM_DRV_APGPCI_AQPS_NOT_INVERT )
#define PWM_USER_APG2F1PCI1_TERM	( PWM_DRV_APGPCI_TERM_MANUAL )
#define PWM_USER_APG2F1PCI1_TSYNCDIS	( PWM_DRV_APGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_APG2F1PCI1_TQSS	( PWM_DRV_APGPCI_TQSS_1)
#define PWM_USER_APG2F1PCI1_TQPS	( PWM_DRV_APGPCI_TQPS_NOT_INVERT )
#define PWM_USER_APG2F1PCI1_LATMOD	( PWM_DRV_APGPCI_LATMODE_SET_DOMI )
#define PWM_USER_APG2F1PCI1_SWPCIM	( PWM_DRV_APGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_APG2F1PCI1_SWPCI	( PWM_DRV_APGPCI_SWPCI_DISABLE)
#define PWM_USER_APG2F1PCI1_ACP		( PWM_DRV_APGPCI_ACP_LEVEL )
#define PWM_USER_APG2F1PCI1_TERMPS	( PWM_DRV_APGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_APG2F1PCI1_BPSEL	( PWM_DRV_APGPCI_BPSEL_PWM1 )
#define PWM_USER_APG2F1PCI1_BPEN	( PWM_DRV_APGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* APG2F1PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2F1PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* APG2F2PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2F2PCI1_PSS		( PWM_DRV_APGPCI_PSS_0)
#define PWM_USER_APG2F2PCI1_PPS		( PWM_DRV_APGPCI_PPS_NOT_INVERT)
#define PWM_USER_APG2F2PCI1_PSYNC	( PWM_DRV_APGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_APG2F2PCI1_SWTERM	( 0u )
#define PWM_USER_APG2F2PCI1_AQSS	( PWM_DRV_APGPCI_AQSS_1)
#define PWM_USER_APG2F2PCI1_AQPS	( PWM_DRV_APGPCI_AQPS_NOT_INVERT )
#define PWM_USER_APG2F2PCI1_TERM	( PWM_DRV_APGPCI_TERM_MANUAL )
#define PWM_USER_APG2F2PCI1_TSYNCDIS	( PWM_DRV_APGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_APG2F2PCI1_TQSS	( PWM_DRV_APGPCI_TQSS_1)
#define PWM_USER_APG2F2PCI1_TQPS	( PWM_DRV_APGPCI_TQPS_NOT_INVERT )
#define PWM_USER_APG2F2PCI1_LATMOD	( PWM_DRV_APGPCI_LATMODE_SET_DOMI )
#define PWM_USER_APG2F2PCI1_SWPCIM	( PWM_DRV_APGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_APG2F2PCI1_SWPCI	( PWM_DRV_APGPCI_SWPCI_DISABLE)
#define PWM_USER_APG2F2PCI1_ACP		( PWM_DRV_APGPCI_ACP_LEVEL )
#define PWM_USER_APG2F2PCI1_TERMPS	( PWM_DRV_APGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_APG2F2PCI1_BPSEL	( PWM_DRV_APGPCI_BPSEL_PWM1 )
#define PWM_USER_APG2F2PCI1_BPEN	( PWM_DRV_APGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* APG2F2PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2F2PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* APG2CLPCI */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2CLPCI1_PSS		( PWM_DRV_APGPCI_PSS_0)
#define PWM_USER_APG2CLPCI1_PPS		( PWM_DRV_APGPCI_PPS_NOT_INVERT)
#define PWM_USER_APG2CLPCI1_PSYNC	( PWM_DRV_APGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_APG2CLPCI1_SWTERM	( 0u )
#define PWM_USER_APG2CLPCI1_AQSS	( PWM_DRV_APGPCI_AQSS_1)
#define PWM_USER_APG2CLPCI1_AQPS	( PWM_DRV_APGPCI_AQPS_NOT_INVERT )
#define PWM_USER_APG2CLPCI1_TERM	( PWM_DRV_APGPCI_TERM_MANUAL )
#define PWM_USER_APG2CLPCI1_TSYNCDIS	( PWM_DRV_APGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_APG2CLPCI1_TQSS	( PWM_DRV_APGPCI_TQSS_1)
#define PWM_USER_APG2CLPCI1_TQPS	( PWM_DRV_APGPCI_TQPS_NOT_INVERT )
#define PWM_USER_APG2CLPCI1_LATMOD	( PWM_DRV_APGPCI_LATMODE_SET_DOMI )
#define PWM_USER_APG2CLPCI1_SWPCIM	( PWM_DRV_APGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_APG2CLPCI1_SWPCI	( PWM_DRV_APGPCI_SWPCI_DISABLE)
#define PWM_USER_APG2CLPCI1_ACP		( PWM_DRV_APGPCI_ACP_LEVEL )
#define PWM_USER_APG2CLPCI1_TERMPS	( PWM_DRV_APGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_APG2CLPCI1_BPSEL	( PWM_DRV_APGPCI_BPSEL_PWM1 )
#define PWM_USER_APG2CLPCI1_BPEN	( PWM_DRV_APGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* APG2CLPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2CLPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* APG2FFPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2FFPCI1_PSS		( PWM_DRV_APGPCI_PSS_0)
#define PWM_USER_APG2FFPCI1_PPS		( PWM_DRV_APGPCI_PPS_NOT_INVERT)
#define PWM_USER_APG2FFPCI1_PSYNC	( PWM_DRV_APGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_APG2FFPCI1_SWTERM	( 0u )
#define PWM_USER_APG2FFPCI1_AQSS	( PWM_DRV_APGPCI_AQSS_1)
#define PWM_USER_APG2FFPCI1_AQPS	( PWM_DRV_APGPCI_AQPS_NOT_INVERT )
#define PWM_USER_APG2FFPCI1_TERM	( PWM_DRV_APGPCI_TERM_MANUAL )
#define PWM_USER_APG2FFPCI1_TSYNCDIS	( PWM_DRV_APGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_APG2FFPCI1_TQSS	( PWM_DRV_APGPCI_TQSS_1)
#define PWM_USER_APG2FFPCI1_TQPS	( PWM_DRV_APGPCI_TQPS_NOT_INVERT )
#define PWM_USER_APG2FFPCI1_LATMOD	( PWM_DRV_APGPCI_LATMODE_SET_DOMI )
#define PWM_USER_APG2FFPCI1_SWPCIM	( PWM_DRV_APGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_APG2FFPCI1_SWPCI	( PWM_DRV_APGPCI_SWPCI_DISABLE)
#define PWM_USER_APG2FFPCI1_ACP		( PWM_DRV_APGPCI_ACP_LEVEL )
#define PWM_USER_APG2FFPCI1_TERMPS	( PWM_DRV_APGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_APG2FFPCI1_BPSEL	( PWM_DRV_APGPCI_BPSEL_PWM1 )
#define PWM_USER_APG2FFPCI1_BPEN	( PWM_DRV_APGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* APG2FFPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2FFPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* APG2SPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2SPCI1_PSS		( PWM_DRV_APGPCI_PSS_0)
#define PWM_USER_APG2SPCI1_PPS		( PWM_DRV_APGPCI_PPS_NOT_INVERT)
#define PWM_USER_APG2SPCI1_PSYNC	( PWM_DRV_APGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_APG2SPCI1_SWTERM	( 0u )
#define PWM_USER_APG2SPCI1_AQSS		( PWM_DRV_APGPCI_AQSS_1)
#define PWM_USER_APG2SPCI1_AQPS		( PWM_DRV_APGPCI_AQPS_NOT_INVERT )
#define PWM_USER_APG2SPCI1_TERM		( PWM_DRV_APGPCI_TERM_MANUAL )
#define PWM_USER_APG2SPCI1_TSYNCDIS	( PWM_DRV_APGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_APG2SPCI1_TQSS		( PWM_DRV_APGPCI_TQSS_1)
#define PWM_USER_APG2SPCI1_TQPS		( PWM_DRV_APGPCI_TQPS_NOT_INVERT )
#define PWM_USER_APG2SPCI1_LATMOD	( PWM_DRV_APGPCI_LATMODE_SET_DOMI )
#define PWM_USER_APG2SPCI1_SWPCIM	( PWM_DRV_APGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_APG2SPCI1_SWPCI	( PWM_DRV_APGPCI_SWPCI_DISABLE)
#define PWM_USER_APG2SPCI1_ACP		( PWM_DRV_APGPCI_ACP_LEVEL )
#define PWM_USER_APG2SPCI1_TERMPS	( PWM_DRV_APGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_APG2SPCI1_BPSEL	( PWM_DRV_APGPCI_BPSEL_PWM1 )
#define PWM_USER_APG2SPCI1_BPEN		( PWM_DRV_APGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* APG2SPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2SPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* APG2LEB */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2LEB_LEB		( 0u )
#define PWM_USER_APG2LEB_PLF		( PWM_DRV_APGLEB_DISABLE )
#define PWM_USER_APG2LEB_PLR		( PWM_DRV_APGLEB_DISABLE )
#define PWM_USER_APG2LEB_PHF		( PWM_DRV_APGLEB_DISABLE )
#define PWM_USER_APG2LEB_PHR		( PWM_DRV_APGLEB_DISABLE )
#define PWM_USER_APG2LEB_TRGA		( 0U )
#define PWM_USER_APG2LEB_TRGB		( 0U )
#define PWM_USER_APG2LEB_TRGC		( 0U )
#define PWM_USER_APG2LEB_TRGD		( 0U )
/*----------------------------------------------------------------------------*/
/* APG2PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* APG2PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2PHASE_PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* APG2DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2DC	( 0U )
/*----------------------------------------------------------------------------*/
/* APG2DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2DC_DC	( 0U )
/*----------------------------------------------------------------------------*/
/* APG2DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* APG2DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2DCA_DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* APG2PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2PER	( 0U )
/*----------------------------------------------------------------------------*/
/* APG2PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2PER_PER	( 0U )
/*----------------------------------------------------------------------------*/
/* APG2TRIGAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2TRIGA_TRIGA	( 0U )
#define PWM_USER_APG2TRIGA_CAHALF	( PWM_DRV_APGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* APG2TRIGBレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2TRIGB_TRIGB	( 0u )
#define PWM_USER_APG2TRIGB_CAHALF	( PWM_DRV_APGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* APG2TRIGCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2TRIGC_TRIGC	( 0u )
#define PWM_USER_APG2TRIGC_CAHALF	( PWM_DRV_APGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* APG2TRIGDレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2TRIGD_TRIGD	( 0U )
#define PWM_USER_APG2TRIGD_CAHALF	( PWM_DRV_APGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* APG2TRIGEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2TRIGE_TRIGE	( 0U )
#define PWM_USER_APG2TRIGE_CAHALF	( PWM_DRV_APGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* APG2TRIGFレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2TRIGF_TRIGF	( 0U )
#define PWM_USER_APG2TRIGF_CAHALF	( PWM_DRV_APGTRIG_FIRST )

/*----------------------------------------------------------------------------*/
/* APG2DTレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2DT_DTL	( 0U )
#define PWM_USER_APG2DT_DTH	( 0U )
/*----------------------------------------------------------------------------*/
/* APG2CAPレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG2CAP	( 0U )


/*----------------------------------------------------------------------------*/
/* APG3CON */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3CON_MODSEL		( PWM_DRV_APGCON_MODSEL_INDEPENDENT_EDGE )
#define PWM_USER_APG3CON_CLKSEL		( PWM_DRV_APGCON_CLKSEL_MCLKSEL )
#define PWM_USER_APG3CON_HREN		( 0U )
#define PWM_USER_APG3CON_TRGCNT		( PWM_DRV_APGCON_TRGCNT_1CYCLE)
#define PWM_USER_APG3CON_ON			( PWM_DRV_APGCON_ON_ENABLE )
#define PWM_USER_APG3CON_SOCS		( PWM_DRV_APGCON_SOCS_LOCAL_EOC )
#define PWM_USER_APG3CON_TRGMOD		( PWM_DRV_APGCON_TRGMOD_SINGLE_TRIGGER )
#define PWM_USER_APG3CON_UPDMOD		( PWM_DRV_APGCON_UPDMOD_SOC )
#define PWM_USER_APG3CON_MSTEN		( PWM_DRV_APGCON_MSTEN_DISABLE )
#define PWM_USER_APG3CON_MPHSEL		( PWM_DRV_APGCON_MPHSEL_PGPHASE )
#define PWM_USER_APG3CON_MPERSEL	( PWM_DRV_APGCON_MPERSEL_PGPER )
#define PWM_USER_APG3CON_MDCSEL		( PWM_DRV_APGCON_MDCSEL_PGDC )

/*----------------------------------------------------------------------------*/
/* APG3STATレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3STAT_TRIG	( 0U )
#define PWM_USER_APG3STAT_CAHALF	( 0U )
#define PWM_USER_APG3STAT_STEER	( 0U )
#define PWM_USER_APG3STAT_UPDREQ	( 0U )
#define PWM_USER_APG3STAT_UPDATE	( 0U )
#define PWM_USER_APG3STAT_CAP	( 0U )
#define PWM_USER_APG3STAT_TRCLR	( 0U )
#define PWM_USER_APG3STAT_TRSET	( 0U )
#define PWM_USER_APG3STAT_FFACT	( 0U )
#define PWM_USER_APG3STAT_CLACT	( 0U )
#define PWM_USER_APG3STAT_FLT1ACT	( 0U )
#define PWM_USER_APG3STAT_FLT2ACT	( 0U )
#define PWM_USER_APG3STAT_SACT	( 0U )
#define PWM_USER_APG3STAT_CAPTR	( 0U )
#define PWM_USER_APG3STAT_FFEVT	( 0U )
#define PWM_USER_APG3STAT_CLEVT	( 0U )
#define PWM_USER_APG3STAT_FLT1EVT	( 0U )
#define PWM_USER_APG3STAT_FLT2EVT	( 0U )
#define PWM_USER_APG3STAT_SEVT	( 0U )

/*----------------------------------------------------------------------------*/
/* APG3IOCON1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3IOCON1_POLL	( PWM_DRV_APGIOCON_POLL_ACTIVE_HIGH )
#define PWM_USER_APG3IOCON1_POLH	( PWM_DRV_APGIOCON_POLH_ACTIVE_HIGH )
#define PWM_USER_APG3IOCON1_PENL	( PWM_DRV_APGIOCON_PENL_DISABLE )
#define PWM_USER_APG3IOCON1_PENH	( PWM_DRV_APGIOCON_PENH_DISABLE )
#define PWM_USER_APG3IOCON1_PMOD	( PWM_DRV_APGIOCON_PMOD_COMPLEMENTARY )
#define PWM_USER_APG3IOCON1_DTCMPSEL	( PWM_DRV_APGIOCON_DTCMPSEL_PCI_SYNC )
#define PWM_USER_APG3IOCON1_SWAP	( PWM_DRV_APGIOCON_SWAP_DISABLE )
#define PWM_USER_APG3IOCON1_PPSEN	( PWM_DRV_APGIOCON_PPSEN_DISABLE )
#define PWM_USER_APG3IOCON1_FORCEON	( 0u )
#define PWM_USER_APG3IOCON1_CAPTRSEL ( 0u )
#define PWM_USER_APG3IOCON1_CAPTREN  ( 0u )
#define PWM_USER_APG3IOCON1_CAPEN	( 0u )
#define PWM_USER_APG3IOCON1_CAPSRC	( PWM_DRV_APGIOCON_CAPSRC_SOFTWARE )
/*----------------------------------------------------------------------------*/
/* APG3IOCON2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3IOCON2_DBDAT	( PWM_DRV_APGIOCON_DBDAT_HL_LL )
#define PWM_USER_APG3IOCON2_FFDAT	( PWM_DRV_APGIOCON_FFDAT_HL_LL )
#define PWM_USER_APG3IOCON2_CLDAT	( PWM_DRV_APGIOCON_CLDAT_HL_LL )
#define PWM_USER_APG3IOCON2_FLT1DAT	( PWM_DRV_APGIOCON_FLTDAT_HL_LL )
#define PWM_USER_APG3IOCON2_FLT2DAT	( PWM_DRV_APGIOCON_FLTDAT_HL_LL )
#define PWM_USER_APG3IOCON2_OSYNC	( PWM_DRV_APGIOCON_OSYNC_TIMEBASE )
#define PWM_USER_APG3IOCON2_OVRDAT	( PWM_DRV_APGIOCON_OVRDAT_HL_LL )
#define PWM_USER_APG3IOCON2_OVRENL	( PWM_DRV_APGIOCON_OVRENL_DISABLE )
#define PWM_USER_APG3IOCON2_OVRENH	( PWM_DRV_APGIOCON_OVRENH_DISABLE )
#define PWM_USER_APG3IOCON2_CLMOD	( PWM_DRV_APGIOCON_CLMOD_CLDAT)
/*----------------------------------------------------------------------------*/
/* APG3EVT1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3EVT1_ADTR1EN1	( PWM_DRV_APGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_APG3EVT1_ADTR1EN2	( PWM_DRV_APGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_APG3EVT1_ADTR1EN3	( PWM_DRV_APGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_APG3EVT1_ADTR1PS	( 0u )
#define PWM_USER_APG3EVT1_ADTR1OFS	( PWM_DRV_APGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_APG3EVT1_DACTREN1	( 0u )
#define PWM_USER_APG3EVT1_DACTREN2	( 0u )
#define PWM_USER_APG3EVT1_PGTRGSEL	( PWM_DRV_APGEVT_PGTRGSEL_EOC )
#define PWM_USER_APG3EVT1_UPDTRG	( PWM_DRV_APGEVT_UPDTRG_MANUAL )
#define PWM_USER_APG3EVT1_PWMPCI	( PWM_DRV_APGEVT_PWMPCI_PWMGEN1 )
#define PWM_USER_APG3EVT1_IEVTSEL	( PWM_DRV_APGEVT_IEVTSEL_EOC )
#define PWM_USER_APG3EVT1_SIEN		( PWM_DRV_APGEVT_SIEN_DISABLE)
#define PWM_USER_APG3EVT1_FFIEN		( PWM_DRV_APGEVT_FFIEN_DISABLE )
#define PWM_USER_APG3EVT1_CLIEN		( PWM_DRV_APGEVT_CLIEN_DISABLE )
#define PWM_USER_APG3EVT1_FLT1IEN	( PWM_DRV_APGEVT_FLTIEN_DISABLE )
#define PWM_USER_APG3EVT1_FLT2IEN	( PWM_DRV_APGEVT_FLTIEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* APG3EVT2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3EVT2_ADTR2EN1	( PWM_DRV_APGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_APG3EVT2_ADTR2EN2	( PWM_DRV_APGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_APG3EVT2_ADTR2EN3	( PWM_DRV_APGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_APG3EVT2_ADTR2PS	( 0u )
#define PWM_USER_APG3EVT2_ADTR2OFS	( PWM_DRV_APGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_APG3EVT2_CAPTRPS	( 0u )
#define PWM_USER_APG3EVT2_CAPTROFS	( 0u )
/*----------------------------------------------------------------------------*/
/* APG3F1PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3F1PCI1_PSS		( PWM_DRV_APGPCI_PSS_0)
#define PWM_USER_APG3F1PCI1_PPS		( PWM_DRV_APGPCI_PPS_NOT_INVERT)
#define PWM_USER_APG3F1PCI1_PSYNC	( PWM_DRV_APGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_APG3F1PCI1_SWTERM	( 0u )
#define PWM_USER_APG3F1PCI1_AQSS	( PWM_DRV_APGPCI_AQSS_1)
#define PWM_USER_APG3F1PCI1_AQPS	( PWM_DRV_APGPCI_AQPS_NOT_INVERT )
#define PWM_USER_APG3F1PCI1_TERM	( PWM_DRV_APGPCI_TERM_MANUAL )
#define PWM_USER_APG3F1PCI1_TSYNCDIS	( PWM_DRV_APGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_APG3F1PCI1_TQSS	( PWM_DRV_APGPCI_TQSS_1)
#define PWM_USER_APG3F1PCI1_TQPS	( PWM_DRV_APGPCI_TQPS_NOT_INVERT )
#define PWM_USER_APG3F1PCI1_LATMOD	( PWM_DRV_APGPCI_LATMODE_SET_DOMI )
#define PWM_USER_APG3F1PCI1_SWPCIM	( PWM_DRV_APGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_APG3F1PCI1_SWPCI	( PWM_DRV_APGPCI_SWPCI_DISABLE)
#define PWM_USER_APG3F1PCI1_ACP		( PWM_DRV_APGPCI_ACP_LEVEL )
#define PWM_USER_APG3F1PCI1_TERMPS	( PWM_DRV_APGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_APG3F1PCI1_BPSEL	( PWM_DRV_APGPCI_BPSEL_PWM1 )
#define PWM_USER_APG3F1PCI1_BPEN	( PWM_DRV_APGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* APG3F1PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3F1PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* APG3F2PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3F2PCI1_PSS		( PWM_DRV_APGPCI_PSS_0)
#define PWM_USER_APG3F2PCI1_PPS		( PWM_DRV_APGPCI_PPS_NOT_INVERT)
#define PWM_USER_APG3F2PCI1_PSYNC	( PWM_DRV_APGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_APG3F2PCI1_SWTERM	( 0u )
#define PWM_USER_APG3F2PCI1_AQSS	( PWM_DRV_APGPCI_AQSS_1)
#define PWM_USER_APG3F2PCI1_AQPS	( PWM_DRV_APGPCI_AQPS_NOT_INVERT )
#define PWM_USER_APG3F2PCI1_TERM	( PWM_DRV_APGPCI_TERM_MANUAL )
#define PWM_USER_APG3F2PCI1_TSYNCDIS	( PWM_DRV_APGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_APG3F2PCI1_TQSS	( PWM_DRV_APGPCI_TQSS_1)
#define PWM_USER_APG3F2PCI1_TQPS	( PWM_DRV_APGPCI_TQPS_NOT_INVERT )
#define PWM_USER_APG3F2PCI1_LATMOD	( PWM_DRV_APGPCI_LATMODE_SET_DOMI )
#define PWM_USER_APG3F2PCI1_SWPCIM	( PWM_DRV_APGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_APG3F2PCI1_SWPCI	( PWM_DRV_APGPCI_SWPCI_DISABLE)
#define PWM_USER_APG3F2PCI1_ACP		( PWM_DRV_APGPCI_ACP_LEVEL )
#define PWM_USER_APG3F2PCI1_TERMPS	( PWM_DRV_APGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_APG3F2PCI1_BPSEL	( PWM_DRV_APGPCI_BPSEL_PWM1 )
#define PWM_USER_APG3F2PCI1_BPEN	( PWM_DRV_APGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* APG3F2PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3F2PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* APG3CLPCI */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3CLPCI1_PSS		( PWM_DRV_APGPCI_PSS_0)
#define PWM_USER_APG3CLPCI1_PPS		( PWM_DRV_APGPCI_PPS_NOT_INVERT)
#define PWM_USER_APG3CLPCI1_PSYNC	( PWM_DRV_APGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_APG3CLPCI1_SWTERM	( 0u )
#define PWM_USER_APG3CLPCI1_AQSS	( PWM_DRV_APGPCI_AQSS_1)
#define PWM_USER_APG3CLPCI1_AQPS	( PWM_DRV_APGPCI_AQPS_NOT_INVERT )
#define PWM_USER_APG3CLPCI1_TERM	( PWM_DRV_APGPCI_TERM_MANUAL )
#define PWM_USER_APG3CLPCI1_TSYNCDIS	( PWM_DRV_APGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_APG3CLPCI1_TQSS	( PWM_DRV_APGPCI_TQSS_1)
#define PWM_USER_APG3CLPCI1_TQPS	( PWM_DRV_APGPCI_TQPS_NOT_INVERT )
#define PWM_USER_APG3CLPCI1_LATMOD	( PWM_DRV_APGPCI_LATMODE_SET_DOMI )
#define PWM_USER_APG3CLPCI1_SWPCIM	( PWM_DRV_APGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_APG3CLPCI1_SWPCI	( PWM_DRV_APGPCI_SWPCI_DISABLE)
#define PWM_USER_APG3CLPCI1_ACP		( PWM_DRV_APGPCI_ACP_LEVEL )
#define PWM_USER_APG3CLPCI1_TERMPS	( PWM_DRV_APGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_APG3CLPCI1_BPSEL	( PWM_DRV_APGPCI_BPSEL_PWM1 )
#define PWM_USER_APG3CLPCI1_BPEN	( PWM_DRV_APGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* APG3CLPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3CLPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* APG3FFPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3FFPCI1_PSS			( PWM_DRV_APGPCI_PSS_0)
#define PWM_USER_APG3FFPCI1_PPS			( PWM_DRV_APGPCI_PPS_NOT_INVERT)
#define PWM_USER_APG3FFPCI1_PSYNC		( PWM_DRV_APGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_APG3FFPCI1_SWTERM		( 0u )
#define PWM_USER_APG3FFPCI1_AQSS		( PWM_DRV_APGPCI_AQSS_1)
#define PWM_USER_APG3FFPCI1_AQPS		( PWM_DRV_APGPCI_AQPS_NOT_INVERT )
#define PWM_USER_APG3FFPCI1_TERM		( PWM_DRV_APGPCI_TERM_MANUAL )
#define PWM_USER_APG3FFPCI1_TSYNCDIS	( PWM_DRV_APGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_APG3FFPCI1_TQSS		( PWM_DRV_APGPCI_TQSS_1)
#define PWM_USER_APG3FFPCI1_TQPS		( PWM_DRV_APGPCI_TQPS_NOT_INVERT )
#define PWM_USER_APG3FFPCI1_LATMOD		( PWM_DRV_APGPCI_LATMODE_SET_DOMI )
#define PWM_USER_APG3FFPCI1_SWPCIM		( PWM_DRV_APGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_APG3FFPCI1_SWPCI		( PWM_DRV_APGPCI_SWPCI_DISABLE)
#define PWM_USER_APG3FFPCI1_ACP			( PWM_DRV_APGPCI_ACP_LEVEL )
#define PWM_USER_APG3FFPCI1_TERMPS		( PWM_DRV_APGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_APG3FFPCI1_BPSEL		( PWM_DRV_APGPCI_BPSEL_PWM1 )
#define PWM_USER_APG3FFPCI1_BPEN		( PWM_DRV_APGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* APG3FFPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3FFPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* APG3SPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3SPCI1_PSS			( PWM_DRV_APGPCI_PSS_0)
#define PWM_USER_APG3SPCI1_PPS			( PWM_DRV_APGPCI_PPS_NOT_INVERT)
#define PWM_USER_APG3SPCI1_PSYNC		( PWM_DRV_APGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_APG3SPCI1_SWTERM		( 0u )
#define PWM_USER_APG3SPCI1_AQSS			( PWM_DRV_APGPCI_AQSS_1)
#define PWM_USER_APG3SPCI1_AQPS			( PWM_DRV_APGPCI_AQPS_NOT_INVERT )
#define PWM_USER_APG3SPCI1_TERM			( PWM_DRV_APGPCI_TERM_MANUAL )
#define PWM_USER_APG3SPCI1_TSYNCDIS		( PWM_DRV_APGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_APG3SPCI1_TQSS			( PWM_DRV_APGPCI_TQSS_1)
#define PWM_USER_APG3SPCI1_TQPS			( PWM_DRV_APGPCI_TQPS_NOT_INVERT )
#define PWM_USER_APG3SPCI1_LATMOD		( PWM_DRV_APGPCI_LATMODE_SET_DOMI )
#define PWM_USER_APG3SPCI1_SWPCIM		( PWM_DRV_APGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_APG3SPCI1_SWPCI		( PWM_DRV_APGPCI_SWPCI_DISABLE)
#define PWM_USER_APG3SPCI1_ACP			( PWM_DRV_APGPCI_ACP_LEVEL )
#define PWM_USER_APG3SPCI1_TERMPS		( PWM_DRV_APGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_APG3SPCI1_BPSEL		( PWM_DRV_APGPCI_BPSEL_PWM1 )
#define PWM_USER_APG3SPCI1_BPEN			( PWM_DRV_APGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* APG3SPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3SPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* APG3LEB */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3LEB_LEB		( 0u )
#define PWM_USER_APG3LEB_PLF		( PWM_DRV_APGLEB_DISABLE )
#define PWM_USER_APG3LEB_PLR		( PWM_DRV_APGLEB_DISABLE )
#define PWM_USER_APG3LEB_PHF		( PWM_DRV_APGLEB_DISABLE )
#define PWM_USER_APG3LEB_PHR		( PWM_DRV_APGLEB_DISABLE )
#define PWM_USER_APG3LEB_TRGA		( 0U )
#define PWM_USER_APG3LEB_TRGB		( 0U )
#define PWM_USER_APG3LEB_TRGC		( 0U )
#define PWM_USER_APG3LEB_TRGD		( 0U )
/*----------------------------------------------------------------------------*/
/* APG3PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* APG3PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3PHASE_PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* APG3DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3DC	( 0U )
/*----------------------------------------------------------------------------*/
/* APG3DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3DC_DC	( 0U )
/*----------------------------------------------------------------------------*/
/* APG3DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* APG3DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3DCA_DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* APG3PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3PER	( 0U )
/*----------------------------------------------------------------------------*/
/* APG3PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3PER_PER	( 0U )
/*----------------------------------------------------------------------------*/
/* APG3TRIGAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3TRIGA_TRIGA	( 0U )
#define PWM_USER_APG3TRIGA_CAHALF	( PWM_DRV_APGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* APG3TRIGBレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3TRIGB_TRIGB	( 0u )
#define PWM_USER_APG3TRIGB_CAHALF	( PWM_DRV_APGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* APG3TRIGCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3TRIGC_TRIGC	( 0u )
#define PWM_USER_APG3TRIGC_CAHALF	( PWM_DRV_APGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* APG3TRIGDレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3TRIGD_TRIGD	( 0U )
#define PWM_USER_APG3TRIGD_CAHALF	( PWM_DRV_APGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* APG3TRIGEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3TRIGE_TRIGE	( 0U )
#define PWM_USER_APG3TRIGE_CAHALF	( PWM_DRV_APGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* APG3TRIGFレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3TRIGF_TRIGF	( 0U )
#define PWM_USER_APG3TRIGF_CAHALF	( PWM_DRV_APGTRIG_FIRST )

/*----------------------------------------------------------------------------*/
/* APG3DTレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3DT_DTL	( 0U )
#define PWM_USER_APG3DT_DTH	( 0U )
/*----------------------------------------------------------------------------*/
/* APG3CAPレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG3CAP	( 0U )

/*----------------------------------------------------------------------------*/
/* APG4CON */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4CON_MODSEL		( PWM_DRV_APGCON_MODSEL_INDEPENDENT_EDGE )
#define PWM_USER_APG4CON_CLKSEL		( PWM_DRV_APGCON_CLKSEL_MCLKSEL )
#define PWM_USER_APG4CON_HREN		( 0U )
#define PWM_USER_APG4CON_TRGCNT		( PWM_DRV_APGCON_TRGCNT_1CYCLE)
#define PWM_USER_APG4CON_ON			( PWM_DRV_APGCON_ON_ENABLE )
#define PWM_USER_APG4CON_SOCS		( PWM_DRV_APGCON_SOCS_LOCAL_EOC )
#define PWM_USER_APG4CON_TRGMOD		( PWM_DRV_APGCON_TRGMOD_SINGLE_TRIGGER )
#define PWM_USER_APG4CON_UPDMOD		( PWM_DRV_APGCON_UPDMOD_SOC )
#define PWM_USER_APG4CON_MSTEN		( PWM_DRV_APGCON_MSTEN_DISABLE )
#define PWM_USER_APG4CON_MPHSEL		( PWM_DRV_APGCON_MPHSEL_PGPHASE )
#define PWM_USER_APG4CON_MPERSEL	( PWM_DRV_APGCON_MPERSEL_PGPER )
#define PWM_USER_APG4CON_MDCSEL		( PWM_DRV_APGCON_MDCSEL_PGDC )

/*----------------------------------------------------------------------------*/
/* APG4STATレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4STAT_TRIG		( 0U )
#define PWM_USER_APG4STAT_CAHALF	( 0U )
#define PWM_USER_APG4STAT_STEER		( 0U )
#define PWM_USER_APG4STAT_UPDREQ	( 0U )
#define PWM_USER_APG4STAT_UPDATE	( 0U )
#define PWM_USER_APG4STAT_CAP		( 0U )
#define PWM_USER_APG4STAT_TRCLR		( 0U )
#define PWM_USER_APG4STAT_TRSET		( 0U )
#define PWM_USER_APG4STAT_FFACT		( 0U )
#define PWM_USER_APG4STAT_CLACT		( 0U )
#define PWM_USER_APG4STAT_FLT1ACT	( 0U )
#define PWM_USER_APG4STAT_FLT2ACT	( 0U )
#define PWM_USER_APG4STAT_SACT		( 0U )
#define PWM_USER_APG4STAT_CAPTR		( 0U )
#define PWM_USER_APG4STAT_FFEVT		( 0U )
#define PWM_USER_APG4STAT_CLEVT		( 0U )
#define PWM_USER_APG4STAT_FLT1EVT	( 0U )
#define PWM_USER_APG4STAT_FLT2EVT	( 0U )
#define PWM_USER_APG4STAT_SEVT		( 0U )

/*----------------------------------------------------------------------------*/
/* APG4IOCON1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4IOCON1_POLL		( PWM_DRV_APGIOCON_POLL_ACTIVE_HIGH )
#define PWM_USER_APG4IOCON1_POLH		( PWM_DRV_APGIOCON_POLH_ACTIVE_HIGH )
#define PWM_USER_APG4IOCON1_PENL		( PWM_DRV_APGIOCON_PENL_DISABLE )
#define PWM_USER_APG4IOCON1_PENH		( PWM_DRV_APGIOCON_PENH_DISABLE )
#define PWM_USER_APG4IOCON1_PMOD		( PWM_DRV_APGIOCON_PMOD_COMPLEMENTARY )
#define PWM_USER_APG4IOCON1_DTCMPSEL	( PWM_DRV_APGIOCON_DTCMPSEL_PCI_SYNC )
#define PWM_USER_APG4IOCON1_SWAP		( PWM_DRV_APGIOCON_SWAP_DISABLE )
#define PWM_USER_APG4IOCON1_PPSEN		( PWM_DRV_APGIOCON_PPSEN_DISABLE )
#define PWM_USER_APG4IOCON1_FORCEON		( 0u )
#define PWM_USER_APG4IOCON1_CAPTRSEL	( 0u )
#define PWM_USER_APG4IOCON1_CAPTREN		( 0u )
#define PWM_USER_APG4IOCON1_CAPEN		( 0u )
#define PWM_USER_APG4IOCON1_CAPSRC		( PWM_DRV_APGIOCON_CAPSRC_SOFTWARE )
/*----------------------------------------------------------------------------*/
/* APG4IOCON2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4IOCON2_DBDAT	( PWM_DRV_APGIOCON_DBDAT_HL_LL )
#define PWM_USER_APG4IOCON2_FFDAT	( PWM_DRV_APGIOCON_FFDAT_HL_LL )
#define PWM_USER_APG4IOCON2_CLDAT	( PWM_DRV_APGIOCON_CLDAT_HL_LL )
#define PWM_USER_APG4IOCON2_FLT1DAT	( PWM_DRV_APGIOCON_FLTDAT_HL_LL )
#define PWM_USER_APG4IOCON2_FLT2DAT	( PWM_DRV_APGIOCON_FLTDAT_HL_LL )
#define PWM_USER_APG4IOCON2_OSYNC	( PWM_DRV_APGIOCON_OSYNC_TIMEBASE )
#define PWM_USER_APG4IOCON2_OVRDAT	( PWM_DRV_APGIOCON_OVRDAT_HL_LL )
#define PWM_USER_APG4IOCON2_OVRENL	( PWM_DRV_APGIOCON_OVRENL_DISABLE )
#define PWM_USER_APG4IOCON2_OVRENH	( PWM_DRV_APGIOCON_OVRENH_DISABLE )
#define PWM_USER_APG4IOCON2_CLMOD	( PWM_DRV_APGIOCON_CLMOD_CLDAT)
/*----------------------------------------------------------------------------*/
/* APG4EVT1 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4EVT1_ADTR1EN1	( PWM_DRV_APGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_APG4EVT1_ADTR1EN2	( PWM_DRV_APGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_APG4EVT1_ADTR1EN3	( PWM_DRV_APGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_APG4EVT1_ADTR1PS	( 0u )
#define PWM_USER_APG4EVT1_ADTR1OFS	( PWM_DRV_APGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_APG4EVT1_DACTREN1	( 0u )
#define PWM_USER_APG4EVT1_DACTREN2	( 0u )
#define PWM_USER_APG4EVT1_PGTRGSEL	( PWM_DRV_APGEVT_PGTRGSEL_EOC )
#define PWM_USER_APG4EVT1_UPDTRG	( PWM_DRV_APGEVT_UPDTRG_MANUAL )
#define PWM_USER_APG4EVT1_PWMPCI	( PWM_DRV_APGEVT_PWMPCI_PWMGEN1 )
#define PWM_USER_APG4EVT1_IEVTSEL	( PWM_DRV_APGEVT_IEVTSEL_EOC )
#define PWM_USER_APG4EVT1_SIEN		( PWM_DRV_APGEVT_SIEN_DISABLE)
#define PWM_USER_APG4EVT1_FFIEN		( PWM_DRV_APGEVT_FFIEN_DISABLE )
#define PWM_USER_APG4EVT1_CLIEN		( PWM_DRV_APGEVT_CLIEN_DISABLE )
#define PWM_USER_APG4EVT1_FLT1IEN	( PWM_DRV_APGEVT_FLTIEN_DISABLE )
#define PWM_USER_APG4EVT1_FLT2IEN	( PWM_DRV_APGEVT_FLTIEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* APG4EVT2 */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4EVT2_ADTR2EN1	( PWM_DRV_APGEVT_ADTR1EN1_DISABLE )
#define PWM_USER_APG4EVT2_ADTR2EN2	( PWM_DRV_APGEVT_ADTR1EN2_DISABLE)
#define PWM_USER_APG4EVT2_ADTR2EN3	( PWM_DRV_APGEVT_ADTR1EN3_DISABLE )
#define PWM_USER_APG4EVT2_ADTR2PS	( 0u )
#define PWM_USER_APG4EVT2_ADTR2OFS	( PWM_DRV_APGEVT_ADTR1OFS_NO_OFFSET )
#define PWM_USER_APG4EVT2_CAPTRPS	( 0u )
#define PWM_USER_APG4EVT2_CAPTROFS	( 0u )
/*----------------------------------------------------------------------------*/
/* APG4F1PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4F1PCI1_PSS			( PWM_DRV_APGPCI_PSS_0)
#define PWM_USER_APG4F1PCI1_PPS			( PWM_DRV_APGPCI_PPS_NOT_INVERT)
#define PWM_USER_APG4F1PCI1_PSYNC		( PWM_DRV_APGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_APG4F1PCI1_SWTERM		( 0u )
#define PWM_USER_APG4F1PCI1_AQSS		( PWM_DRV_APGPCI_AQSS_1)
#define PWM_USER_APG4F1PCI1_AQPS		( PWM_DRV_APGPCI_AQPS_NOT_INVERT )
#define PWM_USER_APG4F1PCI1_TERM		( PWM_DRV_APGPCI_TERM_MANUAL )
#define PWM_USER_APG4F1PCI1_TSYNCDIS	( PWM_DRV_APGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_APG4F1PCI1_TQSS		( PWM_DRV_APGPCI_TQSS_1)
#define PWM_USER_APG4F1PCI1_TQPS		( PWM_DRV_APGPCI_TQPS_NOT_INVERT )
#define PWM_USER_APG4F1PCI1_LATMOD		( PWM_DRV_APGPCI_LATMODE_SET_DOMI )
#define PWM_USER_APG4F1PCI1_SWPCIM		( PWM_DRV_APGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_APG4F1PCI1_SWPCI		( PWM_DRV_APGPCI_SWPCI_DISABLE)
#define PWM_USER_APG4F1PCI1_ACP			( PWM_DRV_APGPCI_ACP_LEVEL )
#define PWM_USER_APG4F1PCI1_TERMPS		( PWM_DRV_APGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_APG4F1PCI1_BPSEL		( PWM_DRV_APGPCI_BPSEL_PWM1 )
#define PWM_USER_APG4F1PCI1_BPEN		( PWM_DRV_APGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* APG4F1PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4F1PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* APG4F2PCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4F2PCI1_PSS			( PWM_DRV_APGPCI_PSS_0)
#define PWM_USER_APG4F2PCI1_PPS			( PWM_DRV_APGPCI_PPS_NOT_INVERT)
#define PWM_USER_APG4F2PCI1_PSYNC		( PWM_DRV_APGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_APG4F2PCI1_SWTERM		( 0u )
#define PWM_USER_APG4F2PCI1_AQSS		( PWM_DRV_APGPCI_AQSS_1)
#define PWM_USER_APG4F2PCI1_AQPS		( PWM_DRV_APGPCI_AQPS_NOT_INVERT )
#define PWM_USER_APG4F2PCI1_TERM		( PWM_DRV_APGPCI_TERM_MANUAL )
#define PWM_USER_APG4F2PCI1_TSYNCDIS	( PWM_DRV_APGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_APG4F2PCI1_TQSS		( PWM_DRV_APGPCI_TQSS_1)
#define PWM_USER_APG4F2PCI1_TQPS		( PWM_DRV_APGPCI_TQPS_NOT_INVERT )
#define PWM_USER_APG4F2PCI1_LATMOD		( PWM_DRV_APGPCI_LATMODE_SET_DOMI )
#define PWM_USER_APG4F2PCI1_SWPCIM		( PWM_DRV_APGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_APG4F2PCI1_SWPCI		( PWM_DRV_APGPCI_SWPCI_DISABLE)
#define PWM_USER_APG4F2PCI1_ACP			( PWM_DRV_APGPCI_ACP_LEVEL )
#define PWM_USER_APG4F2PCI1_TERMPS		( PWM_DRV_APGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_APG4F2PCI1_BPSEL		( PWM_DRV_APGPCI_BPSEL_PWM1 )
#define PWM_USER_APG4F2PCI1_BPEN		( PWM_DRV_APGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* APG4F2PCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4F2PCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* APG4CLPCI */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4CLPCI1_PSS			( PWM_DRV_APGPCI_PSS_0)
#define PWM_USER_APG4CLPCI1_PPS			( PWM_DRV_APGPCI_PPS_NOT_INVERT)
#define PWM_USER_APG4CLPCI1_PSYNC		( PWM_DRV_APGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_APG4CLPCI1_SWTERM		( 0u )
#define PWM_USER_APG4CLPCI1_AQSS		( PWM_DRV_APGPCI_AQSS_1)
#define PWM_USER_APG4CLPCI1_AQPS		( PWM_DRV_APGPCI_AQPS_NOT_INVERT )
#define PWM_USER_APG4CLPCI1_TERM		( PWM_DRV_APGPCI_TERM_MANUAL )
#define PWM_USER_APG4CLPCI1_TSYNCDIS	( PWM_DRV_APGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_APG4CLPCI1_TQSS		( PWM_DRV_APGPCI_TQSS_1)
#define PWM_USER_APG4CLPCI1_TQPS		( PWM_DRV_APGPCI_TQPS_NOT_INVERT )
#define PWM_USER_APG4CLPCI1_LATMOD		( PWM_DRV_APGPCI_LATMODE_SET_DOMI )
#define PWM_USER_APG4CLPCI1_SWPCIM		( PWM_DRV_APGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_APG4CLPCI1_SWPCI		( PWM_DRV_APGPCI_SWPCI_DISABLE)
#define PWM_USER_APG4CLPCI1_ACP			( PWM_DRV_APGPCI_ACP_LEVEL )
#define PWM_USER_APG4CLPCI1_TERMPS		( PWM_DRV_APGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_APG4CLPCI1_BPSEL		( PWM_DRV_APGPCI_BPSEL_PWM1 )
#define PWM_USER_APG4CLPCI1_BPEN		( PWM_DRV_APGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* APG4CLPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4CLPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* APG4FFPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4FFPCI1_PSS			( PWM_DRV_APGPCI_PSS_0)
#define PWM_USER_APG4FFPCI1_PPS			( PWM_DRV_APGPCI_PPS_NOT_INVERT)
#define PWM_USER_APG4FFPCI1_PSYNC		( PWM_DRV_APGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_APG4FFPCI1_SWTERM		( 0u )
#define PWM_USER_APG4FFPCI1_AQSS		( PWM_DRV_APGPCI_AQSS_1)
#define PWM_USER_APG4FFPCI1_AQPS		( PWM_DRV_APGPCI_AQPS_NOT_INVERT )
#define PWM_USER_APG4FFPCI1_TERM		( PWM_DRV_APGPCI_TERM_MANUAL )
#define PWM_USER_APG4FFPCI1_TSYNCDIS	( PWM_DRV_APGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_APG4FFPCI1_TQSS		( PWM_DRV_APGPCI_TQSS_1)
#define PWM_USER_APG4FFPCI1_TQPS		( PWM_DRV_APGPCI_TQPS_NOT_INVERT )
#define PWM_USER_APG4FFPCI1_LATMOD		( PWM_DRV_APGPCI_LATMODE_SET_DOMI )
#define PWM_USER_APG4FFPCI1_SWPCIM		( PWM_DRV_APGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_APG4FFPCI1_SWPCI		( PWM_DRV_APGPCI_SWPCI_DISABLE)
#define PWM_USER_APG4FFPCI1_ACP			( PWM_DRV_APGPCI_ACP_LEVEL )
#define PWM_USER_APG4FFPCI1_TERMPS		( PWM_DRV_APGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_APG4FFPCI1_BPSEL		( PWM_DRV_APGPCI_BPSEL_PWM1 )
#define PWM_USER_APG4FFPCI1_BPEN		( PWM_DRV_APGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* APG4FFPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4FFPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* APG4SPCI1レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4SPCI1_PSS			( PWM_DRV_APGPCI_PSS_0)
#define PWM_USER_APG4SPCI1_PPS			( PWM_DRV_APGPCI_PPS_NOT_INVERT)
#define PWM_USER_APG4SPCI1_PSYNC		( PWM_DRV_APGPCI_PSYNC_NOT_PWM_EOC )
#define PWM_USER_APG4SPCI1_SWTERM		( 0u )
#define PWM_USER_APG4SPCI1_AQSS			( PWM_DRV_APGPCI_AQSS_1)
#define PWM_USER_APG4SPCI1_AQPS			( PWM_DRV_APGPCI_AQPS_NOT_INVERT )
#define PWM_USER_APG4SPCI1_TERM			( PWM_DRV_APGPCI_TERM_MANUAL )
#define PWM_USER_APG4SPCI1_TSYNCDIS		( PWM_DRV_APGPCI_TSYNCDIS_PWM_EOC )
#define PWM_USER_APG4SPCI1_TQSS			( PWM_DRV_APGPCI_TQSS_1)
#define PWM_USER_APG4SPCI1_TQPS			( PWM_DRV_APGPCI_TQPS_NOT_INVERT )
#define PWM_USER_APG4SPCI1_LATMOD		( PWM_DRV_APGPCI_LATMODE_SET_DOMI )
#define PWM_USER_APG4SPCI1_SWPCIM		( PWM_DRV_APGPCI_SWPCIM_PCI_ACCPT )
#define PWM_USER_APG4SPCI1_SWPCI		( PWM_DRV_APGPCI_SWPCI_DISABLE)
#define PWM_USER_APG4SPCI1_ACP			( PWM_DRV_APGPCI_ACP_LEVEL )
#define PWM_USER_APG4SPCI1_TERMPS		( PWM_DRV_APGPCI_TERMPS_NOT_INVERT )
#define PWM_USER_APG4SPCI1_BPSEL		( PWM_DRV_APGPCI_BPSEL_PWM1 )
#define PWM_USER_APG4SPCI1_BPEN			( PWM_DRV_APGPCI_BPEN_DISABLE )
/*----------------------------------------------------------------------------*/
/* APG4SPCI2レジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4SPCI2	( 0U )
/*----------------------------------------------------------------------------*/
/* APG4LEB */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4LEB_LEB		( 0u )
#define PWM_USER_APG4LEB_PLF		( PWM_DRV_APGLEB_DISABLE )
#define PWM_USER_APG4LEB_PLR		( PWM_DRV_APGLEB_DISABLE )
#define PWM_USER_APG4LEB_PHF		( PWM_DRV_APGLEB_DISABLE )
#define PWM_USER_APG4LEB_PHR		( PWM_DRV_APGLEB_DISABLE )
#define PWM_USER_APG4LEB_TRGA		( 0U )
#define PWM_USER_APG4LEB_TRGB		( 0U )
#define PWM_USER_APG4LEB_TRGC		( 0U )
#define PWM_USER_APG4LEB_TRGD		( 0U )
/*----------------------------------------------------------------------------*/
/* APG4PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* APG4PHASEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4PHASE_PHASE	( 0U )
/*----------------------------------------------------------------------------*/
/* APG4DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4DC	( 0U )
/*----------------------------------------------------------------------------*/
/* APG4DCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4DC_DC	( 0U )
/*----------------------------------------------------------------------------*/
/* APG4DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* APG4DCAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4DCA_DCA	( 0U )
/*----------------------------------------------------------------------------*/
/* APG4PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4PER	( 0U )
/*----------------------------------------------------------------------------*/
/* APG4PERレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4PER_PER	( 0U )
/*----------------------------------------------------------------------------*/
/* APG4TRIGAレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4TRIGA_TRIGA	( 0U )
#define PWM_USER_APG4TRIGA_CAHALF	( PWM_DRV_APGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* APG4TRIGBレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4TRIGB_TRIGB	( 0u )
#define PWM_USER_APG4TRIGB_CAHALF	( PWM_DRV_APGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* APG4TRIGCレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4TRIGC_TRIGC	( 0u )
#define PWM_USER_APG4TRIGC_CAHALF	( PWM_DRV_APGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* APG4TRIGDレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4TRIGD_TRIGD	( 0U )
#define PWM_USER_APG4TRIGD_CAHALF	( PWM_DRV_APGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* APG4TRIGEレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4TRIGE_TRIGE	( 0U )
#define PWM_USER_APG4TRIGE_CAHALF	( PWM_DRV_APGTRIG_FIRST )
/*----------------------------------------------------------------------------*/
/* APG4TRIGFレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4TRIGF_TRIGF	( 0U )
#define PWM_USER_APG4TRIGF_CAHALF	( PWM_DRV_APGTRIG_FIRST )

/*----------------------------------------------------------------------------*/
/* APG4DTレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4DT_DTL	( 0U )
#define PWM_USER_APG4DT_DTH	( 0U )
/*----------------------------------------------------------------------------*/
/* APG4CAPレジスタ */
/*----------------------------------------------------------------------------*/
#define PWM_USER_APG4CAP	( 0U )
/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/

#endif	/* APWM_USER_H */

