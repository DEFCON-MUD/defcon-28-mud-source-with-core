inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 24, 5 }));
  set_short( "Hallway - x30y24z5" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y24z5.c",
  "east" : DIR+"/rooms/x31y24z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
