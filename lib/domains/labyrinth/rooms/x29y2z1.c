inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 2, 1 }));
  set_short( "Passage - x29y2z1" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y2z1.c",
  "east" : DIR+"/rooms/x30y2z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
