inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 6, 7 }));
  set_short( "Corridor - x39y6z7" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y7z7.c",
  "south" : DIR+"/rooms/x39y5z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
