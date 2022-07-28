inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 8, 3 }));
  set_short( "Hallway - x25y8z3" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y9z3.c",
  "south" : DIR+"/rooms/x25y7z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
