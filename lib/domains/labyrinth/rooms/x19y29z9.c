inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 29, 9 }));
  set_short( "Passage - x19y29z9" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y30z9.c",
  "south" : DIR+"/rooms/x19y28z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
