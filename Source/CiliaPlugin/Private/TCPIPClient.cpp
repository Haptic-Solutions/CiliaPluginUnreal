// Fill out your copyright notice in the Description page of Project Settings.
#define debugString(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Cyan,text)
#define debugStringPlusFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT(text), fstring))
#include "TCPIPClient.h"
//static unsigned __int64 CiliaSocket;


FSocket* TCPIPClient::mSocket;
bool TCPIPClient::mConnected;

TCPIPClient::TCPIPClient()
{
}

TCPIPClient::~TCPIPClient()
{
}

void TCPIPClient::ConnectCilia(FIPv4Address aIPv4Address, uint16 aPort)
{
	mSocket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("default"), false);
	FIPv4Address ip = aIPv4Address;
	TSharedRef<FInternetAddr> addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	addr->SetIp(ip.Value);
	addr->SetPort(aPort);
	mConnected = mSocket->Connect(*addr);
	debugString("Trying To Connect");
	if (mConnected)
		debugString("Connected");
	else
		debugString("Failed to Connect");
	return;
}

void TCPIPClient::DisconnectCilia()
{
	if(mConnected)
		mSocket->Close();
	return;
}

void TCPIPClient::SendString(std::string aStringToSend)
{
	//print("Hi");
	//if (mConnected)
	//	print("Connected");
	//else
	//	print("Failed to Connect");
	int32 BytesSent;
	if (mConnected)
	{
		mSocket->Send((uint8 *)aStringToSend.c_str(), static_cast<int32>(aStringToSend.size()), BytesSent);
		//printf("Sending string 2 %s", aStringToSend.c_str());
	}
}