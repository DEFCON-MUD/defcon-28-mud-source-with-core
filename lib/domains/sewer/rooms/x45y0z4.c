inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 0, 4 }));
  set_short( "Hallway - x45y0z4" );
set_objects( DIR+"/monsters/enfoer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y0z4.c",
  "east" : DIR+"/rooms/x46y0z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
