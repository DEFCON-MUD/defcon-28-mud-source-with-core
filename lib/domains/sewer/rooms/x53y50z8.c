inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 50, 8 }));
  set_short( "Passage - x53y50z8" );
set_objects( DIR+"/monsters/rk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y50z8.c",
  "south" : DIR+"/rooms/x53y49z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
