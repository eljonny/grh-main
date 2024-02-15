.PHONY: clean All

All:
	@echo "----------Building project:[ GRHCrawler - Debug ]----------"
	@cd "GRHCrawler" && "$(MAKE)" -f  "GRHCrawler.mk" && "$(MAKE)" -f  "GRHCrawler.mk" PostBuild
clean:
	@echo "----------Cleaning project:[ GRHCrawler - Debug ]----------"
	@cd "GRHCrawler" && "$(MAKE)" -f  "GRHCrawler.mk" clean
