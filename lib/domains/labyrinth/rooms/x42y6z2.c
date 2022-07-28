inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 6, 2 }));
  set_short( "Hallway - x42y6z2" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y6z2.c",
  "east" : DIR+"/rooms/x43y6z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
