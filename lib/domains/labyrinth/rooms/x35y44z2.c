inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 44, 2 }));
  set_short( "Corridor - x35y44z2" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y44z2.c",
  "north" : DIR+"/rooms/x35y45z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
