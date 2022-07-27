inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 34, 3 }));
  set_short( "Corridor - x33y34z3" );
set_objects( DIR+"/monsters/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y35z3.c",
  "south" : DIR+"/rooms/x33y33z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
