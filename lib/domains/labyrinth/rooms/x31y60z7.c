inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 60, 7 }));
  set_short( "Hallway - x31y60z7" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y61z7.c",
  "south" : DIR+"/rooms/x31y59z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crappy sales material in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
