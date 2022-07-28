inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 7, 6 }));
  set_short( "Corridor - x27y7z6" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y8z6.c",
  "south" : DIR+"/rooms/x27y6z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the sludge in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
