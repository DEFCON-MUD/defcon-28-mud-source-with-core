inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 45, 7 }));
  set_short( "Passage - x49y45z7" );
set_objects( DIR+"/monsters/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y46z7.c",
  "south" : DIR+"/rooms/x49y44z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
