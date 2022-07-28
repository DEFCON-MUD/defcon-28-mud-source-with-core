inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 11, 8 }));
  set_short( "Hallway - x5y11z8" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y12z8.c",
  "south" : DIR+"/rooms/x5y10z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
