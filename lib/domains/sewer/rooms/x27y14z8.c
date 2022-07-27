inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 14, 8 }));
  set_short( "Passage - x27y14z8" );
set_objects( DIR+"/monsters/andy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y14z8.c",
  "south" : DIR+"/rooms/x27y13z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
