inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 8, 1 }));
  set_short( "Corridor - x23y8z1" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y9z1.c",
  "south" : DIR+"/rooms/x23y7z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
