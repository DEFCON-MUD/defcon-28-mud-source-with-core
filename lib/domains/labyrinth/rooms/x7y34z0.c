inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 34, 0 }));
  set_short( "Hallway - x7y34z0" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y34z0.c",
  "north" : DIR+"/rooms/x7y35z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
