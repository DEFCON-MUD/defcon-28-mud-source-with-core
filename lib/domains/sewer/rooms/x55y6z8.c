inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 6, 8 }));
  set_short( "Passage - x55y6z8" );
set_objects( DIR+"/monsters/koreth.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y6z8.c",
  "east" : DIR+"/rooms/x56y6z8.c",
  "south" : DIR+"/rooms/x55y5z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
