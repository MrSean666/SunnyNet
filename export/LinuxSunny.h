/* Code generated by cmd/cgo; DO NOT EDIT. */

/* package SunnyNet */


#line 1 "cgo-builtin-export-prolog"

#include <stddef.h>

#ifndef GO_CGO_EXPORT_PROLOGUE_H
#define GO_CGO_EXPORT_PROLOGUE_H

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef struct { const char *p; ptrdiff_t n; } _GoString_;
#endif

#endif

/* Start of preamble from import "C" comments.  */




/* End of preamble from import "C" comments.  */


/* Start of boilerplate cgo prologue.  */
#line 1 "cgo-gcc-export-header-prolog"

#ifndef GO_CGO_PROLOGUE_H
#define GO_CGO_PROLOGUE_H

typedef signed char GoInt8;
typedef unsigned char GoUint8;
typedef short GoInt16;
typedef unsigned short GoUint16;
typedef int GoInt32;
typedef unsigned int GoUint32;
typedef long long GoInt64;
typedef unsigned long long GoUint64;
typedef GoInt64 GoInt;
typedef GoUint64 GoUint;
typedef size_t GoUintptr;
typedef float GoFloat32;
typedef double GoFloat64;
#ifdef _MSC_VER
#include <complex.h>
typedef _Fcomplex GoComplex64;
typedef _Dcomplex GoComplex128;
#else
typedef float _Complex GoComplex64;
typedef double _Complex GoComplex128;
#endif

/*
  static assertion to make sure the file is being used on architecture
  at least with matching size of GoInt.
*/
typedef char _check_for_64_bit_pointer_matching_GoInt[sizeof(void*)==64/8 ? 1:-1];

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef _GoString_ GoString;
#endif
typedef void *GoMap;
typedef void *GoChan;
typedef struct { void *t; void *v; } GoInterface;
typedef struct { void *data; GoInt len; GoInt cap; } GoSlice;

#endif

/* End of boilerplate cgo prologue.  */

