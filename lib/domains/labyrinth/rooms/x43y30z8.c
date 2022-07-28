inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 30, 8 }));
  set_short( "Passage - x43y30z8" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y30z8.c",
  "south" : DIR+"/rooms/x43y29z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
