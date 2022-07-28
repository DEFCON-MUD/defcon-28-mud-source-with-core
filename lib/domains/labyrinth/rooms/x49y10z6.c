inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 10, 6 }));
  set_short( "Hallway - x49y10z6" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y10z6.c",
  "east" : DIR+"/rooms/x50y10z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
