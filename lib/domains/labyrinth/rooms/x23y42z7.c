inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 42, 7 }));
  set_short( "Corridor - x23y42z7" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y42z7.c",
  "north" : DIR+"/rooms/x23y43z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
