inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 57, 9 }));
  set_short( "Hallway - x11y57z9" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y58z9.c",
  "south" : DIR+"/rooms/x11y56z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
