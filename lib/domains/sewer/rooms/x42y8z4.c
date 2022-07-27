inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 8, 4 }));
  set_short( "Hallway - x42y8z4" );
set_objects( DIR+"/monsters/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y8z4.c",
  "east" : DIR+"/rooms/x43y8z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crappy sales material in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
