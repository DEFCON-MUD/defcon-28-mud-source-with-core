inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 48, 0 }));
  set_short( "Corridor - x61y48z0" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y48z0.c",
  "south" : DIR+"/rooms/x61y47z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
