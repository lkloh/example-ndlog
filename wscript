## -*- Mode: python; py-indent-offset: 4; indent-tabs-mode: nil; coding: utf-8; -*-

def build(bld):
    module = bld.create_ns3_module('threehops', ['internet-stack'])
    module.source = [
        'threehops.cc',
        ]
    headers = bld.new_task_gen('ns3header')
    headers.module = 'threehops'
    headers.source = [
        'threehops.h',
        'threehops-helper.h',
        ]
