#include "PduR_If.h"

Std_ReturnType PduR_ARC_RouteTransmit(const PduRDestPdu_type * destination, const PduInfoType * pduInfo){return 0;}
void PduR_ARC_RouteRxIndication(const PduRDestPdu_type * destination, const PduInfoType *PduInfo){}
void PduR_ARC_RouteTxConfirmation(const PduRRoutingPath_type *route, uint8 result){}
Std_ReturnType PduR_ARC_RouteTriggerTransmit(const PduRRoutingPath_type *route, PduInfoType * pduInfo){return 0;}
BufReq_ReturnType PduR_ARC_RouteProvideRxBuffer(const PduRDestPdu_type * destination, PduLengthType TpSduLength, PduInfoType** PduInfoPtr){return BUFREQ_OK;}
BufReq_ReturnType PduR_ARC_RouteProvideTxBuffer(const PduRRoutingPath_type *route, PduLengthType TpSduLength, PduInfoType** PduInfoPtr){return BUFREQ_OK;}


Std_ReturnType PduR_ARC_Transmit(uint32 PduId, const PduInfoType* PduInfo, uint8 serviceId){return 0;}
void PduR_ARC_TpRxIndication(uint32 PduId, NotifResultType Result, uint8 serviceId){}
void PduR_ARC_RxIndication(uint32 PduId, const PduInfoType* PduInfo, uint8 serviceId){}
void PduR_ARC_TxConfirmation(uint32 PduId, uint8 result, uint8 serviceId){}
Std_ReturnType PduR_ARC_TriggerTransmit(uint32 PduId, PduInfoType* PduInfo, uint8 serviceId){return 0;}
BufReq_ReturnType PduR_ARC_ProvideRxBuffer(uint32 PduId, PduLengthType TpSduLength, PduInfoType** PduInfoPtr, uint8 serviceId){return BUFREQ_OK;}
BufReq_ReturnType PduR_ARC_ProvideTxBuffer(uint32 PduId, PduInfoType** PduInfoPtr, uint16 Length, uint8 serviceId){return BUFREQ_OK;}

// Prototypes for functions used locally in file PduR_Logic.c (prototypes needed to remove lint errors)
BufReq_ReturnType PduR_ARC_AllocateRxBuffer(uint32 PduId, PduLengthType TpSduLength){return BUFREQ_OK;}
BufReq_ReturnType PduR_ARC_AllocateTxBuffer(uint32 PduId, uint16 length){return BUFREQ_OK;}
BufReq_ReturnType PduR_ARC_ReleaseRxBuffer(uint32 PduId){return BUFREQ_OK;}
BufReq_ReturnType PduR_ARC_ReleaseTxBuffer(uint32 PduId){return BUFREQ_OK;}
void PduR_ARC_RxIndicationDirect(const PduRDestPdu_type * destination, const PduInfoType *PduInfo){}
void PduR_ARC_RxIndicationTT(const PduRDestPdu_type * destination, const PduInfoType *PduInfo, uint16 BufferLength){}
