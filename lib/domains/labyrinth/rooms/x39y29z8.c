inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 29, 8 }));
  set_short( "Corridor - x39y29z8" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y30z8.c",
  "south" : DIR+"/rooms/x39y28z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
