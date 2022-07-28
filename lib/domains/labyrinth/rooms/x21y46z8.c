inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 46, 8 }));
  set_short( "Corridor - x21y46z8" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y46z8.c",
  "south" : DIR+"/rooms/x21y45z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
