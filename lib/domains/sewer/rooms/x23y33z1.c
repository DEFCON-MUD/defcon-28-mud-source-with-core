inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 33, 1 }));
  set_short( "Corridor - x23y33z1" );
set_objects( DIR+"/monsters/edwardio.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y34z1.c",
  "south" : DIR+"/rooms/x23y32z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
