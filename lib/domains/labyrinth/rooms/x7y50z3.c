inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 50, 3 }));
  set_short( "Corridor - x7y50z3" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y50z3.c",
  "east" : DIR+"/rooms/x8y50z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
