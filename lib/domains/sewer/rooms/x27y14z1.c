inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 14, 1 }));
  set_short( "Hallway - x27y14z1" );
set_objects( DIR+"/monsters/gorilla.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y14z1.c",
  "north" : DIR+"/rooms/x27y15z1.c",
  "south" : DIR+"/rooms/x27y13z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
