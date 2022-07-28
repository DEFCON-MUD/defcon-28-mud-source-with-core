inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 45, 8 }));
  set_short( "Corridor - x47y45z8" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y46z8.c",
  "south" : DIR+"/rooms/x47y44z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
