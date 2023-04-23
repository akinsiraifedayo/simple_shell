#!/bin/bash
#autocommit pusher built for project

git add .
git commit -m "$1"
git push

