inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 52, 5 }));
  set_short( "Corridor - x30y52z5" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y52z5.c",
  "east" : DIR+"/rooms/x31y52z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
