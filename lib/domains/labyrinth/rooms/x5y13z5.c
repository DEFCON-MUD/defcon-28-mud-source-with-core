inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 13, 5 }));
  set_short( "Corridor - x5y13z5" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y14z5.c",
  "south" : DIR+"/rooms/x5y12z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
