inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 44, 9 }));
  set_short( "Passage - x45y44z9" );
set_objects( DIR+"/monsters/doe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y44z9.c",
  "north" : DIR+"/rooms/x45y45z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
