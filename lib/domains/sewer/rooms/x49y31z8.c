inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 31, 8 }));
  set_short( "Passage - x49y31z8" );
set_objects( DIR+"/monsters/planner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y32z8.c",
  "south" : DIR+"/rooms/x49y30z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
