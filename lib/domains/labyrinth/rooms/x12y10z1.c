inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 10, 1 }));
  set_short( "Corridor - x12y10z1" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y10z1.c",
  "east" : DIR+"/rooms/x13y10z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
