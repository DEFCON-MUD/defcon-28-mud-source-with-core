inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 22, 2 }));
  set_short( "Hallway - x29y22z2" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y23z2.c",
  "south" : DIR+"/rooms/x29y21z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
