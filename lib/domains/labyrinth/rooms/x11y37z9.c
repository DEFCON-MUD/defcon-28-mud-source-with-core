inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 37, 9 }));
  set_short( "Hallway - x11y37z9" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y38z9.c",
  "south" : DIR+"/rooms/x11y36z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
