# Template Specification

## Overview

Templates define the directory structure and initial files for a project.

A template contains only static assets and metadata.

Templates must not contain executable code or generation logic.

Generation behavior is implemented by the Core.

---

## Directory Structure

```
templates/

<language>/
    <workflow>/

        template.json

        files/
```

Example:

```
templates/

python/
    cli/

        template.json

        files/

            README.md

            src/
                main.py
```

---

## Template Metadata

Each template must include a `template.json` file.

The metadata describes the template and its requirements.

Example:

```json
{
    "language": "python",
    "workflow": "cli",
    "version": "1.0"
}
```

The exact schema is defined by the Core.

---

## Files

Every file inside the `files/` directory is copied into the generated project.

Files may contain placeholders.

The engine replaces placeholders before writing the final output.

---

## Placeholders

Placeholders are enclosed using double braces.

Example:

```
{{project_name}}

{{repository_name}}

{{license}}
```

Placeholder values are provided by the Convention Engine and generation context.

Templates do not resolve placeholders themselves.

---

## Generation Rules

Templates must remain platform-independent.

Templates must not:

- execute scripts
- contain conditional logic
- contain loops
- depend on external tools

Templates describe project structure only.

---

## Validation

A template is considered valid when:

- `template.json` exists
- `files/` exists
- metadata is valid
- reserved placeholders are well-formed

Invalid templates must be rejected before generation.