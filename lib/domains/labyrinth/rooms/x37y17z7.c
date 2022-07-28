inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 17, 7 }));
  set_short( "Corridor - x37y17z7" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y18z7.c",
  "south" : DIR+"/rooms/x37y16z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
