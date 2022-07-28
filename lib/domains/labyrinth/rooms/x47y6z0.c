inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 6, 0 }));
  set_short( "Passage - x47y6z0" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y6z0.c",
  "south" : DIR+"/rooms/x47y5z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the radioactive waste in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
