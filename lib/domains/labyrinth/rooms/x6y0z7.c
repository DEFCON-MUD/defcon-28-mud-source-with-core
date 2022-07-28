inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 0, 7 }));
  set_short( "Hallway - x6y0z7" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y0z7.c",
  "east" : DIR+"/rooms/x7y0z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
