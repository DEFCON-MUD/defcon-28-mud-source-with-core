inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 4, 9 }));
  set_short( "Hallway - x12y4z9" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y4z9.c",
  "east" : DIR+"/rooms/x13y4z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
