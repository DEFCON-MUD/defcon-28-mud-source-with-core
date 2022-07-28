inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 40, 8 }));
  set_short( "Corridor - x23y40z8" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y40z8.c",
  "north" : DIR+"/rooms/x23y41z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
