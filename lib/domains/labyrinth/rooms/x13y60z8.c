inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 60, 8 }));
  set_short( "Hallway - x13y60z8" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y60z8.c",
  "north" : DIR+"/rooms/x13y61z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
