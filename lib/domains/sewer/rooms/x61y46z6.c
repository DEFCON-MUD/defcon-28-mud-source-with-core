inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 46, 6 }));
  set_short( "Passage - x61y46z6" );
set_objects( DIR+"/monsters/koreth.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y47z6.c",
  "south" : DIR+"/rooms/x61y45z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
