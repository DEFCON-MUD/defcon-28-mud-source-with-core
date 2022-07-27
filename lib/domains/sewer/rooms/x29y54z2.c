inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 54, 2 }));
  set_short( "Corridor - x29y54z2" );
set_objects( DIR+"/monsters/culprit.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y54z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east.%^RESET%^");
}
