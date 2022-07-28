inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 34, 9 }));
  set_short( "Hallway - x46y34z9" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y34z9.c",
  "east" : DIR+"/rooms/x47y34z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
