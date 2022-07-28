inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 59, 4 }));
  set_short( "Corridor - x37y59z4" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y60z4.c",
  "south" : DIR+"/rooms/x37y58z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
