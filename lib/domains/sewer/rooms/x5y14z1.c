inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 14, 1 }));
  set_short( "Hallway - x5y14z1" );
set_objects( DIR+"/monsters/ken.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y14z1.c",
  "north" : DIR+"/rooms/x5y15z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
