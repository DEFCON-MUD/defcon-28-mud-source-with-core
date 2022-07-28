inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 2, 6 }));
  set_short( "Corridor - x55y2z6" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y2z6.c",
  "east" : DIR+"/rooms/x56y2z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
