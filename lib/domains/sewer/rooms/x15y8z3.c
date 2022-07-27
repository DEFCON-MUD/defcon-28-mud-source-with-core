inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 8, 3 }));
  set_short( "Hallway - x15y8z3" );
set_objects( DIR+"/monsters/zombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y8z3.c",
  "south" : DIR+"/rooms/x15y7z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
