inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 16, 9 }));
  set_short( "Hallway - x45y16z9" );
set_objects( DIR+"/monsters/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y16z9.c",
  "east" : DIR+"/rooms/x46y16z9.c",
  "south" : DIR+"/rooms/x45y15z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
