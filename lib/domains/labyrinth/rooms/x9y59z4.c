inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 59, 4 }));
  set_short( "Corridor - x9y59z4" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y60z4.c",
  "south" : DIR+"/rooms/x9y58z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
