inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 52, 7 }));
  set_short( "Passage - x7y52z7" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y52z7.c",
  "south" : DIR+"/rooms/x7y51z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
