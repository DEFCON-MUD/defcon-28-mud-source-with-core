inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 62, 8 }));
  set_short( "Corridor - x3y62z8" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y62z8.c",
  "east" : DIR+"/rooms/x4y62z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crappy sales material in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
