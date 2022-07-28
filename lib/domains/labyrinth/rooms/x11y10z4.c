inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 10, 4 }));
  set_short( "Corridor - x11y10z4" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y10z4.c",
  "north" : DIR+"/rooms/x11y11z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
