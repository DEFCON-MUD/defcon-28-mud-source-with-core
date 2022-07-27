inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 52, 6 }));
  set_short( "Corridor - x11y52z6" );
set_objects( DIR+"/monsters/mamba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y52z6.c",
  "south" : DIR+"/rooms/x11y51z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
