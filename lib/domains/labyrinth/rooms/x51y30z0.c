inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 30, 0 }));
  set_short( "Passage - x51y30z0" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y31z0.c",
  "south" : DIR+"/rooms/x51y29z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
