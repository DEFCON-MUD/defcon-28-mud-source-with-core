inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 37, 8 }));
  set_short( "Hallway - x61y37z8" );
set_objects( DIR+"/monsters/valerie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y38z8.c",
  "south" : DIR+"/rooms/x61y36z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
