inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 20, 0 }));
  set_short( "Hallway - x22y20z0" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y20z0.c",
  "east" : DIR+"/rooms/x23y20z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
