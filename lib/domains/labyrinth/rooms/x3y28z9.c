inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 28, 9 }));
  set_short( "Hallway - x3y28z9" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y29z9.c",
  "south" : DIR+"/rooms/x3y27z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
