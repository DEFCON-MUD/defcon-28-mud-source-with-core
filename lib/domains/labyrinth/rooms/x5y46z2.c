inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 46, 2 }));
  set_short( "Passage - x5y46z2" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y46z2.c",
  "north" : DIR+"/rooms/x5y47z2.c",
  "south" : DIR+"/rooms/x5y45z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
