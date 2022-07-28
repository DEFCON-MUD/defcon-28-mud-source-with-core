inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 18, 1 }));
  set_short( "Passage - x56y18z1" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y18z1.c",
  "east" : DIR+"/rooms/x57y18z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
