inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 49, 1 }));
  set_short( "Corridor - x23y49z1" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y50z1.c",
  "south" : DIR+"/rooms/x23y48z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
