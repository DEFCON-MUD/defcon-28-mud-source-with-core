inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 30, 4 }));
  set_short( "Passage - x43y30z4" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y30z4.c",
  "east" : DIR+"/rooms/x44y30z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
