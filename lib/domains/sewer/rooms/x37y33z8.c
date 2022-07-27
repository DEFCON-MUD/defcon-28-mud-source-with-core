inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 33, 8 }));
  set_short( "Passage - x37y33z8" );
set_objects( DIR+"/monsters/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y34z8.c",
  "south" : DIR+"/rooms/x37y32z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
