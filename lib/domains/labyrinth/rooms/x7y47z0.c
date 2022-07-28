inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 47, 0 }));
  set_short( "Passage - x7y47z0" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y48z0.c",
  "south" : DIR+"/rooms/x7y46z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crappy sales material in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
