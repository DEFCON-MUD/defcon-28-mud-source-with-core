inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 32, 5 }));
  set_short( "Corridor - x37y32z5" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y32z5.c",
  "south" : DIR+"/rooms/x37y31z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
