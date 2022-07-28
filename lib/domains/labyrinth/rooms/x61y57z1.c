inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 57, 1 }));
  set_short( "Corridor - x61y57z1" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y58z1.c",
  "south" : DIR+"/rooms/x61y56z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
