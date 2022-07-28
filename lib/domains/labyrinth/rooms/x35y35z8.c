inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 35, 8 }));
  set_short( "Corridor - x35y35z8" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y36z8.c",
  "south" : DIR+"/rooms/x35y34z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
