inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 62, 1 }));
  set_short( "Corridor - x3y62z1" );
set_objects( DIR+"/monsters/politian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y62z1.c",
  "east" : DIR+"/rooms/x4y62z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
