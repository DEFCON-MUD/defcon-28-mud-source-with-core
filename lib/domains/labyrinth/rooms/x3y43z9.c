inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 43, 9 }));
  set_short( "Hallway - x3y43z9" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y44z9.c",
  "south" : DIR+"/rooms/x3y42z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
