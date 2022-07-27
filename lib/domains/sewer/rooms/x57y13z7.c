inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 13, 7 }));
  set_short( "Hallway - x57y13z7" );
set_objects( DIR+"/monsters/mamba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y14z7.c",
  "south" : DIR+"/rooms/x57y12z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
