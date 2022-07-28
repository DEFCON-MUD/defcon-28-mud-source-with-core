inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 12, 3 }));
  set_short( "Hallway - x21y12z3" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y13z3.c",
  "south" : DIR+"/rooms/x21y11z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
