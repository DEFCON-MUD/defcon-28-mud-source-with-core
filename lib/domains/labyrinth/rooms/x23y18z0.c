inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 18, 0 }));
  set_short( "Passage - x23y18z0" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y18z0.c",
  "south" : DIR+"/rooms/x23y17z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
