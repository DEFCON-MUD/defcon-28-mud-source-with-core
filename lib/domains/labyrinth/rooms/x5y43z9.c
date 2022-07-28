inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 43, 9 }));
  set_short( "Corridor - x5y43z9" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y44z9.c",
  "south" : DIR+"/rooms/x5y42z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
