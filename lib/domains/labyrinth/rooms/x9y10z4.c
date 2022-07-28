inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 10, 4 }));
  set_short( "Passage - x9y10z4" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y10z4.c",
  "north" : DIR+"/rooms/x9y11z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
