inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 15, 1 }));
  set_short( "Corridor - x19y15z1" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y16z1.c",
  "south" : DIR+"/rooms/x19y14z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
