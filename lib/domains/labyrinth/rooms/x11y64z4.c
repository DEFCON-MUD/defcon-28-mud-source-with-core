inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 64, 4 }));
  set_short( "Corridor - x11y64z4" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y64z4.c",
  "east" : DIR+"/rooms/x12y64z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crappy sales material in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
