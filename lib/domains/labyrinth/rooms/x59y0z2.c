inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 0, 2 }));
  set_short( "Hallway - x59y0z2" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y0z2.c",
  "east" : DIR+"/rooms/x60y0z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
