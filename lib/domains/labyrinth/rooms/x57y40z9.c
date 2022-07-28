inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 40, 9 }));
  set_short( "Passage - x57y40z9" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y40z9.c",
  "north" : DIR+"/rooms/x57y41z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
