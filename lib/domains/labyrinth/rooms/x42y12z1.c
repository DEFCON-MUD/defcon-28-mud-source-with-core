inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 12, 1 }));
  set_short( "Corridor - x42y12z1" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y12z1.c",
  "east" : DIR+"/rooms/x43y12z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
