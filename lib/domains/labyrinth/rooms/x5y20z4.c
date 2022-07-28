inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 20, 4 }));
  set_short( "Passage - x5y20z4" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y20z4.c",
  "north" : DIR+"/rooms/x5y21z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
