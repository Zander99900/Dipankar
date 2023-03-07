from pypdf import PdfWriter

merger = PdfWriter()

for pdf in ["PDF_Merging/1.pdf", "PDF_Merging/2.pdf", "PDF_Merging/3.pdf"]:
    merger.append(pdf)

merger.write("PDF_Merging/New-Merged-pdf.pdf")
merger.close()