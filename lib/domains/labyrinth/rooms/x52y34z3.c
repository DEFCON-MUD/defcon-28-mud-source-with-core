inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 34, 3 }));
  set_short( "Hallway - x52y34z3" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y34z3.c",
  "east" : DIR+"/rooms/x53y34z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
