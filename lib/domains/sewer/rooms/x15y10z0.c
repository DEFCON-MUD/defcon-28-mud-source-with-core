inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 10, 0 }));
  set_short( "Hallway - x15y10z0" );
set_objects( DIR+"/monsters/shelledheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y10z0.c",
  "north" : DIR+"/rooms/x15y11z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
