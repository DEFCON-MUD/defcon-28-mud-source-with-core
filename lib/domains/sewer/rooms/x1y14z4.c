inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 14, 4 }));
  set_short( "Hallway - x1y14z4" );
set_objects( DIR+"/monsters/clubbouer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y14z4.c",
  "north" : DIR+"/rooms/x1y15z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
