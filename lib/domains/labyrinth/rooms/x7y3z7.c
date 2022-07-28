inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 3, 7 }));
  set_short( "Hallway - x7y3z7" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y4z7.c",
  "south" : DIR+"/rooms/x7y2z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
