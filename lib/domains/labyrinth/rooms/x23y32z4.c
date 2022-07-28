inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 32, 4 }));
  set_short( "Corridor - x23y32z4" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y32z4.c",
  "south" : DIR+"/rooms/x23y31z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
