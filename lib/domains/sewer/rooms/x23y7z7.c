inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 7, 7 }));
  set_short( "Corridor - x23y7z7" );
set_objects( DIR+"/monsters/repairdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y8z7.c",
  "south" : DIR+"/rooms/x23y6z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
