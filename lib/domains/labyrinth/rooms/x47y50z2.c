inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 50, 2 }));
  set_short( "Hallway - x47y50z2" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y50z2.c",
  "north" : DIR+"/rooms/x47y51z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
