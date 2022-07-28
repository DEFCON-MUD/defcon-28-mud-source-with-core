inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 54, 7 }));
  set_short( "Hallway - x3y54z7" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y54z7.c",
  "north" : DIR+"/rooms/x3y55z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
