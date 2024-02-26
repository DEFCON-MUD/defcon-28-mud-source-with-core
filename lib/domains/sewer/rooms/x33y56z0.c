inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 56, 0 }));
  set_short( "Corridor - x33y56z0" );
set_objects( DIR+"/monsters/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y56z0.c",
  "east" : DIR+"/rooms/x34y56z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
