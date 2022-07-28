inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 52, 2 }));
  set_short( "Hallway - x40y52z2" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y52z2.c",
  "east" : DIR+"/rooms/x41y52z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
