inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 16, 6 }));
  set_short( "Corridor - x19y16z6" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y16z6.c",
  "north" : DIR+"/rooms/x19y17z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the glorzo in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
