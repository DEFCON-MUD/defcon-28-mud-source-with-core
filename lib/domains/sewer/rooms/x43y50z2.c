inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 50, 2 }));
  set_short( "Hallway - x43y50z2" );
set_objects( DIR+"/monsters/tiffany.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y50z2.c",
  "north" : DIR+"/rooms/x43y51z2.c",
  "south" : DIR+"/rooms/x43y49z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
