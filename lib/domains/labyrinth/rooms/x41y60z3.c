inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 60, 3 }));
  set_short( "Corridor - x41y60z3" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y60z3.c",
  "north" : DIR+"/rooms/x41y61z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
