inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 22, 8 }));
  set_short( "Corridor - x23y22z8" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y22z8.c",
  "north" : DIR+"/rooms/x23y23z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
