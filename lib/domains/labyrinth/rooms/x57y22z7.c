inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 22, 7 }));
  set_short( "Passage - x57y22z7" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y22z7.c",
  "north" : DIR+"/rooms/x57y23z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
