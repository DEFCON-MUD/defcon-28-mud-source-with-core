inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 28, 6 }));
  set_short( "Corridor - x37y28z6" );
set_objects( DIR+"/monsters/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y28z6.c",
  "north" : DIR+"/rooms/x37y29z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
