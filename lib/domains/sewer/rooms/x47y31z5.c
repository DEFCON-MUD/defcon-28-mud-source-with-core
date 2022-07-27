inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 31, 5 }));
  set_short( "Hallway - x47y31z5" );
set_objects( DIR+"/monsters/politian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y32z5.c",
  "south" : DIR+"/rooms/x47y30z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the radioactive waste in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
