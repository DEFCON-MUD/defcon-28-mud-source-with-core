inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 31, 7 }));
  set_short( "Hallway - x29y31z7" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y32z7.c",
  "south" : DIR+"/rooms/x29y30z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
