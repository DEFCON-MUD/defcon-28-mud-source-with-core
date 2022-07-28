inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 12, 4 }));
  set_short( "Hallway - x23y12z4" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y12z4.c",
  "north" : DIR+"/rooms/x23y13z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
