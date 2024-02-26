inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 39, 5 }));
  set_short( "Hallway - x13y39z5" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y40z5.c",
  "south" : DIR+"/rooms/x13y38z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