#ifdef __cplusplus
extern "C" {
#endif


// 获取SunnyNet版本
//
extern GoUintptr GetSunnyVersion();

// 释放指针
//
extern void Free(GoUintptr ptr);

// 创建Sunny中间件对象,可创建多个
//
extern GoInt CreateSunnyNet();

// ReleaseSunnyNet 释放SunnyNet
//
extern GoUint8 ReleaseSunnyNet(GoInt SunnyContext);

// 启动Sunny中间件 成功返回true
//
extern GoUint8 SunnyNetStart(GoInt SunnyContext);

// 设置指定端口 Sunny中间件启动之前调用
//
extern GoUint8 SunnyNetSetPort(GoInt SunnyContext, GoInt Port);

// 关闭停止指定Sunny中间件
//
extern GoUint8 SunnyNetClose(GoInt SunnyContext);

// 设置自定义证书
//
extern GoUint8 SunnyNetSetCert(GoInt SunnyContext, GoInt CertificateManagerId);

// 安装证书 将证书安装到Windows系统内
//
extern GoUintptr SunnyNetInstallCert(GoInt SunnyContext);

// 设置中间件回调地址 httpCallback
//
extern GoUint8 SunnyNetSetCallback(GoInt SunnyContext, GoInt httpCallback, GoInt tcpCallback, GoInt wsCallback, GoInt udpCallback);

// 添加 S5代理需要验证的用户名
//
extern GoUint8 SunnyNetSocket5AddUser(GoInt SunnyContext, char* User, char* Pass);

// 开启身份验证模式
//
extern GoUint8 SunnyNetVerifyUser(GoInt SunnyContext, GoUint8 open);

// 删除 S5需要验证的用户名
//
extern GoUint8 SunnyNetSocket5DelUser(GoInt SunnyContext, char* User);

// 设置中间件是否开启强制走TCP
//
extern void SunnyNetMustTcp(GoInt SunnyContext, GoUint8 open);

// 设置中间件上游代理使用规则
//
extern GoUint8 CompileProxyRegexp(GoInt SunnyContext, char* Regexp);

// 获取中间件启动时的错误信息
//
extern GoUintptr SunnyNetError(GoInt SunnyContext);

// 设置全局上游代理 仅支持Socket5和http 例如 socket5://admin:123456@127.0.0.1:8888 或 http://admin:123456@127.0.0.1:8888
//
extern GoUint8 SetGlobalProxy(GoInt SunnyContext, char* ProxyAddress);

// 导出已设置的证书
//
extern GoUintptr ExportCert(GoInt SunnyContext);

// 设置IE代理 Off=true 取消 反之 设置 在中间件设置端口后调用
//
extern GoUint8 SetIeProxy(GoInt SunnyContext, GoUint8 Off);

// 修改、设置 HTTP/S当前请求数据中指定Cookie
//
extern void SetRequestCookie(GoInt MessageId, char* name, char* val);

// 修改、设置 HTTP/S当前请求数据中的全部Cookie
//
extern void SetRequestAllCookie(GoInt MessageId, char* val);

// 获取 HTTP/S当前请求数据中指定的Cookie
//
extern GoUintptr GetRequestCookie(GoInt MessageId, char* name);

// 获取 HTTP/S 当前请求全部Cookie
//
extern GoUintptr GetRequestALLCookie(GoInt MessageId);

// 删除HTTP/S返回数据中指定的协议头
//
extern void DelResponseHeader(GoInt MessageId, char* name);

// 删除HTTP/S请求数据中指定的协议头
//
extern void DelRequestHeader(GoInt MessageId, char* name);

// 请求设置超时-毫秒
//
extern void SetRequestOutTime(GoInt MessageId, GoInt times);

// 设置HTTP/S请求体中的协议头
//
extern void SetRequestHeader(GoInt MessageId, char* name, char* val);

// 修改、设置 HTTP/S当前返回数据中的指定协议头
//
extern void SetResponseHeader(GoInt MessageId, char* name, char* val);

// 获取 HTTP/S当前请求数据中的指定协议头
//
extern GoUintptr GetRequestHeader(GoInt MessageId, char* name);

// 获取 HTTP/S 当前返回数据中指定的协议头
//
extern GoUintptr GetResponseHeader(GoInt MessageId, char* name);

// 修改、设置 HTTP/S当前返回数据中的全部协议头，例如设置返回两条Cookie 使用本命令设置 使用设置、修改 单条命令无效
//
extern void SetResponseAllHeader(GoInt MessageId, char* value);

// 获取 HTTP/S 当前返回全部协议头
//
extern GoUintptr GetResponseAllHeader(GoInt MessageId);

// 获取 HTTP/S 当前请求数据全部协议头
//
extern GoUintptr GetRequestAllHeader(GoInt MessageId);

// 设置HTTP/S请求代理，仅支持Socket5和http 例如 socket5://admin:123456@127.0.0.1:8888 或 http://admin:123456@127.0.0.1:8888
//
extern GoUint8 SetRequestProxy(GoInt MessageId, char* ProxyUrl);

// 获取HTTP/S返回的状态码
//
extern GoInt GetResponseStatusCode(GoInt MessageId);

// 获取当前HTTP/S请求由哪个IP发起
//
extern GoUintptr GetRequestClientIp(GoInt MessageId);

// 获取HTTP/S返回的状态文本 例如 [200 OK]
//
extern GoUintptr GetResponseStatus(GoInt MessageId);

// 修改HTTP/S返回的状态码
//
extern void SetResponseStatus(GoInt MessageId, GoInt code);

// 修改HTTP/S当前请求的URL
//
extern GoUint8 SetRequestUrl(GoInt MessageId, char* URI);

// 获取 HTTP/S 当前请求POST提交数据长度
//
extern GoInt GetRequestBodyLen(GoInt MessageId);

// 获取 HTTP/S 当前返回  数据长度
//
extern GoInt GetResponseBodyLen(GoInt MessageId);

// 设置、修改 HTTP/S 当前请求返回数据 如果再发起请求时调用本命令，请求将不会被发送，将会直接返回 data=数据指针  dataLen=数据长度
//
extern GoUint8 SetResponseData(GoInt MessageId, GoUintptr data, GoInt dataLen);

// 设置、修改 HTTP/S 当前请求POST提交数据  data=数据指针  dataLen=数据长度
//
extern GoInt SetRequestData(GoInt MessageId, GoUintptr data, GoInt dataLen);

// 获取 HTTP/S 当前POST提交数据 返回 数据指针
//
extern GoUintptr GetRequestBody(GoInt MessageId);

// 获取 HTTP/S 当前返回数据  返回 数据指针
//
extern GoUintptr GetResponseBody(GoInt MessageId);

// 获取 WebSocket消息长度
//
extern GoInt GetWebsocketBodyLen(GoInt MessageId);

// 主动关闭Websocket
//
extern GoUint8 CloseWebsocket(GoInt Theology);

// 获取 WebSocket消息 返回数据指针
//
extern GoUintptr GetWebsocketBody(GoInt MessageId);

// 修改 WebSocket消息 data=数据指针  dataLen=数据长度
//
extern GoUint8 SetWebsocketBody(GoInt MessageId, GoUintptr data, GoInt dataLen);

// 主动向Websocket服务器发送消息 MessageType=WS消息类型 data=数据指针  dataLen=数据长度
//
extern GoUint8 SendWebsocketBody(GoInt Theology, GoInt MessageType, GoUintptr data, GoInt dataLen);

// SendWebsocketClientBody 主动向Websocket客户端发送消息 MessageType=WS消息类型 data=数据指针  dataLen=数据长度
//
extern GoUint8 SendWebsocketClientBody(GoInt Theology, GoInt MessageType, GoUintptr data, GoInt dataLen);

// 修改 TCP消息数据 MsgType=1 发送的消息 MsgType=2 接收的消息 如果 MsgType和MessageId不匹配，将不会执行操作  data=数据指针  dataLen=数据长度
//
extern GoUint8 SetTcpBody(GoInt MessageId, GoInt MsgType, GoUintptr data, GoInt dataLen);

// 给当前TCP连接设置代理 仅限 TCP回调 即将连接时使用 仅支持S5代理 例如 socket5://admin:123456@127.0.0.1:8888
//
extern GoUint8 SetTcpAgent(GoInt MessageId, char* ProxyUrl);

// 根据唯一ID关闭指定的TCP连接  唯一ID在回调参数中
//
extern GoUint8 TcpCloseClient(GoInt theology);

// 给指定的TCP连接 修改目标连接地址 目标地址必须带端口号 例如 baidu.com:443
//
extern GoUint8 SetTcpConnectionIP(GoInt MessageId, char* address);

// 指定的TCP连接 模拟客户端向服务器端主动发送数据
//
extern GoInt TcpSendMsg(GoInt theology, GoUintptr data, GoInt dataLen);

// 指定的TCP连接 模拟服务器端向客户端主动发送数据
//
extern GoInt TcpSendMsgClient(GoInt theology, GoUintptr data, GoInt dataLen);

/*字节数组转字符串 返回格式如下
00000000  53 75 6E 6E 79 4E 65 74  54 65 73 74 45 78 61 6D  |SunnyNetTestExam|
00000010  70 6C 65                                          |ple|
*/
extern GoUintptr HexDump(GoUintptr data, GoInt dataLen);

// 将Go int的Bytes 转为int
//
extern GoInt BytesToInt(GoUintptr data, GoInt dataLen);

// Gzip解压缩
//
extern GoUintptr GzipUnCompress(GoUintptr data, GoInt dataLen);

// br解压缩
//
extern GoUintptr BrUnCompress(GoUintptr data, GoInt dataLen);

// br压缩
//
extern GoUintptr BrCompress(GoUintptr data, GoInt dataLen);

// br压缩
//
extern GoUintptr BrotliCompress(GoUintptr data, GoInt dataLen);

// Gzip压缩
//
extern GoUintptr GzipCompress(GoUintptr data, GoInt dataLen);

// Zlib压缩
//
extern GoUintptr ZlibCompress(GoUintptr data, GoInt dataLen);

// Zlib解压缩
//
extern GoUintptr ZlibUnCompress(GoUintptr data, GoInt dataLen);

// Deflate解压缩 (可能等同于zlib解压缩)
//
extern GoUintptr DeflateUnCompress(GoUintptr data, GoInt dataLen);

// Deflate压缩 (可能等同于zlib压缩)
//
extern GoUintptr DeflateCompress(GoUintptr data, GoInt dataLen);

// Webp图片转JEG图片字节数组 SaveQuality=质量(默认75)
//
extern GoUintptr WebpToJpegBytes(GoUintptr data, GoInt dataLen, GoInt SaveQuality);

// Webp图片转Png图片字节数组
//
extern GoUintptr WebpToPngBytes(GoUintptr data, GoInt dataLen);

// Webp图片转JEG图片 根据文件名 SaveQuality=质量(默认75)
//
extern GoUint8 WebpToJpeg(char* webpPath, char* savePath, GoInt SaveQuality);

// Webp图片转Png图片 根据文件名
//
extern GoUint8 WebpToPng(char* webpPath, char* savePath);

// 适配火山PC CALL 火山直接CALL X64没有问题，X86环境下有问题，所以搞了这个命令
//
extern GoInt GoCall(GoInt address, GoInt a1, GoInt a2, GoInt a3, GoInt a4, GoInt a5, GoInt a6, GoInt a7, GoInt a8, GoInt a9);

// 执行JS代码执行前 先调用 SetScript  设置JS代码
//
extern GoUintptr ScriptCall(GoInt i, char* Request);

// 设置JS代码
//
extern GoUintptr SetScript(char* Request);

// 设置JSLog函数回调地址
//
extern void SetScriptLogCallAddress(GoInt i);

// 开启进程代理 加载 nf api 驱动
//
extern GoUint8 StartProcess(GoInt SunnyContext);

// 进程代理 添加进程名
//
extern void ProcessAddName(GoInt SunnyContext, char* Name);

// 进程代理 删除进程名
//
extern void ProcessDelName(GoInt SunnyContext, char* Name);

// 进程代理 添加PID
//
extern void ProcessAddPid(GoInt SunnyContext, GoInt pid);

// 进程代理 删除PID
//
extern void ProcessDelPid(GoInt SunnyContext, GoInt pid);

// 进程代理 取消全部已设置的进程名
//
extern void ProcessCancelAll(GoInt SunnyContext);

// 进程代理 设置是否全部进程通过
//
extern void ProcessALLName(GoInt SunnyContext, GoUint8 open);

// 证书管理器 获取证书 CommonName 字段
//
extern GoUintptr GetCommonName(GoInt Context);

// 证书管理器 导出为P12
//
extern GoUint8 ExportP12(GoInt Context, char* path, char* pass);

// 证书管理器 导出公钥
//
extern GoUintptr ExportPub(GoInt Context);

// 证书管理器 导出私钥
//
extern GoUintptr ExportKEY(GoInt Context);

// 证书管理器 导出证书
//
extern GoUintptr ExportCA(GoInt Context);

// 证书管理器 创建证书
//
extern GoUint8 CreateCA(GoInt Context, char* Country, char* Organization, char* OrganizationalUnit, char* Province, char* CommonName, char* Locality, GoInt bits, GoInt NotAfter);

// 证书管理器 设置ClientAuth
//
extern GoUint8 AddClientAuth(GoInt Context, GoInt val);

// 证书管理器 设置信任的证书 从 文本
//
extern GoUint8 AddCertPoolText(GoInt Context, char* cer);

// 证书管理器 设置信任的证书 从 文件
//
extern GoUint8 AddCertPoolPath(GoInt Context, char* cer);

// 证书管理器 取ServerName
//
extern GoUintptr GetServerName(GoInt Context);

// 证书管理器 设置ServerName
//
extern GoUint8 SetServerName(GoInt Context, char* name);

// 证书管理器 设置跳过主机验证
//
extern GoUint8 SetInsecureSkipVerify(GoInt Context, GoUint8 b);

// 证书管理器 载入X509证书
//
extern GoUint8 LoadX509Certificate(GoInt Context, char* Host, char* CA, char* KEY);

// 证书管理器 载入X509证书2
//
extern GoUint8 LoadX509KeyPair(GoInt Context, char* CaPath, char* KeyPath);

// 证书管理器 载入p12证书
//
extern GoUint8 LoadP12Certificate(GoInt Context, char* Name, char* Password);

// 释放 证书管理器 对象
//
extern void RemoveCertificate(GoInt Context);

// 创建 证书管理器 对象
//
extern GoInt CreateCertificate();

// GoMap 写字符串
//
extern void KeysWriteStr(GoInt KeysHandle, char* name, GoUintptr val, GoInt len);

// GoMap 转为JSON字符串
//
extern GoUintptr KeysGetJson(GoInt KeysHandle);

// GoMap 取数量
//
extern GoInt KeysGetCount(GoInt KeysHandle);

// GoMap 清空
//
extern void KeysEmpty(GoInt KeysHandle);

// GoMap 读整数
//
extern GoInt KeysReadInt(GoInt KeysHandle, char* name);

// GoMap 写整数
//
extern void KeysWriteInt(GoInt KeysHandle, char* name, GoInt val);

// GoMap 读长整数
//
extern GoInt64 KeysReadLong(GoInt KeysHandle, char* name);

// GoMap 写长整数
//
extern void KeysWriteLong(GoInt KeysHandle, char* name, GoInt64 val);

// GoMap 读浮点数
//
extern GoFloat64 KeysReadFloat(GoInt KeysHandle, char* name);

// GoMap 写浮点数
//
extern void KeysWriteFloat(GoInt KeysHandle, char* name, GoFloat64 val);

// GoMap 写字节数组
//
extern void KeysWrite(GoInt KeysHandle, char* name, GoUintptr val, GoInt length);

// GoMap 写读字符串/字节数组
//
extern GoUintptr KeysRead(GoInt KeysHandle, char* name);

// GoMap 删除
//
extern void KeysDelete(GoInt KeysHandle, char* name);

// GoMap 删除GoMap
//
extern void RemoveKeys(GoInt KeysHandle);

// GoMap 创建
//
extern GoInt CreateKeys();

// HTTP 客户端 设置重定向
//
extern GoUint8 HTTPSetRedirect(GoInt Context, GoUint8 Redirect);

// HTTP 客户端 返回响应状态码
//
extern GoInt HTTPGetCode(GoInt Context);

// HTTP 客户端 设置证书管理器
//
extern GoUint8 HTTPSetCertManager(GoInt Context, GoInt CertManagerContext);

// HTTP 客户端 返回响应内容
//
extern GoUintptr HTTPGetBody(GoInt Context);

// HTTP 客户端 返回响应全部Heads
//
extern GoUintptr HTTPGetHeads(GoInt Context);

// HTTP 客户端 返回响应长度
//
extern GoInt HTTPGetBodyLen(GoInt Context);

// HTTP 客户端 发送Body
//
extern void HTTPSendBin(GoInt Context, GoUintptr body, GoInt bodyLength);

// HTTP 客户端 设置超时 毫秒
//
extern void HTTPSetTimeouts(GoInt Context, GoInt t1, GoInt t2, GoInt t3);

// HTTP 客户端 设置代理IP 仅支持Socket5和http 例如 socket5://admin:123456@127.0.0.1:8888 或 http://admin:123456@127.0.0.1:8888
//
extern void HTTPSetProxyIP(GoInt Context, char* ProxyUrl);

// HTTP 客户端 设置协议头
//
extern void HTTPSetHeader(GoInt Context, char* name, char* value);

// HTTP 客户端 Open
//
extern void HTTPOpen(GoInt Context, char* Method, char* URL);

// HTTP 客户端 取错误
//
extern GoUintptr HTTPClientGetErr(GoInt Context);

// 释放 HTTP客户端
//
extern void RemoveHTTPClient(GoInt Context);

// 创建 HTTP 客户端
//
extern GoInt CreateHTTPClient();

// JSON格式的protobuf数据转为protobuf二进制数据
//
extern GoUintptr JsonToPB(GoUintptr bin, GoInt binLen);

// protobuf数据转为JSON格式
//
extern GoUintptr PbToJson(GoUintptr bin, GoInt binLen);

// 队列弹出
//
extern GoUintptr QueuePull(char* name);

// 加入队列
//
extern void QueuePush(char* name, GoUintptr val, GoInt valLen);

// 取队列长度
//
extern GoInt QueueLength(char* name);

// 清空销毁队列
//
extern void QueueRelease(char* name);

// 队列是否为空
//
extern GoUint8 QueueIsEmpty(char* name);

// 创建队列
//
extern void CreateQueue(char* name);

// TCP客户端 发送数据
//
extern GoInt SocketClientWrite(GoInt Context, GoInt OutTimes, GoUintptr val, GoInt valLen);

// TCP客户端 断开连接
//
extern void SocketClientClose(GoInt Context);

// TCP客户端 同步模式下 接收数据
//
extern GoUintptr SocketClientReceive(GoInt Context, GoInt OutTimes);

// TCP客户端 连接
//
extern GoUint8 SocketClientDial(GoInt Context, char* addr, GoInt call, GoUint8 isTls, GoUint8 synchronous, char* ProxyUrl, GoInt CertificateConText);

// TCP客户端 置缓冲区大小
//
extern GoUint8 SocketClientSetBufferSize(GoInt Context, GoInt BufferSize);

// TCP客户端 取错误
//
extern GoUintptr SocketClientGetErr(GoInt Context);

// 释放 TCP客户端
//
extern void RemoveSocketClient(GoInt Context);

// 创建 TCP客户端
//
extern GoInt CreateSocketClient();

// Websocket客户端 同步模式下 接收数据 返回数据指针 失败返回0 length=返回数据长度
//
extern GoUintptr WebsocketClientReceive(GoInt Context, GoInt OutTimes);

// Websocket客户端  发送数据
//
extern GoUint8 WebsocketReadWrite(GoInt Context, GoUintptr val, GoInt valLen, GoInt messageType);

// Websocket客户端 断开
//
extern void WebsocketClose(GoInt Context);

// Websocket客户端 连接
//
extern GoUint8 WebsocketDial(GoInt Context, char* URL, char* Heads, GoInt call, GoUint8 synchronous, char* ProxyUrl, GoInt CertificateConText);

// Websocket客户端 获取错误
//
extern GoUintptr WebsocketGetErr(GoInt Context);

// 释放 Websocket客户端 对象
//
extern void RemoveWebsocket(GoInt Context);

// 创建 Websocket客户端 对象
//
extern GoInt CreateWebsocket();

// 创建 Http证书管理器 对象 实现指定Host使用指定证书
//
extern GoUint8 AddHttpCertificate(char* host, GoInt CertManagerId, GoInt Rules);

// 删除 Http证书管理器 对象
//
extern void DelHttpCertificate(char* host);

// Redis 订阅消息
//
extern void RedisSubscribe(GoInt Context, char* scribe, GoInt call, GoUint8 nc);

// Redis 删除
//
extern GoUint8 RedisDelete(GoInt Context, char* key);

// Redis 清空当前数据库
//
extern void RedisFlushDB(GoInt Context);

// Redis 清空redis服务器
//
extern void RedisFlushAll(GoInt Context);

// Redis 关闭
//
extern void RedisClose(GoInt Context);

// Redis 取整数值
//
extern GoInt64 RedisGetInt(GoInt Context, char* key);

// Redis 取指定条件键名
//
extern GoUintptr RedisGetKeys(GoInt Context, char* key);

// Redis 自定义 执行和查询命令 返回操作结果可能是值 也可能是JSON文本
//
extern GoUintptr RedisDo(GoInt Context, char* args, GoUintptr error);

// Redis 取文本值
//
extern GoUintptr RedisGetStr(GoInt Context, char* key);

// Redis 取Bytes值
//
extern GoUintptr RedisGetBytes(GoInt Context, char* key);

// Redis 检查指定 key 是否存在
//
extern GoUint8 RedisExists(GoInt Context, char* key);

// Redis 设置NX 【如果键名存在返回假】
//
extern GoUint8 RedisSetNx(GoInt Context, char* key, char* val, GoInt expr);

// Redis 设置值
//
extern GoUint8 RedisSet(GoInt Context, char* key, char* val, GoInt expr);

// Redis 设置Bytes值
//
extern GoUint8 RedisSetBytes(GoInt Context, char* key, GoUintptr val, GoInt valLen, GoInt expr);

// Redis 连接
//
extern GoUint8 RedisDial(GoInt Context, char* host, char* pass, GoInt db, GoInt PoolSize, GoInt MinIdleCons, GoInt DialTimeout, GoInt ReadTimeout, GoInt WriteTimeout, GoInt PoolTimeout, GoInt IdleCheckFrequency, GoInt IdleTimeout, GoUintptr error);

// 释放 Redis 对象
//
extern void RemoveRedis(GoInt Context);

// 创建 Redis 对象
//
extern GoInt CreateRedis();

// 设置修改UDP数据
//
extern GoUint8 SetUdpData(GoInt MessageId, GoUintptr val, GoInt valLen);

// 获取UDP数据
//
extern GoUintptr GetUdpData(GoInt MessageId);

// 指定的UDP连接 模拟服务器端向客户端主动发送数据
//
extern GoUint8 UdpSendToClient(GoInt theology, GoUintptr data, GoInt dataLen);

// 指定的UDP连接 模拟客户端向服务器端主动发送数据
//
extern GoUint8 UdpSendToServer(GoInt theology, GoUintptr data, GoInt dataLen);

#ifdef __cplusplus
}
#endif
