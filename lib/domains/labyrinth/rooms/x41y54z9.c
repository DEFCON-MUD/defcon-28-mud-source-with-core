inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 54, 9 }));
  set_short( "Hallway - x41y54z9" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y54z9.c",
  "north" : DIR+"/rooms/x41y55z9.c",
  "south" : DIR+"/rooms/x41y53z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the radioactive waste in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
