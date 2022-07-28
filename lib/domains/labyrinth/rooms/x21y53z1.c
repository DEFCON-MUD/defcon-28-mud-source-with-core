inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 53, 1 }));
  set_short( "Corridor - x21y53z1" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y54z1.c",
  "south" : DIR+"/rooms/x21y52z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the radioactive waste in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
