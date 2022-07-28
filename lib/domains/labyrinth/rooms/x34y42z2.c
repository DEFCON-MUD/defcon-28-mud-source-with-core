inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 42, 2 }));
  set_short( "Corridor - x34y42z2" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y42z2.c",
  "east" : DIR+"/rooms/x35y42z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
