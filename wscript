## -*- Mode: python; py-indent-offset: 4; indent-tabs-mode: nil; coding: utf-8; -*-

def build(bld):
    module = bld.create_ns3_module('twohops', ['internet-stack'])
    module.source = [
        'twohops.cc',
        ]
    headers = bld.new_task_gen('ns3header')
    headers.module = 'twohops'
    headers.source = [
        'twohops.h',
        'twohops-helper.h',
        ]
