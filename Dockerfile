FROM gitpod/workspace-full

# add your tools here
RUN apt-get update && apt-get install -y \
    apt-get install qemu-system-x86 \
    && apt-get clean && rm -rf /var/cache/apt/* && rm -rf /var/lib/apt/lists/* && rm -rf /tmp/*
