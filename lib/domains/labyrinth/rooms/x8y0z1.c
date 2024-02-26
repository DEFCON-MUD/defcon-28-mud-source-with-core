inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 0, 1 }));
  set_short( "Hallway - x8y0z1" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y0z1.c",
  "east" : DIR+"/rooms/x9y0z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
