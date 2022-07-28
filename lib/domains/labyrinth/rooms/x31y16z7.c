inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 16, 7 }));
  set_short( "Passage - x31y16z7" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y17z7.c",
  "south" : DIR+"/rooms/x31y15z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
