inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 0, 7 }));
  set_short( "Hallway - x16y0z7" );
set_objects( DIR+"/monsters/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y0z7.c",
  "east" : DIR+"/rooms/x17y0z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
