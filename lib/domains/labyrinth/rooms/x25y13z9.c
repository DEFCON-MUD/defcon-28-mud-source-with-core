inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 13, 9 }));
  set_short( "Passage - x25y13z9" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y14z9.c",
  "south" : DIR+"/rooms/x25y12z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
