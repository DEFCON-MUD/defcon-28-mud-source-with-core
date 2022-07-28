inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 12, 7 }));
  set_short( "Corridor - x7y12z7" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y12z7.c",
  "east" : DIR+"/rooms/x8y12z7.c",
  "south" : DIR+"/rooms/x7y11z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
