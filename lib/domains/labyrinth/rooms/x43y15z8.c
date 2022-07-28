inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 15, 8 }));
  set_short( "Corridor - x43y15z8" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y16z8.c",
  "south" : DIR+"/rooms/x43y14z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
