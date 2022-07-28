inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 13, 7 }));
  set_short( "Corridor - x29y13z7" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y14z7.c",
  "south" : DIR+"/rooms/x29y12z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
