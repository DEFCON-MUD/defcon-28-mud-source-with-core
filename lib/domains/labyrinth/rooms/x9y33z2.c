inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 33, 2 }));
  set_short( "Hallway - x9y33z2" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y34z2.c",
  "south" : DIR+"/rooms/x9y32z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
