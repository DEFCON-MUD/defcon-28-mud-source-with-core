inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 32, 7 }));
  set_short( "Passage - x33y32z7" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y33z7.c",
  "south" : DIR+"/rooms/x33y31z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
