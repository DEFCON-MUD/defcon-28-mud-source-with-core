inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 50, 8 }));
  set_short( "Hallway - x21y50z8" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y50z8.c",
  "east" : DIR+"/rooms/x22y50z8.c",
  "south" : DIR+"/rooms/x21y49z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
