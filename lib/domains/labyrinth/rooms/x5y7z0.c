inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 7, 0 }));
  set_short( "Hallway - x5y7z0" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y8z0.c",
  "south" : DIR+"/rooms/x5y6z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
