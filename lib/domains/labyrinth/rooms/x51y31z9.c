inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 31, 9 }));
  set_short( "Passage - x51y31z9" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y32z9.c",
  "south" : DIR+"/rooms/x51y30z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
