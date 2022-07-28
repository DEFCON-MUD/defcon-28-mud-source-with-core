inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 34, 0 }));
  set_short( "Hallway - x15y34z0" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y34z0.c",
  "south" : DIR+"/rooms/x15y33z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
