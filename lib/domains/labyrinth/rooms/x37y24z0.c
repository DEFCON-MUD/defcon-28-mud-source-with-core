inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 24, 0 }));
  set_short( "Corridor - x37y24z0" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y25z0.c",
  "south" : DIR+"/rooms/x37y23z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
