inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 36, 0 }));
  set_short( "Corridor - x39y36z0" );
set_objects( DIR+"/monsters/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y37z0.c",
  "south" : DIR+"/rooms/x39y35z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
