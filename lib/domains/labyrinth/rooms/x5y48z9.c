inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 48, 9 }));
  set_short( "Passage - x5y48z9" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y48z9.c",
  "south" : DIR+"/rooms/x5y47z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
