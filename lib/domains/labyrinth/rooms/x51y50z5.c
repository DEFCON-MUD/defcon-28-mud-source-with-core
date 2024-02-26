inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 50, 5 }));
  set_short( "Corridor - x51y50z5" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y50z5.c",
  "east" : DIR+"/rooms/x52y50z5.c",
  "north" : DIR+"/rooms/x51y51z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
