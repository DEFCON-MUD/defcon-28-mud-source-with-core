inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 24, 7 }));
  set_short( "Corridor - x29y24z7" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y24z7.c",
  "south" : DIR+"/rooms/x29y23z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
