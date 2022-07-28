inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 0, 0 }));
  set_short( "Hallway - x16y0z0" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y0z0.c",
  "east" : DIR+"/rooms/x17y0z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
