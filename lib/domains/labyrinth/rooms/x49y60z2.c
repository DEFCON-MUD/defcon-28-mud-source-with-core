inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 60, 2 }));
  set_short( "Passage - x49y60z2" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y60z2.c",
  "north" : DIR+"/rooms/x49y61z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
