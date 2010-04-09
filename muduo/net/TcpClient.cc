// Copyright 2010, Shuo Chen.  All rights reserved.
// http://code.google.com/p/muduo/
//
// Use of this source code is governed by a BSD-style license
// that can be found in the License file.

// Author: Shuo Chen (chenshuo at chenshuo dot com)
//

#include <muduo/net/TcpClient.h>
#include <muduo/net/Connector.h>

using namespace muduo;
using namespace muduo::net;


TcpClient::TcpClient(EventLoop* loop, const string& host, uint16_t port)
  : loop_(loop),
    serverAddr_(host, port)
{
}

TcpClient::TcpClient(EventLoop* loop, const InetAddress& serverAddr)
  : loop_(loop),
    serverAddr_(serverAddr)
{
}

TcpClient::~TcpClient()
{
}

void TcpClient::connect()
{
}