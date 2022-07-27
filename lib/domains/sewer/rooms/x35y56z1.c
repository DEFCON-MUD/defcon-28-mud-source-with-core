inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 56, 1 }));
  set_short( "Corridor - x35y56z1" );
set_objects( DIR+"/monsters/carson.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y56z1.c",
  "south" : DIR+"/rooms/x35y55z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
