inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 6, 4 }));
  set_short( "Hallway - x43y6z4" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y6z4.c",
  "north" : DIR+"/rooms/x43y7z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
