inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 5, 8 }));
  set_short( "Corridor - x39y5z8" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y6z8.c",
  "south" : DIR+"/rooms/x39y4z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
