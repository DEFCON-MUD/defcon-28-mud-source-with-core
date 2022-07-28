inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 60, 0 }));
  set_short( "Hallway - x15y60z0" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y61z0.c",
  "south" : DIR+"/rooms/x15y59z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
