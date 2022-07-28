inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 10, 0 }));
  set_short( "Hallway - x38y10z0" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y10z0.c",
  "east" : DIR+"/rooms/x39y10z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
