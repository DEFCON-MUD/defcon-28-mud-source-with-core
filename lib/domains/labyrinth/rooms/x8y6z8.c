inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 6, 8 }));
  set_short( "Hallway - x8y6z8" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y6z8.c",
  "east" : DIR+"/rooms/x9y6z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
