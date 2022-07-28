inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 19, 5 }));
  set_short( "Hallway - x43y19z5" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y20z5.c",
  "south" : DIR+"/rooms/x43y18z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
