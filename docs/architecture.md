# Architecture

## Overview

Project Scaffolder is organized into two primary components:

- **CLI**
- **Core**

The CLI is responsible for interacting with the user, parsing commands, collecting input, and presenting results.

The Core contains all generation logic and is completely independent from the CLI. This separation allows the generation engine to be reused by future adapters without modifying the core implementation.

---

## Workspace Structure

```
project-scaffolder/

├── cli/
├── core/
├── docs/
├── templates/
├── tests/
└── assets/
```

---

## Component Responsibilities

### CLI

Responsibilities:

- Parse command-line arguments
- Run interactive prompts
- Display progress and errors
- Invoke the Core

The CLI must not contain generation logic.

---

### Core

The Core owns every part of the project generation pipeline.

Responsibilities:

- Validate generation requests
- Apply language conventions
- Load templates
- Generate filesystem structure
- Produce generation results

---

## Generation Pipeline

```
CLI
 │
 ▼
Generation Request
 │
 ▼
Convention Engine
 │
 ▼
Template Engine
 │
 ▼
Filesystem Generator
 │
 ▼
Generated Project
```

Each component has a single responsibility and performs one stage of the generation process.

---

## Core Components

### Convention Engine

Responsible for language-specific conventions.

Examples include:

- repository naming
- package naming
- module naming
- source file naming

The Convention Engine does not create files.

---

### Template Engine

Responsible for loading templates and replacing placeholders.

The Template Engine treats every template as data.

It does not contain language-specific knowledge.

---

### Filesystem Generator

Responsible for creating directories and files.

It receives a fully prepared generation plan and writes it to disk.

No naming or template logic is implemented in this component.

---

## Design Principles

- Thin CLI
- Template-driven generation
- Convention before generation
- Templates are data
- Single responsibility per component
- Cross-platform filesystem support