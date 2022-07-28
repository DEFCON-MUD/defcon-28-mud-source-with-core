inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 56, 3 }));
  set_short( "Corridor - x45y56z3" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y56z3.c",
  "south" : DIR+"/rooms/x45y55z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
