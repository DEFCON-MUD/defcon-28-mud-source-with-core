inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 6, 7 }));
  set_short( "Passage - x23y6z7" );
set_objects( DIR+"/monsters/prisonguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y6z7.c",
  "north" : DIR+"/rooms/x23y7z7.c",
  "south" : DIR+"/rooms/x23y5z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
