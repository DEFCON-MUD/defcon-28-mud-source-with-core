inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 54, 2 }));
  set_short( "Corridor - x42y54z2" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y54z2.c",
  "east" : DIR+"/rooms/x43y54z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
