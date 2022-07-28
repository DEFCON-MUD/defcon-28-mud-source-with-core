inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 36, 7 }));
  set_short( "Corridor - x35y36z7" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y36z7.c",
  "north" : DIR+"/rooms/x35y37z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
