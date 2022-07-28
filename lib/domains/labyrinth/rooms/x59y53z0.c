inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 53, 0 }));
  set_short( "Hallway - x59y53z0" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y54z0.c",
  "south" : DIR+"/rooms/x59y52z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
