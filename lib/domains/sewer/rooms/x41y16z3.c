inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 16, 3 }));
  set_short( "Hallway - x41y16z3" );
set_objects( DIR+"/monsters/alexis.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y16z3.c",
  "north" : DIR+"/rooms/x41y17z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
