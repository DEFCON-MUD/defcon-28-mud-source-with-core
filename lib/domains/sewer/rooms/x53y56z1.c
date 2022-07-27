inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 56, 1 }));
  set_short( "Corridor - x53y56z1" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y56z1.c",
  "north" : DIR+"/rooms/x53y57z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
