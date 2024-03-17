#!/bin/bash

file_names=("$@")
current_datetime=$(date +"%Y/%m/%d %H:%M:%S")

for file_name in "${file_names[@]}"; do
    lines=(
        "/* ************************************************************************** */"
        "/*                                                                            */"
        "/*                                                        :::      ::::::::   */"
        "/*   $file_name                                       :+:      :+:    :+:   */"
        "/*                                                    +:+ +:+         +:+     */"
        "/*   By: trabarij <marvin@42.fr>                    +#+ +:+       +#+        */"
        "/*                                                +#+#+#+#+#+   +#+           */"
        "/*   Created: $current_datetime by trabarij          #+#    #+#             */"
        "/*   Updated: $current_datetime by trabarij         ###   ########.fr       */"
        "/*                                                                            */"
        "/* ************************************************************************** */"
        ""
    )
    tmpHeaderFile=tmp_header_$file_name
    rm -f $tmpHeaderFile
    for str in "${lines[@]}"; do
        echo "$str" >> $tmpHeaderFile
    done
    cat $tmpHeaderFile $file_name > tmp_$file_name && mv tmp_$file_name $file_name  && rm -f $tmpHeaderFile
done