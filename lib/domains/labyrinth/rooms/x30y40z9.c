inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 40, 9 }));
  set_short( "Passage - x30y40z9" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y40z9.c",
  "east" : DIR+"/rooms/x31y40z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
