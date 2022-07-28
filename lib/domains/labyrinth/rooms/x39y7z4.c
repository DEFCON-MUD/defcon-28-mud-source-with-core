inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 7, 4 }));
  set_short( "Corridor - x39y7z4" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y8z4.c",
  "south" : DIR+"/rooms/x39y6z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
