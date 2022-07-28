inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 2, 4 }));
  set_short( "Passage - x8y2z4" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y2z4.c",
  "east" : DIR+"/rooms/x9y2z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
