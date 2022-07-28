inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 58, 1 }));
  set_short( "Hallway - x38y58z1" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y58z1.c",
  "east" : DIR+"/rooms/x39y58z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
