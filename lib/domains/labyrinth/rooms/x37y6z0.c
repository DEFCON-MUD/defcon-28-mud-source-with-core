inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 6, 0 }));
  set_short( "Hallway - x37y6z0" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y6z0.c",
  "south" : DIR+"/rooms/x37y5z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crappy sales material in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
