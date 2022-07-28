inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 24, 6 }));
  set_short( "Corridor - x53y24z6" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y24z6.c",
  "north" : DIR+"/rooms/x53y25z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
