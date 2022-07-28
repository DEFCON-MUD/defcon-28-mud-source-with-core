inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 37, 0 }));
  set_short( "Passage - x61y37z0" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y38z0.c",
  "south" : DIR+"/rooms/x61y36z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
