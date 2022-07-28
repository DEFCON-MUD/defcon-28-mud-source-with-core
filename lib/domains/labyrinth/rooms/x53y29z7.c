inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 29, 7 }));
  set_short( "Hallway - x53y29z7" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y30z7.c",
  "south" : DIR+"/rooms/x53y28z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
