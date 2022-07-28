inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 46, 0 }));
  set_short( "Corridor - x32y46z0" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y46z0.c",
  "east" : DIR+"/rooms/x33y46z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
