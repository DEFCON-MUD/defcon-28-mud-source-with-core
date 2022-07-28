inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 50, 4 }));
  set_short( "Corridor - x19y50z4" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y50z4.c",
  "north" : DIR+"/rooms/x19y51z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
