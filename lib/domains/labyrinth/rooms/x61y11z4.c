inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 11, 4 }));
  set_short( "Hallway - x61y11z4" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y12z4.c",
  "south" : DIR+"/rooms/x61y10z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
