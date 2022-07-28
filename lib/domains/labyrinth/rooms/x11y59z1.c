inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 59, 1 }));
  set_short( "Hallway - x11y59z1" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y60z1.c",
  "south" : DIR+"/rooms/x11y58z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
