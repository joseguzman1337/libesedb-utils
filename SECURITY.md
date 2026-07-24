# Security Policy

## Supported Versions

| Version | Supported          |
| ------- | ------------------ |
| master  | :white_check_mark: |

This repository tracks the upstream Debian/Ubuntu package metadata for
`libesedb-utils`. The authoritative source lives at
<https://github.com/libyal/libesedb> — please report issues against
upstream first. Security issues in the packaging metadata (workflow files,
this `SECURITY.md`, `LICENSE`, etc.) are tracked here.

## Reporting a Vulnerability

**Please do not open a public GitHub issue for security vulnerabilities.**

Report security issues privately via GitHub's
[private vulnerability reporting](https://github.com/joseguzman1337/libesedb-utils/security/advisories/new)
on this repository, or by emailing the maintainer listed in the git
history of this repo (`git log | head`).

Please include:

- A clear description of the issue and its impact
- Steps to reproduce, or a proof-of-concept
- The affected version / commit SHA
- Any known mitigations

### Response Targets

| Stage                 | Target         |
| --------------------- | -------------- |
| Initial acknowledgement| within 72 h   |
| Triage & severity     | within 7 d     |
| Fix or mitigation     | within 30 d    |

These are best-effort targets for a single-maintainer repository.

## Safe Harbor

We will not pursue legal action against security researchers who:

- Make a good-faith effort to avoid privacy violations, data destruction,
  or service interruption
- Only interact with accounts they own or with explicit permission
- Stop testing and report immediately on discovering a vulnerability
- Do not exploit a vulnerability beyond what is necessary to demonstrate it

## Scope

In scope:

- Workflow injection / dangerous-workflow patterns in
  `.github/workflows/*.yml`
- Secret-leak risk in the workflow files
- Anything that lets an unprivileged PR or fork compromise CI credentials

Out of scope (file upstream):

- CVEs in the `libesedb` C library itself — please report at
  <https://github.com/libyal/libesedb/issues> or via the upstream
  contact channels.
