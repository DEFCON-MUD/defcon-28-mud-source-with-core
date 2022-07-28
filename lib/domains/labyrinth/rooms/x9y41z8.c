inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 41, 8 }));
  set_short( "Corridor - x9y41z8" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y42z8.c",
  "south" : DIR+"/rooms/x9y40z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
