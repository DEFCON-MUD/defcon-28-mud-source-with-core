inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 60, 0 }));
  set_short( "Hallway - x1y60z0" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y60z0.c",
  "north" : DIR+"/rooms/x1y61z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crappy sales material in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
