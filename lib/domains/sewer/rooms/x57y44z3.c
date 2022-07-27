inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 44, 3 }));
  set_short( "Corridor - x57y44z3" );
set_objects( DIR+"/monsters/clophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y44z3.c",
  "south" : DIR+"/rooms/x57y43z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
