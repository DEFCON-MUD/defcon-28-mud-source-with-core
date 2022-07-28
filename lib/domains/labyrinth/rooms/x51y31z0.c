inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 31, 0 }));
  set_short( "Passage - x51y31z0" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y32z0.c",
  "south" : DIR+"/rooms/x51y30z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
