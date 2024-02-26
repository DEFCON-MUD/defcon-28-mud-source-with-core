inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 16, 8 }));
  set_short( "Corridor - x61y16z8" );
set_objects( DIR+"/monsters/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y16z8.c",
  "north" : DIR+"/rooms/x61y17z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
