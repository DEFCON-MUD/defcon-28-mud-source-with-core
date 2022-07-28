inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 64, 5 }));
  set_short( "Hallway - x9y64z5" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y64z5.c",
  "east" : DIR+"/rooms/x10y64z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the radioactive waste in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
