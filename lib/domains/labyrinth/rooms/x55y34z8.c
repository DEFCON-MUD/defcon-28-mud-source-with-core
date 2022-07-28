inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 34, 8 }));
  set_short( "Corridor - x55y34z8" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y34z8.c",
  "east" : DIR+"/rooms/x56y34z8.c",
  "north" : DIR+"/rooms/x55y35z8.c",
  "south" : DIR+"/rooms/x55y33z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
