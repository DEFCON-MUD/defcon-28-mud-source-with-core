inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 8, 8 }));
  set_short( "Passage - x36y8z8" );
set_objects( DIR+"/monsters/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y8z8.c",
  "east" : DIR+"/rooms/x37y8z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
