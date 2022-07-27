inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 46, 5 }));
  set_short( "Passage - x15y46z5" );
set_objects( DIR+"/monsters/randy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y46z5.c",
  "south" : DIR+"/rooms/x15y45z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the radioactive waste in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
