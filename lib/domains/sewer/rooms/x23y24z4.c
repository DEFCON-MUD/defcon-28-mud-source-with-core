inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 24, 4 }));
  set_short( "Hallway - x23y24z4" );
set_objects( DIR+"/monsters/r1physist.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y24z4.c",
  "north" : DIR+"/rooms/x23y25z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
