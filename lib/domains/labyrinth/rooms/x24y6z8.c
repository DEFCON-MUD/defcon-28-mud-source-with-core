inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 6, 8 }));
  set_short( "Hallway - x24y6z8" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y6z8.c",
  "east" : DIR+"/rooms/x25y6z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
