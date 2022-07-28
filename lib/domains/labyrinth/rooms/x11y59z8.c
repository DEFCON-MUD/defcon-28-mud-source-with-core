inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 59, 8 }));
  set_short( "Corridor - x11y59z8" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y60z8.c",
  "south" : DIR+"/rooms/x11y58z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
