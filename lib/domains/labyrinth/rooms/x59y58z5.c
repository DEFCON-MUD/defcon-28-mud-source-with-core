inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 58, 5 }));
  set_short( "Hallway - x59y58z5" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y58z5.c",
  "north" : DIR+"/rooms/x59y59z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
