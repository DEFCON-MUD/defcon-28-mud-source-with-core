inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 61, 3 }));
  set_short( "Hallway - x59y61z3" );
set_objects( DIR+"/monsters/hkle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y62z3.c",
  "south" : DIR+"/rooms/x59y60z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
