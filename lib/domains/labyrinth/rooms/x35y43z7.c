inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 43, 7 }));
  set_short( "Corridor - x35y43z7" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y44z7.c",
  "south" : DIR+"/rooms/x35y42z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
