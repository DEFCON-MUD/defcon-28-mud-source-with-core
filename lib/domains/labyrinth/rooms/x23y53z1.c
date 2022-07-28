inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 53, 1 }));
  set_short( "Passage - x23y53z1" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y54z1.c",
  "south" : DIR+"/rooms/x23y52z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
