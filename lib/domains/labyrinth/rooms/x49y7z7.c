inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 7, 7 }));
  set_short( "Corridor - x49y7z7" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y8z7.c",
  "south" : DIR+"/rooms/x49y6z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
