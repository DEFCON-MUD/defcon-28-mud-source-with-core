inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 34, 2 }));
  set_short( "Corridor - x5y34z2" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y34z2.c",
  "north" : DIR+"/rooms/x5y35z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
