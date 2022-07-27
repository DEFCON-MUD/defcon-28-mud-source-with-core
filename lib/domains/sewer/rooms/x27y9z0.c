inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 9, 0 }));
  set_short( "Hallway - x27y9z0" );
set_objects( DIR+"/monsters/x.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y10z0.c",
  "south" : DIR+"/rooms/x27y8z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
