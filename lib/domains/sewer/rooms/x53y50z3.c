inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 50, 3 }));
  set_short( "Corridor - x53y50z3" );
set_objects( DIR+"/monsters/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y51z3.c",
  "south" : DIR+"/rooms/x53y49z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
