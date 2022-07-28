inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 26, 8 }));
  set_short( "Hallway - x55y26z8" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y26z8.c",
  "north" : DIR+"/rooms/x55y27z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
