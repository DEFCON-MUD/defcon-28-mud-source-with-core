inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 38, 4 }));
  set_short( "Corridor - x25y38z4" );
set_objects( DIR+"/monsters/cyberslime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y38z4.c",
  "north" : DIR+"/rooms/x25y39z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
