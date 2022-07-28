inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 10, 4 }));
  set_short( "Corridor - x1y10z4" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y11z4.c",
  "south" : DIR+"/rooms/x1y9z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
