inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 22, 3 }));
  set_short( "Hallway - x23y22z3" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y22z3.c",
  "east" : DIR+"/rooms/x24y22z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
