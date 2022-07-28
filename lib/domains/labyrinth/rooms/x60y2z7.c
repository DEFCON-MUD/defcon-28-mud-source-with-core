inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 2, 7 }));
  set_short( "Corridor - x60y2z7" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y2z7.c",
  "east" : DIR+"/rooms/x61y2z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
