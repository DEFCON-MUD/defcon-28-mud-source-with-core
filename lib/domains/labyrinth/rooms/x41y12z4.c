inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 12, 4 }));
  set_short( "Corridor - x41y12z4" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y12z4.c",
  "north" : DIR+"/rooms/x41y13z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
