inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 31, 3 }));
  set_short( "Corridor - x15y31z3" );
set_objects( DIR+"/monsters/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y32z3.c",
  "south" : DIR+"/rooms/x15y30z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the radioactive waste in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
