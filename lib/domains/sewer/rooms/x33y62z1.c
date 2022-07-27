inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 62, 1 }));
  set_short( "Passage - x33y62z1" );
set_objects( DIR+"/monsters/clubbouer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y62z1.c",
  "south" : DIR+"/rooms/x33y61z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crappy sales material in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
