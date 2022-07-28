inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 21, 2 }));
  set_short( "Hallway - x21y21z2" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y22z2.c",
  "south" : DIR+"/rooms/x21y20z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
