inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 45, 8 }));
  set_short( "Passage - x27y45z8" );
set_objects( DIR+"/monsters/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y46z8.c",
  "south" : DIR+"/rooms/x27y44z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
