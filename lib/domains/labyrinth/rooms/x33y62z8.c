inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 62, 8 }));
  set_short( "Corridor - x33y62z8" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y62z8.c",
  "south" : DIR+"/rooms/x33y61z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
