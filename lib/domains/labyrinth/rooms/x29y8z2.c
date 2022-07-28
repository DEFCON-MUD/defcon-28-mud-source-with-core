inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 8, 2 }));
  set_short( "Hallway - x29y8z2" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y9z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north.%^RESET%^");
}
