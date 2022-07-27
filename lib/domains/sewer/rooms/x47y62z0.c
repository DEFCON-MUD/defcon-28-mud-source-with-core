inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 62, 0 }));
  set_short( "Passage - x47y62z0" );
set_objects( DIR+"/monsters/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y62z0.c",
  "south" : DIR+"/rooms/x47y61z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
