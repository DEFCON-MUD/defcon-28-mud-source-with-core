inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 14, 7 }));
  set_short( "Hallway - x1y14z7" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y14z7.c",
  "north" : DIR+"/rooms/x1y15z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
