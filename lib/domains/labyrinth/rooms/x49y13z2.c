inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 13, 2 }));
  set_short( "Hallway - x49y13z2" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y14z2.c",
  "south" : DIR+"/rooms/x49y12z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
