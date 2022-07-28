inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 44, 8 }));
  set_short( "Passage - x29y44z8" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y44z8.c",
  "north" : DIR+"/rooms/x29y45z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the radioactive waste in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
