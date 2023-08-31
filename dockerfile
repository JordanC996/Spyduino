FROM kalilinux/kali-rolling

RUN apt update && DEBIAN_FRONTEND=noninteractive apt install -y \
	netcat-traditional  \
  && apt-get clean \
  && rm -rf /var/lib/apt/lists/*
  
RUN apt-get update \
  && DEBIAN_FRONTEND=noninteractive apt-get install -y \
    php \
  && apt-get clean \
  && rm -rf /var/lib/apt/lists/*
  
RUN apt-get update \
  && DEBIAN_FRONTEND=noninteractive apt-get install -y \
    iproute2 \
  && apt-get clean \
  && rm -rf /var/lib/apt/lists/*


COPY  payload.ps1 /payload

ENTRYPOINT ["/bin/bash"]