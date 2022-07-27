inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 8, 5 }));
  set_short( "Corridor - x53y8z5" );
set_objects( DIR+"/monsters/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y8z5.c",
  "south" : DIR+"/rooms/x53y7z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
