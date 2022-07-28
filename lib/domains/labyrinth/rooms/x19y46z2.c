inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 46, 2 }));
  set_short( "Passage - x19y46z2" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y46z2.c",
  "north" : DIR+"/rooms/x19y47z2.c",
  "south" : DIR+"/rooms/x19y45z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
