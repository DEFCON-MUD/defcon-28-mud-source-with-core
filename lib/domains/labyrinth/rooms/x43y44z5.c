inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 44, 5 }));
  set_short( "Passage - x43y44z5" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y44z5.c",
  "north" : DIR+"/rooms/x43y45z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
