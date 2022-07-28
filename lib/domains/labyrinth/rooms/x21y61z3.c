inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 61, 3 }));
  set_short( "Passage - x21y61z3" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y62z3.c",
  "south" : DIR+"/rooms/x21y60z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
