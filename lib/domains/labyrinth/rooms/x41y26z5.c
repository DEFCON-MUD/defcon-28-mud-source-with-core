inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 26, 5 }));
  set_short( "Hallway - x41y26z5" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y27z5.c",
  "south" : DIR+"/rooms/x41y25z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
