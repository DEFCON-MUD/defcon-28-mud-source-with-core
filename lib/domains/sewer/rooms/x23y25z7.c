inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 25, 7 }));
  set_short( "Hallway - x23y25z7" );
set_objects( DIR+"/monsters/maintainer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y26z7.c",
  "south" : DIR+"/rooms/x23y24z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
