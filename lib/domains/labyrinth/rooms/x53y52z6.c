inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 52, 6 }));
  set_short( "Hallway - x53y52z6" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y52z6.c",
  "east" : DIR+"/rooms/x54y52z6.c",
  "north" : DIR+"/rooms/x53y53z6.c",
  "south" : DIR+"/rooms/x53y51z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
