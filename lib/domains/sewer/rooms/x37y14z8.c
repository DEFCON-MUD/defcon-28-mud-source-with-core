inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 14, 8 }));
  set_short( "Passage - x37y14z8" );
set_objects( DIR+"/monsters/lil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y14z8.c",
  "north" : DIR+"/rooms/x37y15z8.c",
  "south" : DIR+"/rooms/x37y13z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
