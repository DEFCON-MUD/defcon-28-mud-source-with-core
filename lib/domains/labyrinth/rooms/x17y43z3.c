inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 43, 3 }));
  set_short( "Corridor - x17y43z3" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y44z3.c",
  "south" : DIR+"/rooms/x17y42z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
