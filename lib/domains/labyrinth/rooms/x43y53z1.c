inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 53, 1 }));
  set_short( "Corridor - x43y53z1" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y54z1.c",
  "south" : DIR+"/rooms/x43y52z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
