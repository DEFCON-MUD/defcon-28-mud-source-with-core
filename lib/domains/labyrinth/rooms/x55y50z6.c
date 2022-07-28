inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 50, 6 }));
  set_short( "Corridor - x55y50z6" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y51z6.c",
  "south" : DIR+"/rooms/x55y49z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
