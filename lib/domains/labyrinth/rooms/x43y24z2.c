inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 24, 2 }));
  set_short( "Corridor - x43y24z2" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y24z2.c",
  "north" : DIR+"/rooms/x43y25z2.c",
  "south" : DIR+"/rooms/x43y23z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the glorzo in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
