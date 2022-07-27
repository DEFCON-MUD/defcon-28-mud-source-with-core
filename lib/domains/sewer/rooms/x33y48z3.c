inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 48, 3 }));
  set_short( "Hallway - x33y48z3" );
set_objects( DIR+"/monsters/clubbouer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y48z3.c",
  "north" : DIR+"/rooms/x33y49z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
