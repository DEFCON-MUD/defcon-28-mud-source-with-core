inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 8, 9 }));
  set_short( "Hallway - x51y8z9" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y8z9.c",
  "north" : DIR+"/rooms/x51y9z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
