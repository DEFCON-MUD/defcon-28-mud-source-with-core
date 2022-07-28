inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 25, 6 }));
  set_short( "Corridor - x1y25z6" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y26z6.c",
  "south" : DIR+"/rooms/x1y24z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
