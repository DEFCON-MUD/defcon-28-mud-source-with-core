inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 34, 8 }));
  set_short( "Corridor - x49y34z8" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y34z8.c",
  "north" : DIR+"/rooms/x49y35z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
