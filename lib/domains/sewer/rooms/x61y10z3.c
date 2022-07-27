inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 10, 3 }));
  set_short( "Hallway - x61y10z3" );
set_objects( DIR+"/monsters/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y10z3.c",
  "north" : DIR+"/rooms/x61y11z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
