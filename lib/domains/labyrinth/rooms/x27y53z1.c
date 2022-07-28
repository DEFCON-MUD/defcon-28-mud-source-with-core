inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 53, 1 }));
  set_short( "Passage - x27y53z1" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y54z1.c",
  "south" : DIR+"/rooms/x27y52z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
