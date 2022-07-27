inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 9, 4 }));
  set_short( "Hallway - x17y9z4" );
set_objects( DIR+"/monsters/largeheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y10z4.c",
  "south" : DIR+"/rooms/x17y8z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
