inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 4, 6 }));
  set_short( "Corridor - x39y4z6" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y4z6.c",
  "east" : DIR+"/rooms/x40y4z6.c",
  "north" : DIR+"/rooms/x39y5z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
