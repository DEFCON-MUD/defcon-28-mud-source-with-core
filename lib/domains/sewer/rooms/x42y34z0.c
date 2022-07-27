inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 34, 0 }));
  set_short( "Corridor - x42y34z0" );
set_objects( DIR+"/monsters/jkbk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y34z0.c",
  "east" : DIR+"/rooms/x43y34z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
