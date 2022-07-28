inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 29, 4 }));
  set_short( "Hallway - x19y29z4" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y30z4.c",
  "south" : DIR+"/rooms/x19y28z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
