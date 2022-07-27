inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 13, 3 }));
  set_short( "Corridor - x19y13z3" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y14z3.c",
  "south" : DIR+"/rooms/x19y12z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
