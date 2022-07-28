inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 40, 9 }));
  set_short( "Corridor - x42y40z9" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y40z9.c",
  "east" : DIR+"/rooms/x43y40z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
