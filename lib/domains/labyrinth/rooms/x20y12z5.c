inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 12, 5 }));
  set_short( "Hallway - x20y12z5" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y12z5.c",
  "east" : DIR+"/rooms/x21y12z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the muck in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
