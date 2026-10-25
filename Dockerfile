FROM debian:12.9-slim
RUN apt-get update && apt-get upgrade -y && apt-get install -y --no-install-recommends gcc cmake make git ca-certificates && rm -rf /var/lib/apt/lists/*
WORKDIR /src
