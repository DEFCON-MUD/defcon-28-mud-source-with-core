inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 16, 4 }));
  set_short( "Passage - x57y16z4" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y16z4.c",
  "north" : DIR+"/rooms/x57y17z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
