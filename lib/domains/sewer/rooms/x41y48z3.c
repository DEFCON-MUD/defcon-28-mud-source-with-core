inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 48, 3 }));
  set_short( "Passage - x41y48z3" );
set_objects( DIR+"/monsters/leader.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y48z3.c",
  "north" : DIR+"/rooms/x41y49z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
