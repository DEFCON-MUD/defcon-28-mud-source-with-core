inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 64, 8 }));
  set_short( "Hallway - x49y64z8" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y64z8.c",
  "east" : DIR+"/rooms/x50y64z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
