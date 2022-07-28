inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 7, 0 }));
  set_short( "Hallway - x19y7z0" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y8z0.c",
  "south" : DIR+"/rooms/x19y6z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
