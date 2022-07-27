inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 62, 3 }));
  set_short( "Corridor - x53y62z3" );
set_objects( DIR+"/monsters/steve.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y62z3.c",
  "south" : DIR+"/rooms/x53y61z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
