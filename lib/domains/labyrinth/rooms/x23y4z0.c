inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 4, 0 }));
  set_short( "Hallway - x23y4z0" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y4z0.c",
  "north" : DIR+"/rooms/x23y5z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
