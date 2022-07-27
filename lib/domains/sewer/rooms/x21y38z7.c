inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 38, 7 }));
  set_short( "Hallway - x21y38z7" );
set_objects( DIR+"/monsters/surityoffer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y38z7.c",
  "south" : DIR+"/rooms/x21y37z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
