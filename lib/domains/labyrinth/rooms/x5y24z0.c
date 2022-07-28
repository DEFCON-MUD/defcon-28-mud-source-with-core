inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 24, 0 }));
  set_short( "Hallway - x5y24z0" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y24z0.c",
  "south" : DIR+"/rooms/x5y23z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
