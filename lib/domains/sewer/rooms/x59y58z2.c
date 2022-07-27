inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 58, 2 }));
  set_short( "Passage - x59y58z2" );
set_objects( DIR+"/monsters/ratqueen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y58z2.c",
  "north" : DIR+"/rooms/x59y59z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
