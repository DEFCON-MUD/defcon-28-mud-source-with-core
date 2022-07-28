inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 43, 7 }));
  set_short( "Hallway - x31y43z7" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y44z7.c",
  "south" : DIR+"/rooms/x31y42z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
