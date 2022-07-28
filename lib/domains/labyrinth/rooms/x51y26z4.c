inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 26, 4 }));
  set_short( "Passage - x51y26z4" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y26z4.c",
  "north" : DIR+"/rooms/x51y27z4.c",
  "south" : DIR+"/rooms/x51y25z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
