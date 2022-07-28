inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 16, 9 }));
  set_short( "Corridor - x49y16z9" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y16z9.c",
  "north" : DIR+"/rooms/x49y17z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
