inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 7, 2 }));
  set_short( "Passage - x47y7z2" );
set_objects( DIR+"/monsters/iguana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y8z2.c",
  "south" : DIR+"/rooms/x47y6z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
