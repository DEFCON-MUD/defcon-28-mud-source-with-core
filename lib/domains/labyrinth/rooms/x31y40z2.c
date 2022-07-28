inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 40, 2 }));
  set_short( "Corridor - x31y40z2" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y40z2.c",
  "south" : DIR+"/rooms/x31y39z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
