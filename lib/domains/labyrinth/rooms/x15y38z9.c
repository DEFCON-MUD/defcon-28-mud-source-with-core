inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 38, 9 }));
  set_short( "Hallway - x15y38z9" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y38z9.c",
  "north" : DIR+"/rooms/x15y39z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
