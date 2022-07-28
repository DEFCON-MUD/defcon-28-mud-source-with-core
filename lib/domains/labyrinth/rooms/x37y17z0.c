inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 17, 0 }));
  set_short( "Hallway - x37y17z0" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y18z0.c",
  "south" : DIR+"/rooms/x37y16z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
