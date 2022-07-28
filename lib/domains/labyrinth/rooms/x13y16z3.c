inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 16, 3 }));
  set_short( "Passage - x13y16z3" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y17z3.c",
  "south" : DIR+"/rooms/x13y15z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
