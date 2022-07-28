inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 24, 4 }));
  set_short( "Corridor - x13y24z4" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y25z4.c",
  "south" : DIR+"/rooms/x13y23z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
