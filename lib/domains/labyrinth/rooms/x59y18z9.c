inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 18, 9 }));
  set_short( "Passage - x59y18z9" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y18z9.c",
  "south" : DIR+"/rooms/x59y17z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
