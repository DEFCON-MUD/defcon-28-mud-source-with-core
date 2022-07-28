inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 16, 0 }));
  set_short( "Passage - x31y16z0" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y16z0.c",
  "south" : DIR+"/rooms/x31y15z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
