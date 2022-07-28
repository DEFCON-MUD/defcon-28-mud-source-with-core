inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 12, 3 }));
  set_short( "Passage - x4y12z3" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y12z3.c",
  "east" : DIR+"/rooms/x5y12z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
