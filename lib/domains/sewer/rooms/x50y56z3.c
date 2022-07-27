inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 56, 3 }));
  set_short( "Hallway - x50y56z3" );
set_objects( DIR+"/monsters/rhel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y56z3.c",
  "east" : DIR+"/rooms/x51y56z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the radioactive waste in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
