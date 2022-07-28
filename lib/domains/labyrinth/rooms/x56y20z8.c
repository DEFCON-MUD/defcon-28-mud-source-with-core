inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 20, 8 }));
  set_short( "Passage - x56y20z8" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y20z8.c",
  "east" : DIR+"/rooms/x57y20z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the radioactive waste in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
