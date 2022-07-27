inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 18, 8 }));
  set_short( "Hallway - x41y18z8" );
set_objects( DIR+"/monsters/jenny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y18z8.c",
  "south" : DIR+"/rooms/x41y17z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
