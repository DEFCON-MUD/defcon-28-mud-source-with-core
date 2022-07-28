inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 4, 9 }));
  set_short( "Passage - x47y4z9" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y5z9.c",
  "south" : DIR+"/rooms/x47y3z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
