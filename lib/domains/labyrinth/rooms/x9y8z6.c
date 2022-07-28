inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 8, 6 }));
  set_short( "Hallway - x9y8z6" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y8z6.c",
  "north" : DIR+"/rooms/x9y9z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
