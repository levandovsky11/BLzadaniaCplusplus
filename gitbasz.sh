#!/bin/bash
git add *
git status
git commit -m "$(date +'%d.%m.%Y')"
git push origin main
