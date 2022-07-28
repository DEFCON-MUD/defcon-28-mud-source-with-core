inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 42, 5 }));
  set_short( "Corridor - x8y42z5" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y42z5.c",
  "east" : DIR+"/rooms/x9y42z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
