inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 25, 2 }));
  set_short( "Hallway - x3y25z2" );
set_objects( DIR+"/monsters/wellin.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y26z2.c",
  "south" : DIR+"/rooms/x3y24z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
