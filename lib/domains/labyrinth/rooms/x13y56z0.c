inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 56, 0 }));
  set_short( "Corridor - x13y56z0" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y56z0.c",
  "north" : DIR+"/rooms/x13y57z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
