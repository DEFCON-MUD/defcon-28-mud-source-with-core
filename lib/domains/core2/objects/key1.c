
inherit "/std/object";
inherit "/std/modules/m_undroppable";

void setup(void) {
   set_id("key1");
   set_short("Key1");
   set_long("A small metal access card");
   set_gettable(1);
   set_undroppable(1);
   set_value(8);
   set_weight(2);
}
