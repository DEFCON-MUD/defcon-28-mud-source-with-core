inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 50, 6 }));
  set_short( "Passage - x8y50z6" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y50z6.c",
  "east" : DIR+"/rooms/x9y50z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
