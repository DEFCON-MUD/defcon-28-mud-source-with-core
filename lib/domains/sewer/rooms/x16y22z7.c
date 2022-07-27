inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 22, 7 }));
  set_short( "Hallway - x16y22z7" );
set_objects( DIR+"/monsters/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y22z7.c",
  "east" : DIR+"/rooms/x17y22z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
