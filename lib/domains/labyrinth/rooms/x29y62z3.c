inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 62, 3 }));
  set_short( "Corridor - x29y62z3" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y62z3.c",
  "east" : DIR+"/rooms/x30y62z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
