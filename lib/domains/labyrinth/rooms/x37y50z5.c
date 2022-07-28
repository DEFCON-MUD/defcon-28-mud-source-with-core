inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 50, 5 }));
  set_short( "Corridor - x37y50z5" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y50z5.c",
  "east" : DIR+"/rooms/x38y50z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crappy sales material in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
