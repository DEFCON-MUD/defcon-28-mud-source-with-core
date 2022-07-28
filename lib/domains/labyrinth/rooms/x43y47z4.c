inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 47, 4 }));
  set_short( "Hallway - x43y47z4" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y48z4.c",
  "south" : DIR+"/rooms/x43y46z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
