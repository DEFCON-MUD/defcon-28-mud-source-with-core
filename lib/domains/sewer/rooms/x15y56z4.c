inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 56, 4 }));
  set_short( "Corridor - x15y56z4" );
set_objects( DIR+"/monsters/poledaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y56z4.c",
  "east" : DIR+"/rooms/x16y56z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the radioactive waste in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
