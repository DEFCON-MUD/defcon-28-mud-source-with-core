inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 4, 6 }));
  set_short( "Corridor - x54y4z6" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y4z6.c",
  "east" : DIR+"/rooms/x55y4z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the radioactive waste in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
