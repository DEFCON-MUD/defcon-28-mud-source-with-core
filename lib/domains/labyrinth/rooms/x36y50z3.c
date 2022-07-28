inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 50, 3 }));
  set_short( "Hallway - x36y50z3" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y50z3.c",
  "east" : DIR+"/rooms/x37y50z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
