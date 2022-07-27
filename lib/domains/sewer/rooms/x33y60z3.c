inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 60, 3 }));
  set_short( "Passage - x33y60z3" );
set_objects( DIR+"/monsters/hans.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y61z3.c",
  "south" : DIR+"/rooms/x33y59z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
