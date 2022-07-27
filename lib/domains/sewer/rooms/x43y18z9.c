inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 18, 9 }));
  set_short( "Hallway - x43y18z9" );
set_objects( DIR+"/monsters/koreth.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y18z9.c",
  "south" : DIR+"/rooms/x43y17z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
