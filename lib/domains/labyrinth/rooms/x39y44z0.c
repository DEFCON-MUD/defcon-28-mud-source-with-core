inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 44, 0 }));
  set_short( "Hallway - x39y44z0" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y44z0.c",
  "south" : DIR+"/rooms/x39y43z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
