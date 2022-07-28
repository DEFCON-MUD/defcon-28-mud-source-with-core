inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 54, 0 }));
  set_short( "Passage - x5y54z0" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y54z0.c",
  "north" : DIR+"/rooms/x5y55z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
