inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 15, 4 }));
  set_short( "Corridor - x45y15z4" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y16z4.c",
  "south" : DIR+"/rooms/x45y14z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
