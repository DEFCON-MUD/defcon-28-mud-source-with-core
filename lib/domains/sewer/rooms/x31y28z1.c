inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 28, 1 }));
  set_short( "Corridor - x31y28z1" );
set_objects( DIR+"/monsters/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y29z1.c",
  "south" : DIR+"/rooms/x31y27z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
