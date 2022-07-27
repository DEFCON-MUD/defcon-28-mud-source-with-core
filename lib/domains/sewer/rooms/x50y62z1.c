inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 62, 1 }));
  set_short( "Passage - x50y62z1" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y62z1.c",
  "east" : DIR+"/rooms/x51y62z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
