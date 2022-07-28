inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 57, 9 }));
  set_short( "Hallway - x13y57z9" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y58z9.c",
  "south" : DIR+"/rooms/x13y56z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
