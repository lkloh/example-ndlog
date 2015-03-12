## -*- Mode: python; py-indent-offset: 4; indent-tabs-mode: nil; coding: utf-8; -*-

def build(bld):
    module = bld.create_ns3_module('onehop', ['internet-stack'])
    module.source = [
        'onehop.cc',
        ]
    headers = bld.new_task_gen('ns3header')
    headers.module = 'onehop'
    headers.source = [
        'onehop.h',
        'onehop-helper.h',
        ]
