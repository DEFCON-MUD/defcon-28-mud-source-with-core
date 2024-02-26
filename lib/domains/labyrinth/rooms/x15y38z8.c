inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 38, 8 }));
  set_short( "Hallway - x15y38z8" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y38z8.c",
  "east" : DIR+"/rooms/x16y38z8.c",
  "north" : DIR+"/rooms/x15y39z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
