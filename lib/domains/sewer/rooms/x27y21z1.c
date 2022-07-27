inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 21, 1 }));
  set_short( "Hallway - x27y21z1" );
set_objects( DIR+"/monsters/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y22z1.c",
  "south" : DIR+"/rooms/x27y20z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
