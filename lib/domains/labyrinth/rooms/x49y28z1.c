inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 28, 1 }));
  set_short( "Hallway - x49y28z1" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y28z1.c",
  "north" : DIR+"/rooms/x49y29z1.c",
  "south" : DIR+"/rooms/x49y27z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
