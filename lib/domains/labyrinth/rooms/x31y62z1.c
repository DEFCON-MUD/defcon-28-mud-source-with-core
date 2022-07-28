inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 62, 1 }));
  set_short( "Hallway - x31y62z1" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y63z1.c",
  "south" : DIR+"/rooms/x31y61z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
