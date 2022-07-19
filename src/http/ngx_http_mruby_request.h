/*
// ngx_http_mruby_request.h - ngx_mruby mruby module header
//
// See Copyright Notice in ngx_http_mruby_module.c
*/

#ifndef NGX_HTTP_MRUBY_REQUEST_H
#define NGX_HTTP_MRUBY_REQUEST_H

#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_http.h>

#include <mruby.h>

ngx_int_t ngx_mrb_push_request(ngx_http_request_t *r);
ngx_http_request_t *ngx_mrb_get_request(void);
mrb_value ngx_mrb_get_request_var(mrb_state *mrb, mrb_value self);

void ngx_mrb_request_class_init(mrb_state *mrb, struct RClass *class);

#endif // NGX_HTTP_MRUBY_REQUEST_H
