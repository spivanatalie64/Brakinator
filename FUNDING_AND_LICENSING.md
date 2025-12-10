# Funding and Licensing

## Funding

Brakinator is a community-driven, volunteer effort.

*   **Who pays for it?**  
    We, the developers and maintainers, volunteer our time. We do not receive funding from any corporation or organization. Hosting and infrastructure costs are borne by the team members or covered by community donations where applicable.

*   **How can I help?**  
    Contributions of code, documentation, and translations are always welcome!

## Licensing

Brakinator is licensed under the **GNU General Public License, Version 2 (GPLv2)**.

### Third-Party Libraries and Codecs

Brakinator incorporates numerous third-party libraries, each with its own license. While most are compatible with GPLv2, some configurations may affect the redistributability of the resulting binary.

#### 1. AAC Encoding (FFmpeg vs FDK)
*   **Default:** Brakinator uses the FFmpeg native AAC encoder by default. This encoder is open source and **fully compatible** with the GPLv2.
*   **FDK AAC (Optional):** The Fraunhofer FDK AAC library is available as an optional build-time dependency. However, its license is **incompatible** with the GPLv2 for binary distribution.
    *   **Binary Distribution:** If you manually enable FDK AAC (`--enable-fdk-aac`), the resulting binary **cannot be legally distributed** under the GPLv2.

#### 2. x264 and x265
*   **License:** GPLv2 (or commercial).
*   **Implication:** These libraries are fully compatible with Brakinator's license when used under their GPL terms.

#### 3. Hardware Acceleration (NVDEC, NVENC, VCE, QSV)
*   **NVIDIA (NVDEC/NVENC):** Requires proprietary NVIDIA drivers at runtime. The build links against compatible headers (often MIT/BSD licensed from FFmpeg or NVIDIA Video Codec SDK).
*   **Intel QSV / AMD VCE:** Similar runtime dependencies on vendor drivers.
*   **MediaFoundation (Windows):** Uses Microsoft's proprietary API, available only on Windows.

### Compilation and Distribution Checklist

If you intend to distribute a modified version of Brakinator (e.g., a "Brakinator" build):

1.  **Respect the GPLv2**: You must provide the source code or a written offer to provide it.
2.  **Check Incompatible Codecs**: Ensure you have not enabled incompatible libraries like FDK AAC if you are distributing the binary publicly.
3.  **Trademarks**: "Brakinator" is a project name; please respect typical open-source naming conventions and attribution.

For a full list of authors, please see [AUTHORS](AUTHORS.markdown).
