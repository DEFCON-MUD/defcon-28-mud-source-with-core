inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 8, 7 }));
  set_short( "Passage - x41y8z7" );
set_objects( DIR+"/monsters/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y8z7.c",
  "east" : DIR+"/rooms/x42y8z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
