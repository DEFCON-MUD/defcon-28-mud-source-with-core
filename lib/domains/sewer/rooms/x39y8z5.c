inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 8, 5 }));
  set_short( "Corridor - x39y8z5" );
set_objects( DIR+"/monsters/snapperjaw.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y8z5.c",
  "south" : DIR+"/rooms/x39y7z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
