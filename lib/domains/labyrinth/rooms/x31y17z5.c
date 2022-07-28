inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 17, 5 }));
  set_short( "Hallway - x31y17z5" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y18z5.c",
  "south" : DIR+"/rooms/x31y16z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crappy sales material in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
