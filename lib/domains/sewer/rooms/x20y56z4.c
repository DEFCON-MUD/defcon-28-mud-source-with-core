inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 56, 4 }));
  set_short( "Corridor - x20y56z4" );
set_objects( DIR+"/monsters/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y56z4.c",
  "east" : DIR+"/rooms/x21y56z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
