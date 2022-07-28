inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 55, 4 }));
  set_short( "Hallway - x39y55z4" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y56z4.c",
  "south" : DIR+"/rooms/x39y54z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
