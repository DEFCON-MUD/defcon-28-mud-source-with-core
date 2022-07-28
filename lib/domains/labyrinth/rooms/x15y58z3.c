inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 58, 3 }));
  set_short( "Corridor - x15y58z3" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y58z3.c",
  "south" : DIR+"/rooms/x15y57z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
