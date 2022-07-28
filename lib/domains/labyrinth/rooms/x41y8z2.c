inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 8, 2 }));
  set_short( "Hallway - x41y8z2" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y8z2.c",
  "south" : DIR+"/rooms/x41y7z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
