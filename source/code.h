#ifndef CODE_H
#define CODE_H

#include <vector>
#include <string>

class Text;

class Code {

	private:
		std::vector<std::string> *tokens;
		std::vector<std::string> *compounds;
		std::vector<std::string> *compound_xml;
		std::vector<std::string> *compound_xml_action;
		void set_helper(Text *t, int a, int b, int c, std::string field, std::string value);
		std::string itoa(int x);

	public:
		Code();
		~Code();

		int analyse_code(Text *t, std::string c, int x, int y, int z);
		int process_code(Text *t, std::string c, int x, int y, int z);

		int are_parens_balanced(std::string x);
		void tokenize(std::string x);

		std::string return_closing_boolean(std::string x);
		std::string return_opening_boolean(std::string x);


		/* XML Functions */
		int print(Text *t, std::string c, int x, int y, int z);
		int is_class(Text *t, std::string c, int x, int y, int z);
		int is_class2(Text *t, std::string c, int x, int y, int z);
		int not_class(Text *t, std::string c, int x, int y, int z);
		int statistical_machine_translation(Text *t, std::string c, int x, int y, int z);
		int is_chinese(Text *t, std::string c, int x, int y, int z);
		int is_chinese2(Text *t, std::string c, int x, int y, int z);
		int not_chinese(Text *t, std::string c, int x, int y, int z);
		int define_compound(Text *t, std::string c, int x, int y, int z);
		int compound_execute(Text *t, std::string c, int x, int y, int z);
		int compound_chain_execute(Text *t, std::string c, int x, int y, int z);
		int compound_bonus(Text *t, std::string c, int x, int y, int z);
		int compound_bonus2(Text *t, std::string c, int x, int y, int z);
		int compound_length(Text *t, std::string c, int x, int y, int z);
		int compound_length2(Text *t, std::string c, int x, int y, int z);
		int is_compound(Text *t, std::string c, int x, int y, int z);
		int is_compound2(Text *t, std::string c, int x, int y, int z);
		int not_compound(Text *t, std::string c, int x, int y, int z);
		int tag(Text *t, std::string c, int x, int y, int z);
		int beginning(Text *t, std::string c, int x, int y, int z);
		int ending(Text *t, std::string c, int x, int y, int z);
		int subclause(Text *t, std::string c, int x, int y, int z);
		int add_post_text(Text *t, std::string c, int x, int y, int z);
		int add_pre_text(Text *t, std::string c, int x, int y, int z);

		int last(Text *t, std::string c, int x, int y, int z);
		int lastloop(Text *t, std::string c, int x, int y, int z);
		int lastword(Text *t, std::string c, int x, int y, int z);
		int lastwordexact(Text *t, std::string c, int x, int y, int z);
		int lastwordloop(Text *t, std::string c, int x, int y, int z);
		int next(Text *t, std::string c, int x, int y, int z);
		int nextloop(Text *t, std::string c, int x, int y, int z);
		int nextword(Text *t, std::string c, int x, int y, int z);
		int nextwordexact(Text *t, std::string c, int x, int y, int z);
		int nextwordloop(Text *t, std::string c, int x, int y, int z);
		int contains(Text *t, std::string c, int x, int y, int z);
		int match(Text *t, std::string c, int x, int y, int z);
		int matchexact(Text *t, std::string c, int x, int y, int z);
		int textmatch(Text *t, std::string c, int x, int y, int z);
		int bonus(Text *t, std::string c, int x, int y, int z);
		int bonus2(Text *t, std::string c, int x, int y, int z);
		int boost(Text *t, std::string c, int x, int y, int z);
		int resegment(Text *t, std::string c, int x, int y, int z);
		int delete_entry(Text *t, std::string c, int x, int y, int z);
		int make_only_entry(Text *t, std::string c, int x, int y, int z);
		int not_translate(Text *t, std::string c, int x, int y, int z);
		int possessive(Text *t, std::string c, int x, int y, int z);
		int pluralize(Text *t, std::string c, int x, int y, int z);
		int plural_next(Text *t, std::string c, int x, int y, int z);
		
		int is_number(Text *t, std::string c, int x, int y, int z);
		int length(Text *t, std::string c, int x, int y, int z);
		int tense(Text *t, std::string c, int x, int y, int z);
		int insert(Text *t, std::string c, int x, int y, int z);
		int set(Text *t, std::string c, int x, int y, int z);
		int switch_units(Text *t, std::string c, int x, int y, int z);
		int transform_01(Text *t, std::string c, int x, int y, int z);
		int reduce(Text *t, std::string c, int x, int y, int z);


		//int combine(Text *x, std::string c, int location);
		//int set_pre_translation(Text *x, std::string c, int location);
		//int set_translation(Text *x, std::string c, int location);
		//int set_post_translation(Text *x, std::string c, int location);



};

#endif


