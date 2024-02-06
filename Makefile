.PHONY: clean All

All:
	@echo "----------Building project:[ GRHCrawler - Debug ]----------"
	@cd "GRHCrawler" && "$(MAKE)" -f  "GRHCrawler.mk"
clean:
	@echo "----------Cleaning project:[ GRHCrawler - Debug ]----------"
	@cd "GRHCrawler" && "$(MAKE)" -f  "GRHCrawler.mk" clean
