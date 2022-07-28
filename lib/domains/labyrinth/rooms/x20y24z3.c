inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 24, 3 }));
  set_short( "Passage - x20y24z3" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y24z3.c",
  "east" : DIR+"/rooms/x21y24z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
