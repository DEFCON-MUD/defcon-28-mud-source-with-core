inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 48, 7 }));
  set_short( "Corridor - x32y48z7" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y48z7.c",
  "east" : DIR+"/rooms/x33y48z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
