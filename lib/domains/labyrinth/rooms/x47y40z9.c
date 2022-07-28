inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 40, 9 }));
  set_short( "Passage - x47y40z9" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y40z9.c",
  "south" : DIR+"/rooms/x47y39z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
