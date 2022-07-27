inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 33, 1 }));
  set_short( "Corridor - x39y33z1" );
set_objects( DIR+"/monsters/er.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y34z1.c",
  "south" : DIR+"/rooms/x39y32z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
