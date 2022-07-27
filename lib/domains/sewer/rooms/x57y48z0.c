inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 48, 0 }));
  set_short( "Passage - x57y48z0" );
set_objects( DIR+"/monsters/boar.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y48z0.c",
  "north" : DIR+"/rooms/x57y49z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
