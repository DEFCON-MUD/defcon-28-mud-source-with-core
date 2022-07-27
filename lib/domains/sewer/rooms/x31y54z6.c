inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 54, 6 }));
  set_short( "Corridor - x31y54z6" );
set_objects( DIR+"/monsters/john.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y54z6.c",
  "north" : DIR+"/rooms/x31y55z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
