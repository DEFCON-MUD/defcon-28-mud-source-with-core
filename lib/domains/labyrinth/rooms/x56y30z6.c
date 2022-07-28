inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 30, 6 }));
  set_short( "Passage - x56y30z6" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y30z6.c",
  "east" : DIR+"/rooms/x57y30z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
