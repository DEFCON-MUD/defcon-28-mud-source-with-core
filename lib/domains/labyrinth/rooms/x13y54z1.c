inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 54, 1 }));
  set_short( "Hallway - x13y54z1" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y54z1.c",
  "south" : DIR+"/rooms/x13y53z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
