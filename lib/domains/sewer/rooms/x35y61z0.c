inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 61, 0 }));
  set_short( "Passage - x35y61z0" );
set_objects( DIR+"/monsters/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y62z0.c",
  "south" : DIR+"/rooms/x35y60z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
