inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 4, 1 }));
  set_short( "Passage - x7y4z1" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y4z1.c",
  "east" : DIR+"/rooms/x8y4z1.c",
  "south" : DIR+"/rooms/x7y3z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
