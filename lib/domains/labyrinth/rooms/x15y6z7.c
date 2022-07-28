inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 6, 7 }));
  set_short( "Passage - x15y6z7" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y7z7.c",
  "south" : DIR+"/rooms/x15y5z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
