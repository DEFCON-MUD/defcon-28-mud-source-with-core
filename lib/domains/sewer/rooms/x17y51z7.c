inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 51, 7 }));
  set_short( "Hallway - x17y51z7" );
set_objects( DIR+"/monsters/bartender.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y52z7.c",
  "south" : DIR+"/rooms/x17y50z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
