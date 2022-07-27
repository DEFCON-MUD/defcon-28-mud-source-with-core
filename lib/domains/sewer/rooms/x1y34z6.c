inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 34, 6 }));
  set_short( "Corridor - x1y34z6" );
set_objects( DIR+"/monsters/eastmaintenaedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y34z6.c",
  "north" : DIR+"/rooms/x1y35z6.c",
  "south" : DIR+"/rooms/x1y33z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
