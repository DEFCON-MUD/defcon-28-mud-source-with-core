inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 58, 1 }));
  set_short( "Hallway - x31y58z1" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y58z1.c",
  "south" : DIR+"/rooms/x31y57z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
