inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 14, 8 }));
  set_short( "Hallway - x21y14z8" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y14z8.c",
  "north" : DIR+"/rooms/x21y15z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
