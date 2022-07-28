inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 22, 3 }));
  set_short( "Corridor - x43y22z3" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y22z3.c",
  "north" : DIR+"/rooms/x43y23z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
