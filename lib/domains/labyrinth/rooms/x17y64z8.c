inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 64, 8 }));
  set_short( "Hallway - x17y64z8" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y64z8.c",
  "east" : DIR+"/rooms/x18y64z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
