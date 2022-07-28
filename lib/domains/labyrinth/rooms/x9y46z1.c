inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 46, 1 }));
  set_short( "Hallway - x9y46z1" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y46z1.c",
  "north" : DIR+"/rooms/x9y47z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
