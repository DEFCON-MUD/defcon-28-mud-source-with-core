inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 5, 4 }));
  set_short( "Hallway - x49y5z4" );
set_objects( DIR+"/monsters/buddypetersen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y6z4.c",
  "south" : DIR+"/rooms/x49y4z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
