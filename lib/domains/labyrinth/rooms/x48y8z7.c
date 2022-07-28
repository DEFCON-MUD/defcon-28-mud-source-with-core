inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 8, 7 }));
  set_short( "Hallway - x48y8z7" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y8z7.c",
  "east" : DIR+"/rooms/x49y8z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
