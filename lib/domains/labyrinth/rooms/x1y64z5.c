inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 64, 5 }));
  set_short( "Hallway - x1y64z5" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y64z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east.%^RESET%^");
}
